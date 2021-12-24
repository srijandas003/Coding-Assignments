#include <stdio.h>
int main()
{
    int num1, num2, HCF1;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for(int i=1; i <= num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            HCF1 = i;
    }

    printf("HCF of %d and %d is %d", num1, num2, HCF1);

    return 0;
}