#include <stdio.h>
#include <stdint.h>
#include <locale.h>

// Declaração de variáveis 
char matriz[3][3]; 
char jogador1[50], jogador2[50]; 

// Inicializa a matriz do jogo com o caractere 'a' (representando células vazias)
void iniciarMatriz(){
    int l, c;
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            matriz[l][c] = 'a';
        }
    }
}

// Verifica se a letra fornecida é válida ('x' ou 'o')
int eValido(char letra) {
    if(letra == 'x' || letra == 'o'){
        return 1;
    } 
	else {
        return 0;
    }
}

// Verifica se as coordenadas (x, y) estão dentro dos limites da matriz
// Ex: se a coordenada digitada pelo usuário for 3 3, o programa reportará um erro.
int coordenadaEhValida(int x, int y){
    if(x >= 0 && x < 3 && y >= 0 && y < 3){
        return 1;
    }
    else{
    	printf("Coordenadas invalidas, digite novamente.");
	}
    return 0; 
}

// Verifica se a posição na matriz está vazia (não ocupada por 'x' ou 'o')
int posicaoVazia(int x, int y){
    if(matriz[x][y] != 'x' && matriz[x][y] != 'o'){
        return 1;
    } else {
        return 0;
    }
}
