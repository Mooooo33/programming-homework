#include <stdio.h>
#define COLUMN 5
#define ROW 4

int main(void)
{
    int a[ROW][COLUMN];
    int i, j, num;
    int row = 0, temp = 0, rmax = 0, count = 0;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }

    for(row = 0; row < ROW; row++)
    {
        for(i = 0; i < 5; i++)
        {
            if(a[row][i] > rmax)
            {
                rmax = a[row][i];
                num = i;
            }

        }

        for(j = 0; j < 4; j++)
        {
            if(a[row][num] <= a[j][num])
            {
                count++;
                if(count == 4)
                {
                    printf("a[%d][%d]=%d", row, num, a[row][num]);
                    temp = 1;
                }
                continue;
            }
            if(a[row][num] > a[j][num])
                break;
        }
    }   

    if(temp == 0)
        printf("It is not exist!");

    return 0;
}
