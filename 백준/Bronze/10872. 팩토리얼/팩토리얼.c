#include <stdio.h>

int ft(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*ft(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", ft(n));
    return 0;
}