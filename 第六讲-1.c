#include<stdio.h>
int main(void)
{
    int input[9], index;

    for (index = 0; index < 9; index++)
        scanf("%d", &input[index]);
    
    printf("%d",input[0]+input[4]+input[8]);

    return 0;
}
