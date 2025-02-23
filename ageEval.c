#include<stdio.h>
int main()
{
    int age;
    printf("donnez l age du joueur");
    scanf("%d",&age);
    if(age<12)
        printf("minimes");
    else if(age<18)
        printf("cadet");
    else
        printf("seniore");



    return 0;

}

