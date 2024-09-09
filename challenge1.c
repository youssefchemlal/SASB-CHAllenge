/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char nom[30], prenom[30], sexe[10], email[50]; int age;
    printf("Entrez votre nom : ");
    scanf("%s", nom);
    printf("Entrez votre prénom : ");
    scanf("%s", prenom);
    printf("Entrez votre âge : ");
    scanf("%d", &age); 
    printf("Entrez votre sexe : ");
    scanf("%s", sexe);
    printf("Entrez votre adresse email : ");
    scanf("%s", email);
    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom); 
    printf("Âge : %d\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Email : %s\n", email); 

    return 0;
}