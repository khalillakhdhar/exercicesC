#include<stdio.h>
void divisible(int x)
{
    if(x%3==0)
        printf("%d est divisible par 3",x);
    else
        printf("%d est divisible par 3",x);
}


int main()
{
int x;
    printf("veuillez saisir un entier ! ");
while(scanf("%d",&x)!=1)
{
        printf("veuillez saisir un entier valide ! ");
        while(getchar()!= '\n'); // arrêt de lecture

}
divisible(x);
}
