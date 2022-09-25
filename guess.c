#include<stdio.h> 
#include<stdlib.h> /*生成随机数的头文件*/
#include<time.h> /*生成时间戳*/

int main()
{   
    srand(time(0));/*初始化种子*/
    int num=rand()%100+1; /*生成一个1-100的随机数*/
    int guess;
    scanf("%d",&guess);
    do
    {
        if (guess<num)
            printf("your number is small.\n");
        else if (guess>num)
            printf("your number is big.\n");
        else 
            printf("you are right.\n");
        scanf("%d",&guess);
    }
    while (guess!=num);
    printf ("you are right.\n");
    return 0;
}
