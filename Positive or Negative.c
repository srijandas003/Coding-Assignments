#include <stdio.h>
int main() {
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if (num <= 0) {
        if (num == 0)
            printf("You entered 0.");
        else
            printf("Entered number is negative.");
    } else
        printf("Entered number is positive.");
    return 0;
}