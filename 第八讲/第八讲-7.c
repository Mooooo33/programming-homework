// ��Ŀ���ݣ�
//  ��������������Ȼ�����û�ѡ��1��2��ѡ1ʱ����max��������������еĴ�����ѡ2ʱ����min��������������е�С����

// �����ʽ:
// ��һ ���� ģʽ��1��2��

// �����ʽ��
// ���������С��

// ����������
// 10 12 2

// ���������
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