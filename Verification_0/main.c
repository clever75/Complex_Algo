#include <stdio.h>
#include <stdlib.h>

int verification_0(int T[],int nbVal, int x){
    int i;
    for(i=1;i<=nbVal;i++){
        if(T[i]==x){
            return 1;
        }else{
            return 0;
        }
    }

}
int main()
{
    int T[]={0,8,5,7,4};

    const int nbVal=sizeof(T)/sizeof(T[0]);
    int resultat;
    resultat=verification_0(T,nbVal,8);
    printf("\nRésultat = %d ",resultat);
    return 0;
}
