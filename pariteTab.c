#include<stdio.h>
int parite(int x)
{
    if(x%2==0)
   return 1;
   else
    return 0;

}
/*
void parite(int x)
{
if(x%2==0)
            printf("la valeur est: %d\n",x);

}
*/
int main()
{
int valeurs[5];
for(int i=0;i<4;i++)
{
printf("donner un entier :\n");
scanf("%d",&valeurs[i]);
}
for(int i=0;i<4;i++)
{
    if(parite(valeurs[i]))
        printf("la valeur est: %d\n",valeurs[i]);
}
}
