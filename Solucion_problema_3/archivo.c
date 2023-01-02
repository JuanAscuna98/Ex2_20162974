#include <stdio.c>


int main()
{
    

/*a. Escribir las sentencias que permiten configurar a PH5 y PD3 como entradas digitales con la resistencia Pull-Up activada*/
    
    // Activamos la señal que permite habilitar las resistencia pull up y pull down
    MCUCR |= 0x10;
    
    //Habilitamos los puertos correspondientes como entrada
    DDRH &= 0xDF;
    DDRD &= 0xF7;

    // Habilitamos resistencias pull up
    PORTH |= 0x20;
    PORTD |= 0x08;

/*b. Escribir las sentencias que permitan configurar el puerto PD3 como entrada digital con la resistencia Pull-Up desactivada.*/
    
    // Activamos la señal que permite habilitar las resistencia pull up y pull down
    MCUCR |= 0x10;

    //Habilitamos los puertos correspondientes como entrada
    DDRD &= 0xF7;

    // Deshabilitamos resistencias pull up
    PORTD &= 0xF7;

 /*c. Escribir las sentencias que permitan configurar PA4 y PA2 como salidas digitales inicialmente con valores LOW en su registro de salida.*/
   
    // Activamos la señal que permite habilitar las resistencia pull up y pull down
    MCUCR |= 0x10;

    //Habilitamos los puertos correspondientes como salida
    DDRA |= 0x14;

    // Colocamos en baja los bit de salida
    PORTA &= 0xEB;

/*d. Crear las sentencias que permitan la lectura del puerto PH5 para activar PA4. Si se lee PH5 en HIGH, activar PA4 en HIGH, si PH5 está 
    en LOW el valor de salida de PA4 debe ser LOW.*/

    // Activamos la señal que permite habilitar las resistencia pull up y pull down
    MCUCR |= 0x10;

    //Habilitamos los puertos correspondientes como entrada Y salida
    DDRH &= 0xDF;
    DDRA |= 0x10;

    // Realizamos las comparaciones correspondientes
    if(PINH & 0x20)
    {
        PORTA |= 0x10;
    }
    else
    {
        PORTA &= 0xEF;
    }

 /*e. Crear las sentencias que permitan la lectura del puerto PD3 para activar PA2. Si se lee PD3 en HIGH, activar PA4 en HIGH, si PD3 está 
    en LOW el valor de salida en PA2 debe ser LOW.*/

    // Activamos la señal que permite habilitar las resistencia pull up y pull down
    MCUCR |= 0x10;

    //Habilitamos los puertos correspondientes como entrada Y salida
    DDRD &= 0xF7;
    DDRA |= 0x04;

    // Realizamos las comparaciones correspondientes
    if(PIND & 0x08)
    {
        PORTA |= 0x04;
    }
    else
    {
        PORTA &= 0xFB;
    }
}