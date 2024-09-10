#include<stdio.h>
#include<string.h>
int main(){
    char descrp[50];
    printf("saisi un chaine de  caractères : ");
    fgets(descrp,sizeof(descrp),stdin);
    printf("\n\n");
    printf("****** Affichage ********** \n\n");
    printf(" %s ", descrp);
    return 0;
}
