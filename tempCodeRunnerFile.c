#include <stdio.h>
#include <math.h>

int main()

{int n;
    scanf("%d",n);
    int i = 0;
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("%d\n", n, sum);
}