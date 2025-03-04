#include<stdio.h>
int main()
{
    int values[6]={12,160,-2,13,0,24};
    int min,max;
    min=values[0]; //12 // 12 // -2
    max=values[0]; //12 // 160
    for(int i=1;i<6;i++)
    {
        if(values[i]>max)
            max=values[i];
        if(values[i]<min)
            min=values[i];

    }
    printf("le max du tableau est %d le min est %d",max,min);
}
