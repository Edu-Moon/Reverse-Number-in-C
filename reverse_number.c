#include<stdio.h>
int main()
{
   int i,r,temp0=0;
  printf("Enter the number: ");
  scanf("%d",&i);
  for(;i>0;)
  {
    r=i%10;
    i=i/10;
    temp=(temp*10)+r;
  }
  printf("The reverse of given number is: %d",temp0);
  return 0;
}
