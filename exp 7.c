#include &lt;stdio.h&gt;
int main()
{
int n, m, i, j, k;
int allocation[10][10], max[10][10];
int need[10][10];
int available[10];
int finish[10] = {0};
int safeSeq[10];
int count = 0;
printf(&quot;Enter Number of Processes: &quot;);
scanf(&quot;%d&quot;, &amp;n);
printf(&quot;Enter Number of Resources: &quot;);
scanf(&quot;%d&quot;, &amp;m);
printf(&quot;\nEnter Allocation Matrix:\n&quot;);
for(i = 0; i &lt; n; i++)
for(j = 0; j &lt; m; j++)
scanf(&quot;%d&quot;, &amp;allocation[i][j]);
printf(&quot;\nEnter Maximum Matrix:\n&quot;);
for(i = 0; i &lt; n; i++)
for(j = 0; j &lt; m; j++)
scanf(&quot;%d&quot;, &amp;max[i][j]);
printf(&quot;\nEnter Available Resources:\n&quot;);
for(i = 0; i &lt; m; i++)
scanf(&quot;%d&quot;, &amp;available[i]);
for(i = 0; i &lt; n; i++)
{
for(j = 0; j &lt; m; j++)
{
need[i][j] = max[i][j] - allocation[i][j];
}
}
while(count &lt; n)
{
int found = 0;

49

for(i = 0; i &lt; n; i++)
{
if(finish[i] == 0)
{
for(j = 0; j &lt; m; j++)
{
if(need[i][j] &gt; available[j])
break;
}
if(j == m)
{
for(k = 0; k &lt; m; k++)
available[k] += allocation[i][k];
safeSeq[count++] = i;
finish[i] = 1;
found = 1;
}
}
}
if(found == 0)
{
printf(&quot;\nSystem is NOT in Safe State\n&quot;);
return 0;
}
}
printf(&quot;\nSystem is in Safe State\n&quot;);
printf(&quot;Safe Sequence: &quot;);
for(i = 0; i &lt; n; i++)
printf(&quot;P%d &quot;, safeSeq[i]);
printf(&quot;\n&quot;);
return 0;
}
