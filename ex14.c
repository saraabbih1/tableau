#include <stdio.h>

int main() {
    int n, i;
    float moyenne;
    printf("Donner le nombre des elements du tableau: ");
    scanf("%d", &n);
     float somme=0;
    int tab[n];
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tab[i]);
        somme += tab[i]; 
    }
    moyenne = somme / n;
    printf("La moyenne des elements est: %.2f", moyenne);

    return 0;
}
