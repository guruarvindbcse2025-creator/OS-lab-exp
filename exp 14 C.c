#include &lt;stdio.h&gt;
int main()
{
int n, blocks[20], i;
printf(&quot;Enter Number of Blocks: &quot;);
scanf(&quot;%d&quot;, &amp;n);
printf(&quot;Enter Block Numbers:\n&quot;);
for(i = 0; i &lt; n; i++)
{
scanf(&quot;%d&quot;, &amp;blocks[i]);
}
printf(&quot;\nLinked Allocation:\n&quot;);
for(i = 0; i &lt; n - 1; i++)
{
printf(&quot;%d --&gt; &quot;, blocks[i]);
}
printf(&quot;%d --&gt; NULL\n&quot;, blocks[n - 1]);
return 0;
}
