#include<stdio.h>
int main() {
    int n; 
    int d; 
    int count=0;
    printf("Enter the number : "); 
    scanf("%d",&n);
    printf("Enter the digit for which you want occurence : "); 
    scanf("%d",&d); 
    while(n) 
    {
        int k = n%10; 
        n=n/10; 
        if(k==d) 
        {
            count++;
        }
    }
    printf("Ocuurence of %d is : %d",d,count);
    return 0;
}