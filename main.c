#include <stdio.h>
#include <math.h>

int main(){
	int grau;
	char continuar;
	
	do{
		printf("\nDigite o grau do polinomio (0,1 ou 2): ");
		scanf("%d", &grau);
		
		if (grau == 0) {
			printf("Equacao de grau 0 nao possui raiz.\n"); 
			}
			else if(grau ==1){
			float a, b, x;
			
			printf("Digite o valor de a: ");
			scanf("%f", &a);
			
			printf("Digite o valor de b: ");
			scanf("%f", &b);
			
			if (a == 0) {
				printf("Nao eh equacao de 1 grau (a nao pode ser 0).\n");
			} else {
				x = -b / a;
				printf("Raiz: x = %.2f\n", x);
			}
		}
		else if (grau == 2) {
			float a, b, c, delta, x1, x2;
			
			printf("Digite o valor de a: ");
			scanf("%f", &a);
			
			printf("Digite o valor de b: ");
			scanf("%f", &b);
			
			printf("Digite o valor de c: ");
			scanf("%f", &c);
			
			if (a == 0){
				printf("Nao eh equacao de 2 grau ( a nao pode ser 0).\n");
			} else {
				delta = b*b - 4*a*c;
				
				if (delta < 0) {
					printf("Nao possui raizes reais.\n");
				} else if (delta ==0) {
					x1 = -b / (2*a);
					printf("Raiz unica: x = %.2f\n", x1);
				} else {
					x1 = (-b + sqrt( delta)) / (2*a);
					x2 = (-b - sqrt(delta)) / (2*a);
					printf("Duas raizes:\n");
					printf("x1 = %.2f\n", x1);
					printf("x2 = %.2f\n", x2);
				}
			}
		}
		
		else{
			printf("Grau invalido! Digite 0, 1 ou 2.\n");
		}
		
		printf("\nDeseja continuar? (s/n): ");
		scanf(" %c", &continuar);
		
	} while ( continuar == 's');
	
	return 0;
} 
