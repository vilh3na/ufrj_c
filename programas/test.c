#include <stdio.h>

int main(int argc, char* argv[]) {
    unsigned indice;
    for (indice=0; indice<argc;indice++){
        printf("ARG (#%03u):\"%s\"\n",indice, argv[indice]);
    }
    return 0;
}
