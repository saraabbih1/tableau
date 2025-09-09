#include <stdio.h>

int main() {
    int n1, n2, i, j;
    printf("Donner le nombre des elements du  tableau1: ");
    scanf("%d", &n1);

    int tab1[n1];
    printf("Entrez les elements du  tableau1:\n");
    for (i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tab1[i]);
    }

    
    printf("Donner le nombre des elements du  tableau2: ");
    scanf("%d", &n2);

    int tab2[n2];
    printf("Entrez les elements du  tableau2:\n");
    for (i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tab2[i]);
    }

    int fus[n1 + n2];
    for (i = 0; i < n1; i++) {
        fus[i] = tab1[i];
    }
    for (j = 0; j < n2; j++) {
        fus[n1 + j] = tab2[j];
    }
    printf("Le tableau fusionne est:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", fus[i]);
    }
    printf("\n");

    return 0;
}
