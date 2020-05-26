// 题目内容：编写一个函数fan(int m)，计算任一输入的整数的各位数字之和。主函数包括输入、输出和调用函数。
// 输入格式:整数
// 输出格式：整数的各位数字之和=结果
// 输入样例：12345
// 输出样例：整数的各位数字之和=15

#include <stdio.h>
int sum;
int fan(int m);

int main(void)
{
    int num;
    
    scanf("%d", &num);
    sum = fan(num);

    printf("整数的各位数字之和=%d", sum);

    return 0;
}

int fan(int m)
{
    while (m)
    {
        sum += m % 10;
        m /= 10;
    }
    return sum;
}