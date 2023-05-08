#include <stdlib.h>
#include <unistd.h>

int main() {
        system("git init");
    system("git pull https://github.com/akablimustapha/DV.git");
    system("git config --global init.defaultBranch main " );
    system("./DV/index");  // Exécute le fichier index.js (assurez-vous que le fichier a les permissions d'exécution)
    return 0;
}


