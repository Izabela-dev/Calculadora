# include <stdio.h>

int main() {
  int numeroDigitado;
  int segundoDigitado;
  char conta;
  int resultado;

  printf("Digite o primeiro numero ");
  scanf("%d",&numeroDigitado);

  printf("Digite o segundo numero ");
  scanf("%d", &segundoDigitado);

  printf("qual e a operacao ");
  scanf(" %c",&conta);

  if (conta == '+')
  {
    resultado = numeroDigitado + segundoDigitado;
    printf("%d \n",resultado);
  }
  if (conta == '-')
  {
    resultado = numeroDigitado - segundoDigitado;
    printf("%d \n",resultado);
  }
  if (conta == '*')
  {
    resultado = numeroDigitado * segundoDigitado;
    printf("%d \n",resultado);
  }
  if (conta == '/')
  {
    resultado = numeroDigitado / segundoDigitado;
    printf("%d \n",resultado);
  }
  return 0;
  
}