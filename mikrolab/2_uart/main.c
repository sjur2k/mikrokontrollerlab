#include <stdint.h>
#include <stdio.h>
#include <math.h>
//#include "uart.h"
//#include "gpio.h"

int inttobinary(int a){
    int out = 0;
    if((a>127) | (a<0))return 0;
    else{
        for (int i =0; i <= 5; i++){
            if (a/2 >= (int)pow(2.0,6-i)){
                a-=(int)pow(2.0,6-i);
                out+=(int)pow(10.0,6-i);        
            }
        }
        return out;
    }
}

int main(){
    int b = inttobinary(12);
    return 0;
}