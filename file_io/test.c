#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(void) {
    char buffer[BUFFER_SIZE];

    while (1) {
        printf("$ ");  // Affiche l'invite de commande

        // Lire une ligne de l'utilisateur
        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL) {
            if (feof(stdin)) {
                printf("\nFin de la session.\n");
                break;  // Quitter si fin de fichier (EOF) est détecté
            } else {
                perror("Erreur de lecture");
                continue;
            }
        }

        // Remplacer le retour à la ligne par un caractère nul
        buffer[strcspn(buffer, "\n")] = '\0';

        // Afficher la saisie de l'utilisateur (facultatif)
        printf("Vous avez saisi : '%s'\n", buffer);

    return 0;
}
}

