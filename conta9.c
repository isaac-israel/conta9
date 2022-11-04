#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j,n,num;
char numAux[10];


int main()
{
    for(i=0;i<=999;i++)
    {
        num=i;
        itoa(num,numAux,10);
        int k=strlen(numAux)-1;
        j==0;
        for(j=0;j<=k;j++)
        {
            if(numAux[j]=='9')
                n++;
        }
    }
    printf("Existem %d noves de 0 à 999",n);
}
