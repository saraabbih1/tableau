#include<stdio.h>
int main(){
    int i,j,n,max;
    int T[5];
    printf("donner les elements du tableau:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
printf("Donner l'element %d du tableau1: ", i + 1);
        scanf("%d", &T[i]);
           max=T[i];
        if(T[i]<T[i+1]){
            max=T[i+1];
        }
        printf("le max est :%d",max);
    }
    return 0 ;
}