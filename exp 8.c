#include &lt;stdio.h&gt;
int main()
{
int allocation[10][10], request[10][10];
int available[10];
int work[10];
int finish[10];
int n, m;
int i, j, k;
int found;
printf(&quot;Enter Number of Processes: &quot;);
scanf(&quot;%d&quot;, &amp;n);
printf(&quot;Enter Number of Resource Types: &quot;);
scanf(&quot;%d&quot;, &amp;m);
printf(&quot;\nEnter Allocation Matrix:\n&quot;);
for(i = 0; i &lt; n; i++)
{
for(j = 0; j &lt; m; j++)
{
scanf(&quot;%d&quot;, &amp;allocation[i][j]);
}
}
printf(&quot;\nEnter Request Matrix:\n&quot;);
for(i = 0; i &lt; n; i++)
{
for(j = 0; j &lt; m; j++)
{
scanf(&quot;%d&quot;, &amp;request[i][j]);
}
}
printf(&quot;\nEnter Available Resources:\n&quot;);
for(i = 0; i &lt; m; i++)
{
scanf(&quot;%d&quot;, &amp;available[i]);
work[i] = available[i];
}
for(i = 0; i &lt; n; i++)

53

{
finish[i] = 0;
}
do
{
found = 0;
for(i = 0; i &lt; n; i++)
{
if(finish[i] == 0)
{
for(j = 0; j &lt; m; j++)
{
if(request[i][j] &gt; work[j])
break;
}
if(j == m)
{
for(k = 0; k &lt; m; k++)
{
work[k] += allocation[i][k];
}
finish[i] = 1;
found = 1;
}
}
}
} while(found);
found = 0;
printf(&quot;\nDeadlocked Processes:\n&quot;);
for(i = 0; i &lt; n; i++)
{
if(finish[i] == 0)
{
printf(&quot;P%d &quot;, i);
found = 1;
}
}
if(found == 0)
{

54

printf(&quot;No Deadlock Detected&quot;);
}
printf(&quot;\n&quot;);
return 0;
}
