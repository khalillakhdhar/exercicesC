#include<stdio.h>
int main()
{
    int a,b,c,temp;
    printf("entrez valeur 1: ");
    scanf("%d",&a);
    printf("entrez valeur 2: ");
    scanf("%d",&b);
    printf("entrez valeur 3: ");
    scanf("%d",&c);
    if(a>b){temp=a;a=b;b=temp;}
    if(a>c){temp=a;a=c;c=temp; }
    if(b>c) {temp=b;b=c;c=temp;}
    printf("Nombres trié: %d %d %d\n",a,b,c);
    /*
    a,b,c
    a valeur plus basse
    b 2éme
    c 3
    if1: garantie que a<b
    */
}
