#include<stdio.h>
int main()
{
int notes[5];
int s=0;
float m=0;
int i=0;
int valeur;
do{
    printf("donnez un entier\n");
    while(scanf("%d",&valeur)!=1)
    {
            printf("donnez un entier valide numerique!! \n");
             while(getchar()!= '\n'); // arrêt de lecture

    }
    if(valeur>0)
    {
        notes[i]=valeur;
        i++;

    }
    else
        printf("donner un entier strictement positif!\n");

}
while(i<5);
for(int j=0;j<5;j++)
{
    printf("la valeur est %d\n",notes[j]);
    s+=notes[j];

}
//printf("%d",notes[8]);
m=s/5;
printf("la somme des élément du tableaux est %d, et la moyenne de la classes est : %f\n",s,m);
}
