/*
 * File:   llvd.c
 * Author: Miguel
 *
 * Created on February 21, 2018, 6:31 PM
 */


#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <llvd.h>

#define rs LATA6
#define rw LATA7
#define en LATE2
#define lcd_port LATD




// Function for generating delay in milliseconds
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


void main(void) {
    
    //Making Port E as output port
    TRISE = 0x00;
    
    //Making bit 6 of port A as output
    TRISA6 = 0;
    
    //Making bit 7 of port A as output
    TRISA7 = 0;
    
    //Making bit 2 of port E as output
    TRISE2 = 0;
    
    
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
    
    
    return;
}
