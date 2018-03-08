/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC16F19185
        Driver Version    :  2.00
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"

#define rs LATA6
#define rw LATA7
#define en LATA4
#define lcd_port LATA

void ms_delay(unsigned int delay){
    
    int i,j;
    for(i=0; i< delay; i++){
        for(j=0; j<310; j++){
            
        }
    }
                   
}

// Function for sending command to LCD
void lcd_command(unsigned char command){
    
    lcd_port = command;
    rs = 0;
    rw = 0;
    en = 1;
    ms_delay(20);
    en = 0;
    
}

// Function for sending data to LCD
void lcd_data(unsigned char data){
    
    lcd_port = data;
    rs = 1;
    rw = 0;
    en = 1;
    ms_delay(20);
    en = 0;
    
}

// Function for sending a string to LCD
void lcd_display(char *display){
    
    int x = 0;
    while(display[x] != 0){
        lcd_data(display[x]);
        x++;
    }
    
}

// Function for initializing LCD
void lcd_init(){
    
    lcd_command(0x38);
    ms_delay(20);
    lcd_command(0x0c);
    ms_delay(20);
    lcd_command(0x06);
    ms_delay(20);
    lcd_command(0x01);
    ms_delay(20);
    lcd_command(0x83);
    ms_delay(20);
    
}


void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    
    while (1)
    {
        // LCD interfacing 
     
    TRISA0 = 0;   // DB4
    TRISA1 = 0;   // DB5
    TRISA2 = 0;   // DB6
    TRISA3 = 0;   // DB7
    TRISA4 = 0;   // EN  
    TRISA6 = 0;   // RS
    TRISA7 = 0;   // R/W
    
    // HCSR04 interfacing
    
    TRISE0 = 0;   // TRIG
    TRISE1 = 1;   // ECHO
    
    
    // Initializing LCD
    lcd_init();
    
    lcd_display("Please go up");
    lcd_command(0xc0);
    lcd_display("Please go down");
    ms_delay(5000);
    lcd_command(0x01);
    lcd_display("Liquid level detected");
    lcd_command(0xc5);
    lcd_display("Volume of tank: ");
    
    while(1);
    
    }
}
/**
 End of File
*/