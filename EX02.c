#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];
    int result;
    printf("Entrez la première chaîne : ");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    result = strlen(ch);
    printf("Longueur de la Chaîne est : %d\n", result);
    return 0;
}
