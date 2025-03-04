#include<stdio.h>
#define N 5
void saisirNotes(float notes[])
{
    for (int i=0;i<N;i++)
    {
        do
        {
            printf("Veuillez saisir la note de l etudiant %d (entre 0 et 20) : ",i+1);
            scanf("%f",&notes[i]);
            if(notes[i]<0 || notes[i]>20)
            {
                printf("Veuillez saisir une note valide!\n ");
            }

        }while(notes[i]<0 || notes[i]>20);
    }
}
float calculerMoyenne(float notes[])
{
float somme =0;
for(int i; i<N;i++)
{
    somme+=notes[i];
}
return somme/N;
}
int compteSup10(float notes[])
{
int count=0;
for(int i=0;i<N;i++)
{
if(notes[i]>10)
    count++;
}
return count;

}
int compterInfMoyenne(float notes[],float moyenne)
{
    int count=0;
for(int i=0;i<N;i++)
{
if(notes[i]<moyenne)
    count++;
}
return  count;

}

float trouverMax(float notes[])
{
float max=notes[0];
for(int i=1;i<N;i++)
{
    if(notes[i]>max)
        max=notes[i];
}
return max;

}
float trouverMin(float notes[])
{
float min=notes[0];
for(int i=1;i<N;i++)
{
    if(notes[i]<min)
        min=notes[i];
}
return min;

}
void afficherResultat(int sup10,int infMoy,float moyenne, float min, float max)
{
    printf("la moyenne de la classe est %f\n",moyenne);
    printf("\nNombre des etudiants ayant une note >10 %d\n",sup10);
    printf("\nNombre des etudiants ayant une note < moyenne (%f) %d\n",moyenne,infMoy);
    printf("\nNote maximale de la classe: %d\n",max);
    printf("\nNote minimale de la classe: %d\n",min);
}
int main()
{
    float notes[N],moyenne,min,max;
    int sup10,infMoy;
    saisirNotes(notes);
    moyenne=calculerMoyenne(notes);
    sup10=compteSup10(notes);
    infMoy=compterInfMoyenne(notes,moyenne);
    max=trouverMax(notes);
    min=trouverMin(notes);
    afficherResultat( sup10, infMoy,moyenne,  min, max);
}
