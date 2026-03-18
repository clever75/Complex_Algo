#include <stdio.h>
#include <stdlib.h>

int verification_1(int T[],int nbVal, int x){
    int i,trouve;
    for(i=1;i<=nbVal;i++){
        if(T[i]==x){
            trouve=1;
        }else{
            trouve=0;
        }
    }
    return trouve;
}
int main()
{
    int T[]={0,8,5,7,4};

    const int nbVal=sizeof(T)/sizeof(T[0]);
    int resultat;
    resultat=verification_1(T,nbVal,8);
    printf("\nRésultat = %d ",resultat);
    return 0;
}
