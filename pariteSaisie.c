#include<stdio.h>

void parite()
{
    int nb;
    printf("veuillez saisir un entier ! ");
    while(scanf("%d",&nb)!=1) // verifie l'act de lecture pour %d (digit)
    {
        printf("veuillez saisir un entier valide ! ");
        while(getchar()!= '\n');

    }
    if(nb%2==0)
        printf("le nombre est paire");
    else
        printf("le nombre est impaire");
}


int main()
{

    parite();
return 0;
}
