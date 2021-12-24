#include<stdio.h>  
int main()    
{    
  int n,r,sum=0,temp;    
  printf("Enter the number :");    
  scanf("%d",&n);    
  temp=n;    
  while(n>0)    
  {    
    r=n%10;    
    sum=sum+(r*r*r);    
    n=n/10;    
  }    
  if(temp==sum)    
    printf("%d is Armstrong  Number ",temp);    
  else    
  printf("%d is not Armstrong number",temp);

return 0;  
} 