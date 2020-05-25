#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#define SIZE 80
#define LIM 3
int main(void)
{
    char strs[LIM][SIZE];
    int i = 0, j = 0;
    int upper = 0, lower = 0, digit = 0, space = 0, other = 0;

    while (i < 3)
        gets(strs[i++]);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; strs[i][j] != '\0'; j++)
        {
            if (isupper(strs[i][j]))
                upper++;
            if (islower(strs[i][j]))
                lower++;
            if (isdigit(strs[i][j]))
                digit++;
            if (isblank(strs[i][j]))
                space++;
            if (ispunct(strs[i][j]))
                other++;
        }
    }
    printf("upper=%d,lower=%d,digit=%d,space=%d,other=%d", upper, lower, digit, space, other);

    return 0;
}
