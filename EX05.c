#include <stdio.h>
#include <string.h>

int main() {
    char ch[100], inv[100];
    int i,lng;
    printf("Entrez une chaîne : ");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch , "\n")] = '\0';
    lng = strlen(ch);

    for (i = 0; i < lng ; i++) {
        inv[i] = ch[lng - i - 1] ; 
    }
    inv [lng] = '\0'; 
    printf("La chaîne inversée est : %s\n", inv);

    return 0;
}

