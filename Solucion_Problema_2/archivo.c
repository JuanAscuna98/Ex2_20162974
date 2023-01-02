#include <stdio.h>

void main()
{
    // R1  Sentencias 
    long R1 = 0x00000201;
    printf("R1 = 0x%X\n",R1);
    R1 |= 0x0042000;
    printf("Valor Final R1 = 0x%X\n",R1);

    // R2
    long R2 = 0xFF000000;
    printf("R2 = 0x%X\n",R2);
    R2 &= 0x3FFFFFFF;
    int bin[32];
    printf("Valor Final R2 = 0x%X\n",R2);
    
    // R3
    long R3 = 0b00001010111100000000101111001001;
    printf("R3 = 0x%X\n",R3);
    R3 &= 0xFF9FFFFF;
    printf("Valor Final R3 = 0x%X\n",R3);

    // R4
    long R4 = 58;
    printf("R4 = 0x%X\n",R4);
    R4 |= 0x00000280;
    printf("Valor Final R4 = %d\n",R4);

    // R5
    long R5 = 14;
    printf("R5 = 0x%X\n",R5);
    R5 |= 0x88000000;
    printf("Valor Final R5 = 0x%X\n",R5);

}