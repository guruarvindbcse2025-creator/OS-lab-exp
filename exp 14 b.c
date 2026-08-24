#include &lt;stdio.h&gt;
int main()
{
int n, indexBlock, blocks[20], i;
printf(&quot;Enter Index Block: &quot;);
scanf(&quot;%d&quot;, &amp;indexBlock);
printf(&quot;Enter Number of Blocks: &quot;);
scanf(&quot;%d&quot;, &amp;n);
printf(&quot;Enter Block Numbers:\n&quot;);
for(i = 0; i &lt; n; i++)

81

{
scanf(&quot;%d&quot;, &amp;blocks[i]);
}
printf(&quot;\nIndex Block : %d\n&quot;, indexBlock);
printf(&quot;Allocated Blocks : &quot;);
for(i = 0; i &lt; n; i++)
{
printf(&quot;%d &quot;, blocks[i]);
}
printf(&quot;\n&quot;);
return 0;
}
