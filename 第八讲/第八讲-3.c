// 题目内容：
// n个人围成一圈，顺序排号，从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，直到圈子里只剩下一个人为止，问最后留下的那位是开始状态的第几个人?

// 输入格式:
// n (n < 50)

// 输出格式：
// 留下那位的序号（从1开始）

// 输入样例：
// 3

// 输出样例：
// 2

#include<stdio.h>
#include<stdlib.h>
#define UP 3

int main(void) {

	int total, out, up, i, num = 0;
	int* arr;

	scanf("%d", &total);
	arr = (int*)calloc(total, sizeof(int));
	
	for (out = 0; out < total-1; out++){
		up = 0;
		while (up < UP){
			if (num == total){
				num = 0;
			}
			if (0 == *(arr + num)) {
				up++, num++;
				continue;
			}
			num++;
		}
		*(arr + num - 1) = 1;
	}

	for (i = 0; 1 == *(arr + i); i++)
		;

	printf("%d", i+1);
	return 0;
}

