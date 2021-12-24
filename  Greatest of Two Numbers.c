#include<stdio.h>
int main()
{
    int Num1,Num2;
    printf("Enter two numbers :");
    scanf("%d %d",&Num1, &Num2);
        
    
    if(Num1 > Num2)
        printf("%d is greatest",Num1);

    else
        printf("%d is greatest",Num2);   
            
    return 0;
}