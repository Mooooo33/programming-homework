// 题目内容：
// 写一个函数，求一个字符串的长度，包括字符串中间的空格。

// 输入格式:
// 字符串（长度不超过60）

// 输出格式：
// 长度

// 输入样例：
// abcdefg

// 输出样例：
// 7

#include <stdio.h>
int length_string(char *s);

int main(void)
{
	char s[60];

	gets(s);

	printf( "%d",length_string(s) );

    return 0;
}

int length_string(char *s)
{
	int i = 0;

	while(*s != '\0')
    {
		s++;
		i++;
	}

	return i;
}