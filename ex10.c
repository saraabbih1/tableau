#include<stdio.h>
int main(){
    int n,element,position, i;
    printf("donner le nmbre des element du tableau:");
    scanf("%d",&n);
 int tab[n];
  printf("entrez les elements du tableau:");
  for(i=0;i<n;i++){
    printf("elements%d:",i+1);
    scanf("%d",&tab[i]);
  }
printf("element:");
scanf("%d",&element);

for(i=0;i<n;i++) {
    if(element==tab[i]){
        position=i;
    }
    return 0 ;
}
}