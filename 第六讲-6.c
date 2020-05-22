#include <stdio.h>
int main(void)
{
    int a[10]={65,60,58,42,40,31,25,19,15,8};
    int input,low,high,mid;
    low = 0;
    high = 9;

    scanf("%d",&input);//输入要查找的数

    while (low+1 != high)
    {  
        mid = (low + high) / 2;
        if(input < a[mid])
            low = mid;
        else if(input > a[mid])
            high = mid;
        else
        {
            printf("%d",mid + 1);
            break;
        }
    }

    if(input == a[high])
    {
        printf("%d", high + 1);

    }
    else if(input == a[low])
    {
        printf("%d", low + 1);

    }
    else if(input != a[mid])
    {
        printf("无此数");

    }
    
    return 0;
}
