#include<stdio.h>
int main(void)
{
    int input[5], index;

    for (index = 0; index < 9; index++)
        scanf("%d", &input[index]);
    
    printf("%d %d %d %d %d",input[4],input[3],input[2],input[1],input[0]);

    return 0;
}
