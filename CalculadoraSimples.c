#include <stdio.h>      
#include <stdlib.h>     
#include <locale.h>       
#include <conio.h>      
#include <math.h> 

int main(){
    float valor_1, valor_2, resultado;
    int operacao;

    do{
        printf("Calculadora\n");
        printf("Valor 1: ");
        scanf("%f" , &valor_1);  		
    
        printf("Valor 2: ");
        scanf("%f" , &valor_2);			
    
        printf("\n 1 - SOMA \n 2 - SUBTRACAO \n 3 - MULTIPLICACAO \n 4 - DIVISAO\n");
        printf("Escolha a Operacao:");
        scanf("%d", &operacao);

            switch(operacao){
                case 1:
                    resultado = valor_1+valor_2;
                    printf("O resultado e: %f", resultado);
                    break;
                case 2:
                    resultado = valor_1-valor_2;
                    printf("O resultado e: %f", resultado);
                    break;
                case 3:
                    resultado = valor_1*valor_2;
                    printf("O resultado e: %f", resultado);
                    break;
                case 4:
                    if (valor_2 == 0) {
                        printf("Operacao Invalida\n");
                        return main();
                        break;
                    }
                    else {
                        resultado = valor_1/valor_2;
                        printf("O resultado e: %f", resultado);
                        break;
                    }
                default:
				    printf("\n Esta operacao e invalida!!! \n");
				    break;
            }
        printf("\n Digite 1 para nova operaçao: ");
		scanf("%d", &operacao);
        

    }while(operacao == 1);

    system ("pause");
    return 0;
}  