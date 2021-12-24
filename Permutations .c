    #include<stdio.h>
    int factorial(int num)
    {
        int fact=1;
        for(int i=num; i>=1 ;i--)
            fact*=i;
        return fact;
    }
    int main()
    {
        int n,r;
        printf("Enter number of people :");
        scanf("%d",&n);
        printf("Enter number of seats :");
        scanf("%d", &r);
        if(r<n)
        {
            printf("Cannot adjust %d people on %d seats", n, r);
            return 0;
        }

        int p = factorial(r)/factorial(r-n);

        printf("Total arrangements :%d",p);
        return 0;
    }