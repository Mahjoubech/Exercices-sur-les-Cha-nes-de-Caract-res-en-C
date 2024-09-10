#include <stdio.h>
#include <string.h>

int main() {
    char ch[100], crtr;
    int i, cmp = 0;
    printf("Entrez une chaîne : ");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    printf("Entrez un caractère à rechercher : ");
    scanf("%c", &crtr);
    for (i = 0; i < strlen(ch); i++) {
        if (ch[i] == crtr) {
            cmp++;
        }
    }
    printf("Le caractère '%c' apparaît %d fois dans la chaîne.\n", crtr, cmp);

    return 0;
}
