// 题目内容：
// 有n个整数，使前面各数顺序向后移m个位置，最后m个数变成最前面m个数，写一个函数实现以上功能

// 输入格式:
// 输入分为两行，第一行为数组个数n和移动位置m（3<=n<=15,0<m<n)，第二行为数组内容
// n m
// x1 x2 x3

// 输出格式：
// （当m=1时输出，这句不输出，只是举例说明）
// x3 x1 x2

// 输入样例：
// 3 2
// 1 2 3

// 输出样例：
// 2 3 1

#include <stdio.h>

int func(int *x, int n, int m)
{
    int t[30], i;

     for(i = 0; i < n; i++)
         t[i] = x[i];
     for(i = 0; i < m; i++)
         x[i] = t[n-m+i];
     for(i = m; i < n; i++)
         x[i] = t[i - m];
    
    return 0;
}
int main(void)
{
    int i, n, m, x[30];

    scanf ("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    func (x, n ,m);
    for (i = 0; i < n; i++)
        printf("%d ", x[i]);  

    return 0;
}