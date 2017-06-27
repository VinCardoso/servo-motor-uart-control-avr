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
		
		if(dado_recebido=='t')
		{
			printf("Temperatura \r");
		}
		else if(dado_recebido=='e')
		{
		printf("Minha Prova");
		}
		else
		{
			printf("%c", dado_recebido);
		}
    }
}

