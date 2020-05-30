// 题目内容：
// 编写一个函数，实现两个字符串的比较。
// 设p1指向字符串s1，p2指向字符串s2.要求当s1=s2时，返回值为0；若s1≠s2，返回他们二者第一个不同字符的ASCII码差值；如果s1>s2，则输出正值；若s1<s2，输出负值。

// 输入格式:
// s1
// s2

// 输出格式：
// 两者差值

// 输入样例：
// ABC
// abc

// 输出样例：
// -32

#include<stdio.h>
#include<string.h>
#define SIZE 20

int fun(void);
int main(void) {
	int difference = fun();

	printf("%d", difference);
	return 0;
}

int fun(void){
	char str1[SIZE], str2[SIZE];
	scanf("%s\n%s", str1, str2);
	char* pr1 = str1, * pr2 = str2;

	for (int i = 0; i < SIZE; i++) {
		if (*pr1 == *pr2) {
			continue;
		}
		if (*pr1 != *pr2) {
			return *pr1 - *pr2;
		}
	}

	return 0;
}
