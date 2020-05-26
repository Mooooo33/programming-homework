// 题目内容：写一函数，将一个字符串中的数字字符复制到另一个字符串中，然后输出数字字符串。
//                (注：串的长度为30）

// 输入格式:字符串

// 输出格式：数字字符串=结果

// 输入样例：123agbd56

// 输出样例：数字字符串=12356

#include <stdio.h>
#include <string.h>
#define CHAR 30
char* get(char[]);

int main(void)
{
    char sizes[CHAR];
    char sizes2[CHAR];
    gets(sizes);
    strcpy(sizes2, get(sizes));
    printf("数字字符串=");
    fputs(sizes2, stdout);

    return 0;
}
 char* get(char sizes[])
 {
     int i, j = 0;
     static char sizes2[CHAR];
     for (i = 0; i < CHAR; i++)
     {
         if (sizes[i] >= 48 && sizes[i] <= 57)
            sizes2[j++] = sizes[i];
     }

     sizes2[j] = '\0';
     return sizes2;
 }