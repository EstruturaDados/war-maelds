#include <stdio.h>
#include <string.h> 

#define MAX_TERRITORIOS 5 // Limitação para número de territórios
#define TAM_STRING 100 // Limitação de tamanho da string

//Abaixo segue a struct com as características de cada Território
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main(){
    Territorio territorios[MAX_TERRITORIOS]; // Vetor do tipo Territorio permitindo um máximo de 5 valores
    
};