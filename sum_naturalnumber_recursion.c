//WAP TO FIND SUM OF NATURALNUMBER USING RECURSION
#include <stdio.h>
int sumnaturalnum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumnaturalnum(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter a positive integer:");
    scanf("%d", &n);
    printf("sum of first %d natural number is: %d\n", n, sumnaturalnum(n));

    return 0;
}