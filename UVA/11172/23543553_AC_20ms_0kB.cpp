#include<stdio.h>
int main()
{
int a,b,c,i;
while(scanf("%d",&a)==1)
{
for(i=0;i<a;i++)
    {
    scanf("%d%d",&b,&c);
    if(b>c)
    printf(">\n");
    else if(b<c)
    printf("<\n");
    else
    printf("=\n");
    }
}
return 0;
}