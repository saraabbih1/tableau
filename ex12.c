#include <stdio.h>

int main() {
    int n, i;

    printf("Donner le nombre des elements du tableau: ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("Les elements pairs du tableau sont:\n");
    for (i = 0; i < n; i++) {
        if (tab[i] % 2 == 0) { 
            printf("%d ", tab[i]);
        }
    }
    printf("\n");

    return 0;
}
