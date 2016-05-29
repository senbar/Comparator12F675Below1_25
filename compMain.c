/* 
 * File:   compMain.c
 * Author: Senbar
 *
 * Created on 21 maja 2016, 16:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

// CONFIG
#pragma config FOSC = INTRCIO  // Oscillator Selection bits (INTOSC oscillator: CLKOUT function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-Up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF      // GP3/MCLR pin function select (GP3/MCLR pin function is MCLR)
#pragma config BOREN = OFF      // Brown-out Detect Enable bit (BOD enabled)
#pragma config CP = OFF         // Code Protection bit (Program Memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)


int main(void) {
    
    //setting GPIO2 for output, GPIO1 for input
    TRISIObits.TRISIO1=1;
    TRISIObits.TRISIO2=0;
    
    //setting output as digital
    ANSELbits.ANS2=0;
    
    //Vref= 1/4 Vdd + 0
    VRCON = 0b10000000;
    
    //non-inverted GP2 comparator output 1 when its below 1.25v, comparator CIN+ from Vref 
    CMCON = 0b00000011;
    
    
    
    while(1)
    { 
           //do shit
    }
    
    return (EXIT_SUCCESS);
}

