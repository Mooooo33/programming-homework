// 题目内容：
// 寻找字符串中最长的单词并输出(将非字母字符看做单词分隔符)

// 输入格式:
// 整个字符串（长度<150）

// 输出格式：
// 最长的单词

// 输入样例：
// I have a pencil.

// 输出样例：
// pencil

#include<stdio.h>
#include<string.h>
int main(void)
{ 
    int alphabetic(char);
    int longest(char[]);
    int i;
    char line[100];
    
    gets(line);
    for(i=longest(line);alphabetic(line[i]);i++)
        printf("%c",line[i]);

    return 0;
}
int alphabetic(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return(1);
    else
        return(0);
}

int longest(char string[])
{
    int len = 0, i, length = 0, flag = 1, place = 0, point;

        for(i = 0; i <= strlen(string); i++)
            if( alphabetic(string[i]) )
                if(flag)
                {
                    point = i;
                    flag = 0;
                }
                else
                    len++;
            else
            {
                flag=1;
                if(len >= length)
                {
                    length = len;
                    place = point;
                    len = 0;
                }
            }

    return(place);
}