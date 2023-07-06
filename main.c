#include <stdio.h>
#include <string.h>

int sget(char* vetor, int tam) {
    fflush(stdin); 
    if (fgets(vetor, tam, stdin)) { 
        int i;
        for( i = 0; vetor[i] != '\n' && vetor[i]; ++i)
          ;
        vetor[i] = '\0';
    }
}

#define TAM 50
int main(void) {
    char frase[TAM];
    int i, tamanho;

  printf("Input: ");
  sget(frase, TAM);

  tamanho = strlen(frase);

  printf("Output: ");
  for (i = (tamanho - 1); i >= 0; i--) {
    if (frase[i] == ' ') {
      frase[i] = '\0';
      printf("%s ", &frase[i] + 1);
    }
  }
  printf("%s ", frase);
  return 0;
}