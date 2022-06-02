#include <stdio.h>
#include <stdlib.h>
#include "pokedex.h"

void Atacar(Pokemon *p1, Pokemon *p2);
int Batalha(Pokemon *p1, Pokemon *p2);
void ExibirTimes(Pokemon *p1, Pokemon *p2);


int main() {
    Pokemon p1[6], p2[6];
    GerarTimes(p1,p2);
    int venc,i,j;
    while(p1[5].HP!=0&&p2[5].HP!=0){
        venc = Batalha(p1+i,p2+j);
        if(venc==1){
            j++;
        }
        if(venc==2){
            i++;
        }
        ExibirTimes(p1,p2);
    }
    printf("O time vencedor foi o time %i!\n",venc);
    return 0;
}

void Atacar(Pokemon *p1, Pokemon *p2) {
    int dano = (*p1).AT - (*p2).DF;
    if((*p2).DF<(*p1).AT){
        if((*p2).HP>=dano){
            (*p2).HP -= dano;
        }
        else{
            (*p2).HP = 0;
        }
    }
    else{
        (*p2).HP -= 1;
    }
}

int Batalha(Pokemon *p1, Pokemon *p2) {
    int vez;
    if((*p1).SP>=(*p2).SP){
        vez = 1;
    }
    else{
        vez = 2;
    }
    while((*p1).HP!=0&&(*p2).HP!=0){
        if(vez%2 == 1){
            Atacar(p1,p2);
        }
        if(vez%2 == 0){
            Atacar(p2,p1);
        }
        vez++;
    }
    if((*p1).HP==0){
        return 2;
    }
    else{
        return 1;
    }
}

void ExibirTimes(Pokemon* p1, Pokemon* p2) {
    system("clear"); // usar "CLS" no Windows
    printf("Jogador 1\n\n");
    for(int i = 0; i<6;i++){
        printf("        %s        \t%i\t%i\t%i\t%i\t\n",(*(p1+i)).Nome,(*(p1+i)).HP,(*(p1+i)).AT,(*(p1+i)).DF,(*(p1+i)).SP);
    }
    printf("\n");
    printf("Jogador 2\n\n");
    for(int i = 0; i<6;i++){
        printf("        %s        \t%i\t%i\t%i\t%i\t\n",(*(p2+i)).Nome,(*(p2+i)).HP,(*(p2+i)).AT,(*(p2+i)).DF,(*(p2+i)).SP);
    }
    printf("\n");
}
