#include <stdio.h>
#include <string.h>
int main(void)
{
    int i, j, index;
    char str[5][100],p[100];

    scanf("%s", &str[0]);
    scanf("%s", &str[1]);
    scanf("%s", &str[2]);
    scanf("%s", &str[3]);
    scanf("%s", &str[4]);

    for(i = 0; i < 4; i++)
    {
        index = i;
        for(j = i + 1; j < 5; j++)
        {
            if(strcmp(str[index],str[j]) > 0 )
                index = j;
        }
        strcpy(p, str[index]);
        strcpy(str[index], str[i]);
        strcpy(str[i], p);
    }

    for(i = 0; i < 5; i++)
        printf("%s\n",str[i]);

    return 0;
}
