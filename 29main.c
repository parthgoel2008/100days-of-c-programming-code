#include <stdio.h>
int main()
{
    int n;
    long long fact = 1;
    scanf("%d", &n);
    if(n < 0 || n > 20)
        printf("Invalid input");
    else
    {
        for(int i = 1; i <= n; i++)
            fact = fact * i;
        printf("%lld", fact);
    }
    return 0;
}