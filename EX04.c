#include <stdio.h>
#include <string.h>

int main() {
    char ch1[100], ch2[100];
    printf("Entrez la premiere chaîne : ");
    fgets(ch1, sizeof(ch1), stdin);
    printf("Entrez la deuxième chaîne : ");
    fgets(ch2, sizeof(ch2), stdin);
    ch1[strcspn(ch1, "\n")] = '\0';
    ch2[strcspn(ch2, "\n")] = '\0';
    if (strcmp(ch1, ch2) == 0) {
        printf("Les deux chaînes sont égales.\n");
    } else {
        printf("Les deux chaînes sont différentes.\n");
    }

    return 0;
}
