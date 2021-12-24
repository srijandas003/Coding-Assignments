#include <stdio.h>
int main()
{
  int a, b,c,d,x,y,i,gcd;
  printf("Enter the numerator for 1st number :");
  scanf("%d",&a);
  printf("Enter the denominator for 1st number :");
  scanf("%d",&b);
  printf("Enter the numerator for 2nd number :");
  scanf("%d",&c);
  printf("Enter the denominator for 2nd number :");
  scanf("%d",&d);
  x=(a*d)+(b*c);
  y=b*d; 

  for(i=1; i <= x && i <= y; ++i)
  {
    if(x%i==0 && y%i==0)
    gcd = i;
  }
  printf("The added fraction is %d/%d ",x/gcd,y/gcd);
  return 0;
}