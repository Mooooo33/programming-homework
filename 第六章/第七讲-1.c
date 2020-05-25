#include <stdio.h>
int factorial();

int main(void)
{
    printf("s=%d",factorial(4)+factorial(7)+factorial(9));

    return 0;
}

int factorial(int n)//求阶乘函数
{
    int sum = 1;
    for(int i=1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
