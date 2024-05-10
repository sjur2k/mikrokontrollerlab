#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* bin(int num){
    char* binary = (char*)malloc(sizeof(char)*9);
    if (binary == NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    for(int i = 7; i>=0; i--){
        int bit = (num >> i) & 1;
        binary[7-i]=bit+'0';
    }
    binary[8]='\0';
    return binary;
}

int main(){
    char* binary = bin(57);
    printf("%s\n",binary);
    free(binary);
}