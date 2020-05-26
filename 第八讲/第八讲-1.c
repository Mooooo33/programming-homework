// ��Ŀ���ݣ�
//  ����10����������������С�������1�����һ����������������һ�����Ի���д3����������1������10���� ��2�����д��� ��3�����10����

// �����ʽ:
// 10 9 8 7 6 5 4 3 2 1 

// �����ʽ��
// 1 9 8 7 6 5 4 3 2 10 

// ����������
// 10 9 8 7 6 5 4 3 2 1 

// ���������
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