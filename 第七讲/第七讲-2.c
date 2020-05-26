// 题目内容：编写一函数，其功能是判断某数是否是素数。在主函数中调用该函数统计100~1000的素数个数。

// 输出格式：素数个数=结果

// 输出样例：素数个数=结果

#include <stdio.h>
#include <math.h>
#define NUM 1000

int num(int);
int main(void)
{
    int cnt = 0, i = 100;
    while (i <= NUM)
    {
        if ( num(i) )
            cnt++;
        i++;
    }
    printf("素数个数=%d", cnt);

    return 0;
}

int num(int x)
{
    int y, i;

    y = (int)(sqrt(x));
    for (i = 2; i <= y; i++)
    {
        if (x % i == 0)
            break;
    }
    if (i <= y)
        return 0;
    else
        return 1;
}