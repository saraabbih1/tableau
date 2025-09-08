#include <stdio.h>

int main() {
    int n, m, i, somme = 0;
    int T1[50], T2[50];  

    printf("Donner le nombre d'elements du tableau1 : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Donner l'element %d du tableau1: ", i + 1);
        scanf("%d", &T1[i]);
        somme = somme+ T1[i];
    }

    printf("Donner le nombre d'elements du tableau2 : ");
    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        printf("Donner l'element %d du tableau2: ", i + 1);
        scanf("%d", &T2[i]);
        somme = somme+ T2[i];
    }

    printf("La somme des elements des deux tableaux est : %d\n", somme);

    return 0;
}
