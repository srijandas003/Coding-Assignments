#include <stdio.h>  
  
int main()  
{  
    int Start, End, sum = 0;  
  
    printf("Enter Integer for Starting Range :");  
    scanf("%d", &Start);  
    printf("Enter Integer for Ending Range :");  
    scanf("%d", &End); 
  
    while(Start <= End)  
    {  
        sum = sum + Start;  
        Start++;  
    }  
    printf("Sum : %d",sum);  

    return 0;  
}  