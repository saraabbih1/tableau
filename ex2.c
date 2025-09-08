#include <stdio.h>

int main() {
    int n, i;
    int T[n];  

    printf("Donner le nombre d'elements du tableau: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        printf("Donner l'element %d du tableau: ", i + 1);
        scanf("%d", &T[i]);
    }

    printf("Le tableau est: ");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);  
    }
    printf("\n");

    return 0;
}
