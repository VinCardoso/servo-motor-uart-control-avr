#ifndef DEF_PRINCIPAIS_H_
#define DEF_PRINCIPAIS_H_

// Usar em todos
#define F_CPU 16000000UL
#include <avr/io.h>

// Habilitar quando usar delay
#include <util/delay.h>

// Usar para gravação da memória
// #include <avr/pgmspace.h>

// Usar quando usar Interrupção
#include <avr/interrupt.h>

// Usar qunado for usar LCD
#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

// Geral
#define set_bit(Y, bit_x) (Y|=(1<<bit_x))
#define clr_bit(Y, bit_x) (Y&=~(1<<bit_x))
#define tst_bit(Y, bit_x) (Y&(1<<bit_x))
#define cpl_bit(Y, bit_x) (Y^=(1<<bit_x))


#endif /* DEF_PRINCIPAIS_H_ */