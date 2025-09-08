#include <stdio.h>
int main(){
int n;
printf("donner n: ");
scanf("%d",&n);
int tab[n];
int tab2[n];
printf("enter les elements :\n");
for(int i=0;i<=n-1;i++){
    scanf("%d",&tab[i]);
}
printf("n:\n");
for(int i=0;i<n;i++){
printf("%d\n",tab[i]);}
for(int j=0;j<n;j++){
tab2[j]=tab[j];
}

printf("copy :\n");
for(int i=0;i<n;i++){
    printf("%d\n",tab2[i]);
}

return 0;
}
