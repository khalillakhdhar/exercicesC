#include<stdio.h>
int estBissextile(int annee)
{
return (annee %4==0 && annee%100!=0);
}
int dateValide(int jour, int mois,int annee)
{
    if(mois<1|| mois>12 || jour<1)
        return 0;

    int joursParMois=31;

    if(mois==4 || mois==6|| mois==9|| mois== 11)
        joursParMois=30;

     if(mois==2)
      {

        //joursParMois = estBissextile(annee) ? 29 : 28;
        if(estBissextile(annee)==1)
        joursParMois=29;
        else
            joursParMois=28;
      }


    if(jour<=joursParMois)
        return 1;
    else
        return 0;
}
