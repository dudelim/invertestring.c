#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[50];
  int i, tamanho;

  printf("Input: ");
  fgets(frase, 50, stdin);

  tamanho = strlen(frase);

  printf("Output: ");
  for (i = (tamanho - 1); i >= 0; i--){
    if(frase[i] == ' '){
      frase[i] != '\0';
    }
  }
}