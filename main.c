#include "def_principais.h"
#include "one_wire.h"
#include "USART.h"

FILE lcd_str = FDEV_SETUP_STREAM(USART_putchar, NULL, _FDEV_SETUP_WRITE);

unsigned char dado_recebido;

int main(void)
{
    
	USART_Inic(MYUBRR);
	stdout=&lcd_str;
	
	printf("Digite [t] [s] ou [e] \r");
	
	
    while (1) 
    {
		dado_recebido=USART_Recebe();
		
		if(dado_recebido=='t'){
			printf("Temperatura \r");
		}

		else if(dado_recebido=='e'){
		printf("Minha Prova \r");
		}

		else if(dado_recebido=='s'){
			receber_angulo();
		}

		else{
			printf("ERRO - Funcao desconhecida!\r");
		}

    }
}

int receber_angulo(){

	printf("Digite o Angulo - Depois [ENTER] \r");

	char string_valor;
	int valor, ang_total;

	while(dado_recebido!=0x0D){
		dado_recebido=USART_Recebe();
		//printf("%c",dado_recebido);
		valor = dado_recebido - 48;
		printf("%d\n", valor);
		ang_total = (ang_total*10) + valor;
	}

	printf("Ir para %d graus \r", ang_total);

	//printf("%d - Inteiro \r ", ang);

}

