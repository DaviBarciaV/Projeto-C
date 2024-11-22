#include <stdio.h>
#include <stdint.h>
#include <locale.h>

// Declara��o de vari�veis 
char matriz[3][3]; 
char jogador1[50], jogador2[50]; 

// Inicializa a matriz do jogo com o caractere 'a' (representando c�lulas vazias)
void iniciarMatriz(){
    int l, c;
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            matriz[l][c] = 'a';
        }
    }
}

// Verifica se a letra fornecida � v�lida ('x' ou 'o')
int eValido(char letra) {
    if(letra == 'x' || letra == 'o'){
        return 1;
    } 
	else {
        return 0;
    }
}

// Verifica se as coordenadas (x, y) est�o dentro dos limites da matriz
// Ex: se a coordenada digitada pelo usu�rio for 3 3, o programa reportar� um erro.
int coordenadaEhValida(int x, int y){
    if(x >= 0 && x < 3 && y >= 0 && y < 3){
        return 1;
    }
    else{
    	printf("Coordenadas invalidas, digite novamente.");
	}
    return 0; 
}

// Verifica se a posi��o na matriz est� vazia (n�o ocupada por 'x' ou 'o')
int posicaoVazia(int x, int y){
    if(matriz[x][y] != 'x' && matriz[x][y] != 'o'){
        return 1;
    } else {
        return 0;
    }
}
