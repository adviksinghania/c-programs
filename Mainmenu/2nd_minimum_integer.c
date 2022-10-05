#include<stdio.h>
int main()
{
int N,n=0,a,b,c;
printf("enter the N,1st,2nd");
scanf("%d%d%d",&N,&a,&b);
while (n<N-2)
{
    n++;
    printf("nos");
    scanf("%d",&c);
    if (c<a)
      {
       a=c;
      }
    else if(c<b)
      {
       b=c;
      }
}    
printf("%d %d %d\n",a,b,c);
if (a>b)
{
    printf("%d\n",a);
}
else
{
    printf("%d\n",b);
}
}
