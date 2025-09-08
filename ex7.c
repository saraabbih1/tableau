#include<stdio.h>
int main(){
    int i,n,cmp,j;
    printf("donner n :");
    scanf("%d",&n);
    int tab[n];
     printf("donner le nombre :\n");
    for(i=0;i<n;i++){  
        scanf("%d",&tab[i]);
    }

    for(i=0;i<n-1;i++){  
        for(j=0;j<n-i-1;j++){
        if(tab[j]>tab[j+1]){
            cmp=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=cmp;
        }  

    }  
        
         
    }
    printf("la table trie :\n");
    for(i=0;i<n;i++){
    printf("%d\n",tab[i]);

    }

    return 0 ;
}
