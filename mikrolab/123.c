#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int power (int base, const int exp){
    int out;
    switch (exp)
    {
    case 0:
        out=1;
        break;
    case 1:
        out=base;
        break;
    case 2:
        out=base*base;
        break;
    case 3:
        out=base*base*base;
        break;
    case 4:
        out=base*base*base*base;
        break;
    case 5:
        out=base*base*base*base*base;
        break;
    case 6:
        out=base*base*base*base*base*base;
        break;
    case 7:
        out=base*base*base*base*base*base*base;
        break;
    }
    return out;
}

char* bin(int a){
    char* out = (char*)malloc(8*sizeof(char));
    for (int i = 0; i < 7; i++){
        if((a%power(2,6-i))<a){
            out[i+1]=1;
            a-=power(2,6-i);
        }
    }
    printf("%s",out);
    return out;
}

void ascii(int a){
    printf("Ascii character no %d is %c\n",a, (char)a);
    printf("In binary: ");
    //printbin(bin(a));
    printf("\n");
}

void main(){
    /*bin(126);
    ascii(57);*/
    for (int i= 7; i>=0; i--){
        int bit = (57 >> i) & 1;
        printf("%d", bit);
    }

}