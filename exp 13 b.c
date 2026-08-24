#include &lt;stdio.h&gt;
struct student
{
int regno;
char name[20];
};
int main()
{
FILE *fp;
struct student s;
fp = fopen(&quot;random.dat&quot;, &quot;wb+&quot;);
printf(&quot;Enter Register Number: &quot;);
scanf(&quot;%d&quot;, &amp;s.regno);
printf(&quot;Enter Name: &quot;);
scanf(&quot;%s&quot;, s.name);
fwrite(&amp;s, sizeof(s), 1, fp);
rewind(fp);
fread(&amp;s, sizeof(s), 1, fp);
printf(&quot;\nRecord Found\n&quot;);
printf(&quot;Reg No : %d\n&quot;, s.regno);
printf(&quot;Name : %s\n&quot;, s.name);
fclose(fp);
return 0;
}
