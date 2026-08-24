#include &lt;stdio.h&gt;
int main()
{
int pages[50], frames[10], time[10];
int n, f, i, j;
int fault = 0, count = 0;
int found, pos, min;
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
count++;
time[j] = count;
found = 1;
break;
}
}
if(found == 0)
{
min = time[0];
pos = 0;

71

for(j = 0; j &lt; f; j++)
{
if(frames[j] == -1)
{
pos = j;
break;
}
if(time[j] &lt; min)
{
min = time[j];
pos = j;
}
}
frames[pos] = pages[i];
count++;
time[pos] = count;
fault++;
}
}
printf(&quot;Total Page Faults = %d\n&quot;, fault);
return 0;
}
