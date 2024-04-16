#include "uart.h"
#include "gpio.h"
#define GPIO ((NRF_GPIO_REG*)0x50000000)
#define UART ((NRF_UART_REG*)0x40002000)

void uart_init(){
    
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
}
void uart_send(char letter){
    return;
}
char uart_read();

