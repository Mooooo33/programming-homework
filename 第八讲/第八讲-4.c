// ��Ŀ���ݣ�
// дһ����������һ���ַ����ĳ��ȣ������ַ����м�Ŀո�

// �����ʽ:
// �ַ��������Ȳ�����60��

// �����ʽ��
// ����

// ����������
// abcdefg

// ���������
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