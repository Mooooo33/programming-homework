// 题目内容：
//  输入两个整数，然后让用户选择1或2，选1时调用max函数，输出二者中的大数，选2时调用min函数，输出二者中的小数。

// 输入格式:
// 数一 数二 模式（1或2）

// 输出格式：
// 最大数或最小数

// 输入样例：
// 10 12 2

// 输出样例：
// 10

#include <stdio.h>
int main(void) 
{
	int num1 =0, num2=0, choice, max, min;
    
	scanf("%d %d %d", &num1, &num2, &choice);

	num1 - num2 > 0 ? (max = num1, min = num2) : (max = num2, min = num1);
	choice == 1 ? printf("%d", max) : printf("%d", min);

	return 0;
}