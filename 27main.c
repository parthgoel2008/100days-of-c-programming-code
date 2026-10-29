#include <stdio.h>
int main()
{
    int n, sum = 0;
    for(int i = 1; ; i++)
    {
        scanf("%d", &n);
        break;
    }
    for(int i = 1; i <= n; i++)
        sum = sum + (2 * i - 1);
    printf("%d", sum);
    return 0;
}