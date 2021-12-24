#include <stdio.h>
 
int handshake(int n)
{
    if (n == 0)
        return 0;
    else
        return (n - 1) + handshake(n - 1);
}
 
int main()
{
    int n;
  	printf("enter no: ");
  	scanf("%d",&n);
    printf("%d", handshake(n));
    return 0;
}