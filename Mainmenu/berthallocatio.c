/*
Seatberth printing with seat numbers
U.ANANDHAKUMAR 
EC21B1087
*/
#include <stdio.h>
int main()
{
int n,a,i;// n=seat number ; a=common difference ; i= iterating variable for seat number 
printf("enter the seat nos");
scanf("%d",&n);
if (n>80 || n<=0)
{
printf("Invalid input");
}
else
{
for(i=1;i<80;i=i+a)// Set of seat numbers which belongs to lower berth
{
  if(i==n)
  {
  printf("Lower berth\n");  
  }
  if(i%2==0)// adding common difference to even numbers
  {
   a=5;  
  }
  else// adding common difference to odd numbers
  {
  a=3;
  }
}
for(i=2;i<79;i=i+a)// Set of seat numbers which belongs to middle berth
{
  if(i==n)
  {
  printf("Middle berth\n");  
  }
  if(i%2==0)// adding common difference to even numbers
  {
   a=3;  
  }
  else// adding common difference to odd numbers
  {
  a=5;
  }
}
for(i=3;i<78;i=i+a)// Set of seat numbers which belongs to upper berth 
{
  if(i==n)
  {
  printf("Upper berth\n");  
  }
  if(i%2==0)// adding common difference to even numbers
  {
   a=5;  
  }
  else// adding common difference to odd numbers
  {
  a=3;
  }
}
for(i=7;i<82;i=i+a)// Set seat numbers which belongs to side berth
{
  if(i==n && i%2==0){printf("side upper berth\n");}// Set seat numbers which belongs to  side lower berth
  else if(i==n){printf("side lower berth\n");}// Set seat numbers which belongs to side upper berth
  if (i%2==0){a=7;}//adding common difference to even terms
  else{a=1;}//adding common difference to odd terms
}
}
return 0;
}

