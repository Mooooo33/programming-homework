#include<stdio.h>
int main(void)
{
    int a[10];
    int i,j,t;
    
    for (i=0;i<10;i++)
      scanf("%d",&a[i]);
    for(j=0;j<9;j++)
      for(i=0;i<9-j;i++)
        if(a[i]>a[i+1])
        {
        t=a[i];a[i]=a[i+1];a[i+1]=t;
        }
    for(i=0;i<9;i++)
      printf("%d ",a[i]);
    printf("%d",a[9]);
    return 0;
}
