#include <stdio.h>

int main() {
    int n, i, anc, new;

    
    printf("Donner le nombre des elements du tableau: ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Donner la valeur anc: ");
    scanf("%d", &anc);
    printf("Donner la nouvelle valeur: ");
    scanf("%d", &new);

    
    for (i = 0; i < n; i++) {
        if (tab[i] == anc) {
            tab[i] = new;
        }
    }


    printf("Tableau apres remplacement:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
