#include <stdlib.h>

int main() {
    system("git init");     // Initialise un nouveau référentiel Git
    system("git pull https://github.com/akablimustapha/DV.git main");     // Effectue un "pull" pour récupérer les dernières modifications du référentiel distant
    system("./DV/index");   // Exécute le fichier index.js (assurez-vous que le fichier ait les permissions d'exécution)
    return 0;
}
