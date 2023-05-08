#include <stdlib.h>
#include <unistd.h>

int main() {
    system("git pull https://github.com/akablimustapha/DV.git main");

    pid_t pid = fork();  // Crée un processus fils
    if (pid == 0) {  // Si on est dans le processus fils
        execl("./DV/index", "index", NULL);  // Exécute le fichier index.js
    }
    else {  // Si on est dans le processus parent
        wait(NULL);  // Attend la fin de l'exécution du processus fils
    }

    return 0;
}

