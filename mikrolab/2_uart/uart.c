#include "uart.h"
#include "gpio.h"
#define GPIO ((NRF_GPIO_REG*)0x50000000)
#define UART ((NRF_UART_REG*)0x40002000)

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


/*void uart_init(){
    
    GPIO->PIN_CNF[8] = (0<<0);
    GPIO->PIN_CNF[6] = (1<<0);
    UART->PSELTXD=1<<8;
    UART->PSELRXD=1<<6;
    UART->BAUDRATE=0x00275000;
    UART->PSELCTS=0xFFFFFFFF;
    UART->PSELRTS=0xFFFFFFFF;
    UART->ENABLE=4;
    UART->SHORTS=1<<3; //?
    return;
}*/
void uart_send(char letter){
    return;
}
char uart_read(){
    return;
};