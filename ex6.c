#include<stdio.h>
int main(){
    int facteur,i,n,tab[n],resultat[n];

    printf("donner n :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("donner le nombre :",i+1);
        scanf("%d",&tab[i]);
    }
    printf("donner le facteur de multiplication:");
    scanf("%d",&facteur);
    for(i=0;i<n;i++){
        resultat[i]=facteur*tab[i];
    }
    for(i=0;i<n;i++) {     
    printf("ressultat est:%d\n",resultat[i]);
      }
 return 0 ;   
    }

