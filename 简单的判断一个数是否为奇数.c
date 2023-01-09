#include<stdio.h>

int main()
{
    int a=0;
    int b=2; 
    int i=0;
    //i=a%b;
    scanf("%d",&a);
    i=a%b;
    //printf("%d\n",i);
    if(i==1)
        {
            printf("奇数为:%d\n",i);
        }
    else
        {
            printf("偶数为:%d\n",i);
        }
    return 0;
}