#include <stdio.h>
int main(void)
{
    int a[11]={109,88,75,70,66,60,45,32,25,12};
    int index, j, input;

    scanf("%d", &input);

    j=10;
    for (index = 9; index >= 0; index--)
        if(input>a[index])
            j--;
    if (10-j>0)
        for (index = 9; index > j - 1; index--)
            a[index+1]=a[index];
            a[j]=input;

    for(index = 0; index < 10; index++)
        printf("%d ",a[index]);
    printf("%d", a[index]);

    return 0;
}
