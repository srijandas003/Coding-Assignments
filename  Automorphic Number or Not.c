#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    int num, sqr, temp, last;
    int n =0;
 
    printf("Enter a number :");
    scanf("%d",&num);
 
    sqr = num*num;
    temp = num;
    while(temp>0){
        n++;
        temp = temp/10;
    }
    int den = floor(pow(10,n));
    last = sqr % den;
 
    if(last == num)
        printf("Automorphic number \n");
    else
        printf("Not Automorphic number \n");
 
    return 0;
}