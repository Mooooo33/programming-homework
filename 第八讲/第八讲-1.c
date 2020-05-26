// 题目内容：
//  输入10个整数，将其中最小的数与第1个数兑换，把最大的数与最后一个数对换。写3个函数：（1）输入10个数 （2）进行处理 （3）输出10个数

// 输入格式:
// 10 9 8 7 6 5 4 3 2 1 

// 输出格式：
// 1 9 8 7 6 5 4 3 2 10 

// 输入样例：
// 10 9 8 7 6 5 4 3 2 1 

// 输出样例：
// 1 9 8 7 6 5 4 3 2 10 

#include <stdio.h>
#define NUM 10

int input(int *str)
{
    for (int i = 0; i < NUM; i++)
        scanf("%d", str + i);
    return 0;
}

int sort(int *str)
{
    int i, j, temp, min_i, max_i = NUM - 1;

    for (i = 1; i < NUM; i++)
    {
        if (*(str + i) < *(str + min_i))
            min_i = i;
    }
    if (min_i != 0)
    {
        temp = *str;
        *str = *(str + min_i);
        *(str + min_i) = temp;
    }
    for(j = NUM - 2; j >= 0; j--)
    {
        if (*(str + j) > *(str + max_i))
            max_i = j;
    }
    if (max_i != (NUM - 1) )
    {
        temp = *(str + NUM - 1);
        *(str + NUM - 1) = *(str + max_i);
        *(str + max_i) = temp;
    }
    return 0;
}

int print(int *str)
{
    for (int i = 0; i < NUM; i++)
        printf("%d ", *(str +i) );
    return 0;
}

int main(void)
{
    int str[NUM] = {0};

    input(str);
    sort(str);
    print(str);

    return 0;
}