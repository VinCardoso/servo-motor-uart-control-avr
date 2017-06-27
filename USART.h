#ifndef USART_H
#define USART_H

#include "def_principais.h"

#define BAUD 19200					// Tx de 9600bps
#define MYUBRR F_CPU/16/BAUD-1

void USART_Inic(unsigned int ubbr0);
void USART_Transmite(unsigned char dado);
unsigned char USART_Recebe();
void escreve_USART(char *c);
void escreve_USART_Flash(const char *c);
void ident_num(unsigned int valor, unsigned char *disp);
int USART_putchar(char c, FILE *fp);

#endif