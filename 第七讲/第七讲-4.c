// 题目:  输入10个学生一门课程成绩(注:成绩用整数），要求编写三个函数分别实现求平均值、最低分、成绩按从小到大排序。

// 输入格式: 数据1 数据2  数据3 数据4 数据5... 
            

// 输出格式：平均分=结果（小数点后保留1位有效数字）

//                  最低分=结果

//                 数据1 数据2 数据3....

// 输入样例：67 89 80 76 78 89 90 45 67 87

// 输出样例：平均分=76.80

//                  最低分=45

//                  45 67 67 76 78 80 87 89 89 90

#include <stdio.h>
#include <string.h>
#define NUM 10

int getaver(int score[NUM]);
int getmin(int score[NUM]);
int select(int score[NUM]);


int main(void)
{
    int score[NUM];
    for(int i = 0; i < NUM; i++)
        scanf("%d", &score[i]);

    getaver(score);
    getmin(score);
    select(score);

    return 0;
}

int getaver(int score[NUM])
{
    float aver, sum;
    for(int i = 0; i < NUM; i++)
        sum += score[i];
    printf("平均分=%.2f\n", sum / NUM);
}

int getmin(int score[NUM])
{
    int min;

    for(int i = 0; i < NUM; i++)
    {
        if (min > score[i])
            min = score[i];
    }
    printf("最低分=%d\n", min);
}
int select(int score[NUM])
{
    int j, temp, min;

    for(int i = 0; i < NUM - 1; i++)
    {
        min=i;
        for(j = i + 1; j < NUM; j++)    //找到最小元素的位置
            while(score[j] < score[min])
                min = j;
        if(min != i)
        {
            temp = score[min];     //元素的交换
            score[min] = score[i];
            score[i] = temp;
        }
    }
    for(int i = 0; i < NUM; i++)
        printf("%d ",score[i]);
}