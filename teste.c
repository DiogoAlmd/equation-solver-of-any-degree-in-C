#include <stdio.h>
#include <math.h>

float termos(double ponto, int tam, double eq[20]);

int main(){
    int numElementos,
        i=0,
		cont;
    float vet[20];
    float a, nums[20], ponto, resultado;

	printf("\n Digite a quantidade de termos: ");
    scanf("%d", &numElementos);
    fflush(stdin);
    
    numElementos = numElementos * 2;
	
    for(i=0; i<numElementos; i+=2){
	    printf("\n Digite o %d° cojunto de coeficiente e expoente: ", cont);
	    scanf("%f %f", &vet[i], &vet[i+1]);
	    fflush(stdin);
	    
	    cont++;
	}
	
	printf("\n Digite o valor de X: ");
    scanf("%f", &a);
    fflush(stdin);
	
	for(i=0; i<numElementos; i++){
		printf("\nteste = %.2f", vet[i]);
	}
	
	for (i=0; i<numElementos; i+=2){
		nums[i] = vet[i] * pow(a, vet[i+1]);
		printf("\nteste multiplicacao = %.2f", nums[i]);
	}
	
	for(i=0;i<numElementos;i++){
		resultado = resultado + nums[i];
	}
	
	printf("\n resultado da eq = %.2f", resultado);
	
    return 0;
}

