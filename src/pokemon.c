#include <stdio.h>
#include <stdlib.h>
#include "pokedex.h"

void Atacar(Pokemon *p1, Pokemon *p2);
int Batalha(Pokemon *p1, Pokemon *p2);
void ExibirTimes(Pokemon *p1, Pokemon *p2);

int main() {
    Pokemon p1[6], p2[6];
    GerarTimes(p1, p2);

   
    return 0;
}

void Atacar(Pokemon *p1, Pokemon *p2) {

}

int Batalha(Pokemon *p1, Pokemon *p2) {


}

void ExibirTimes(Pokemon* p1, Pokemon* p2) {
    system("clear"); // usar "CLS" no Windows
    printf("Jogador 1\n\n");
    printf("        Nome        \tHP\tAT\tDF\tSP\t\n");

}
