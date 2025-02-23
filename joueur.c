#include<stdio.h>
int main()
{
    int age;

    do
    {
        printf("donner un age");
        scanf("%d",&age);
    }
    while(age<0);

   /* while(age<0)
    {
        printf("%d",age);
        printf("donner un age ");
        scanf("%d",&age);
    }
    */
    if(age<12)
        printf("junior");
    else if(age<16)
        printf("cadet");
    else
        printf("seniore");


    return 0;
}
