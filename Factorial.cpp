#include <stdio.h>

double factorial(double x);

int main(){
	
	double numero, calculo;
	int salir;
	
	do{
	
		// Ingreso del dato para realizar el calculo 
		
		printf("\n\nIngrese un numero: ");
		scanf("%lf", &numero);
		
		
		//Si el número es mayor a 0, se hará el cálculo del factorial. 
		if(numero > 0){
		
			
			calculo = factorial (numero);
			
			printf("El factorial del numero %.0lf es de: %.0lf ", numero, calculo);
			
			
		}
		
	//validacion de un dato positivo 
		else{
			
			do{
					
				printf("\nOpcion invalida, intente de nuevo\n");
				
				printf("\nIngrese un numero positivo: ");
				scanf("%lf", &numero);
			
				calculo = factorial (numero);
				printf("El factorial del numero %.0lf es de: %.0lf ", numero, calculo);
				
			}while(numero < 0);	//Aqui hay un pequeño error, si volvemos a ingresar un número negativo, se rompe el programa.
						
		}
				
			
			printf("\nDesea realizar otro calculo \n [Si=1]\n [No=0]\n : ");
			scanf("%d", &salir);
		
	}while(salir != 0); 
		
//Termino del programa 
		
	printf("\n Gracias por usar el programa :)\n");
	
	return 0;
}

double factorial(double x){
	
	if(x == 0 || x == 1){
		
		return 1;
	}
	
	else{
		
		return x * factorial (x - 1);
	}
	
}

