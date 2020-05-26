// 题目内容：定义一个函数求n!,然后调用该函数求4！+7！+9！之和。

// 输出格式：s=结果

// 输出样例：s=结果

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
