#include &lt;stdio.h&gt;
int main()
{
int pages[50], frames[10];
int n, f;
int i, j, k, pos;

72

int fault = 0;
int found;
printf(&quot;Enter Number of Pages: &quot;);
scanf(&quot;%d&quot;, &amp;n);
printf(&quot;Enter Reference String:\n&quot;);
for(i = 0; i &lt; n; i++)
scanf(&quot;%d&quot;, &amp;pages[i]);
printf(&quot;Enter Number of Frames: &quot;);
scanf(&quot;%d&quot;, &amp;f);
for(i = 0; i &lt; f; i++)
frames[i] = -1;
for(i = 0; i &lt; n; i++)
{
found = 0;
for(j = 0; j &lt; f; j++)
{
if(frames[j] == pages[i])
{
found = 1;
break;
}
}
if(found == 0)
{
for(j = 0; j &lt; f; j++)
{
int future = 999;
for(k = i + 1; k &lt; n; k++)
{
if(frames[j] == pages[k])
{
future = k;
break;
}
}
if(j == 0 || future &gt; pos)
{
pos = future;
}

73

}
frames[0] = pages[i];
fault++;
}
}
printf(&quot;Total Page Faults = %d\n&quot;, fault);
return 0;
}
