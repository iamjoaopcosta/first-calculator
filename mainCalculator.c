#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float soma, subtracao, divisao, multiplicacao;
	int escolha;
	float valor1, valor2;
	
	printf("        CALCULADORA         \n");
	printf("Indique a operacao desejada:\n");
	printf("1) Soma.\n");
	printf("2) Subtracao.\n");
	printf("3) Divisao.\n");
	printf("4) Multiplicacao.\n");
	scanf("%d", &escolha);

	if(escolha < 1 || escolha > 4){
		printf("ERRO! Operacao invalida.");
	}	else{
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	
	if(escolha == 1){
		soma = valor1 + valor2;
		printf("%.2f + %.2f = %.2f", valor1, valor2, soma);
	}
	else if(escolha == 2){
		subtracao = valor1 - valor2;
		printf("%.2f - %.2f = %.2f", valor1, valor2, subtracao);
	}
	else if(escolha == 3){
			if(valor1 == 0 || valor2 == 0){
			printf("ERRO! Impossivel a divisao por zero(0).");
		} else{
			divisao = valor1 / valor2;
			printf("%.2f / %.2f = %.2f", valor1, valor2, divisao);
		}
	}
	else if(escolha == 4){
		multiplicacao = valor1 * valor2;
		printf("%.2f * %.2f = %.2f", valor1, valor2, multiplicacao);
	}
	printf(":)");
	}
	return 0;
}

