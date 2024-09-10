#include <stdio.h>
#include <string.h>

int main() {
    char ch1[50], ch2[50], resultat[100];
    printf("Entrez la première chaîne : ");
    fgets(ch1, sizeof(ch1), stdin);
    printf("Entrez la deuxième chaîne : ");
    fgets(ch2, sizeof(ch2), stdin);
    ch1[strcspn(ch1, "\n")] = '\0';
    ch2[strcspn(ch2, "\n")] = '\0';
    strcpy(resultat, ch1); 
    strcat(resultat, " "); 
    strcat(resultat, ch2); 
    printf("La chaîne concaténée est : %s\n", resultat);
    return 0;
}
