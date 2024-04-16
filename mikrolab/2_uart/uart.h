#pragma once
#include <stdint.h>

void uart_init();
void uart_send(char letter);
char uart_read();

typedef struct {
    volatile uint32_t RESERVED0[128];
    volatile uint32_t SHORTS;
    volatile uint32_t RESERVED1[191];
    volatile uint32_t ENABLE;
    volatile uint32_t PSELRTS;
    volatile uint32_t PSELTXD;
    volatile uint32_t PSELCTS;
    volatile uint32_t PSELRXD;
    volatile uint32_t RESERVED2[3];
    volatile uint32_t BAUDRATE;
} NRF_UART_REG;
