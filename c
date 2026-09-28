#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}



D.U.
    #include <stdio.h>

int main() {
    Product produkty[3];
    int ceny[3];
    char nazvy[10][3];
    int pocty[3];
   for (int i = 0; i < 3; i++) {
        printf("Zadaj nazov %d. produktu: ", i + 1);
        scanf("%s", nazvy[i]);
        printf("Zadaj cenu: ");
        scanf("%d", &ceny[i]);
        printf("Zadaj pocet kusov: ");
        scanf("%d", &pocty[i]);
    }
    float spolu;

    spolu = cena1 * pocet1 + cena2 * pocet2 + cena3 * pocet3;

    printf("\nNakup:\n");
    printf("%s - %.2f € x %d = %.2f €\n", nazov1, cena1, pocet1, cena1 * pocet1);
    printf("%s - %.2f € x %d = %.2f €\n", nazov2, cena2, pocet2, cena2 * pocet2);
    printf("%s - %.2f € x %d = %.2f €\n", nazov3, cena3, pocet3, cena3 * pocet3);

    printf("Celkova cena: %.2f €\n", spolu);

    return 0;
}
