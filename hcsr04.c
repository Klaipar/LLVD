/*
 * File:   hcsr04.c
 * Author: Miguel
 *
 * Created on February 23, 2018, 1:49 PM
 */


#include <xc.h>


#define _XTAL_FREQ 3400000

#define RS RA6
#define EN RE2
#define DB0 RE1
#define DB1 RE0
#define DB2 RA5
#define DB3 RA4


// bit configuration
#pragma config FEXTOSC = ECM // External Oscillator mode selection bits
#pragma config WDTE = OFF // Watchdog Timer Enable bit 
#pragma config PWRTE = OFF // Power-up Timer Enable bit 
#pragma config BOREN = ON // Brown-out Reset Enable bit 
#pragma config LVP = OFF // Low-Voltage (Single-Supply) 
#pragma config WRTD = OFF // Data EEPROM Memory Code Protection bit 
#pragma config WRTSAF = OFF // Flash Program Memory Write Enable bits 
#pragma config CP = OFF // UserNVM Program memory code protection bit (UserNVM code protection disabled)
//


void main()
{
  int a;

  TRISA = 0b00010000;           //RA3 as Input PIN (ECHO)
  TRISE = 0x00; // LCD Pins A (TRISA) and E as Output

  Lcd_Init();

  Lcd_Set_Cursor(1,1);
  Lcd_Write_String("This is the");
  Lcd_Set_Cursor(2,1);
  Lcd_Write_String("first test");

  __delay_ms(3000);
  Lcd_Clear();

  T1CON = 0x10;                 //Initialize Timer Module

  while(1)
  {
      //initial values of timer
    TMR1H = 0;                  
    TMR1L = 0;                 

    RA2 = 1;               //A2 port used as our trigger high
    __delay_us(10);               //10uS Delay
    RA2 = 0;               //trigger low

    while(!RA3);           //Waiting for echo signal
    TMR1ON = 1;               //Timer Starts
    while(RA3);            //Waiting for echo goes low
    TMR1ON = 0;               //Timer Stops

    a = (TMR1L | (TMR1H << 8));   //assigning the timer value to variable a
    a = a/58.82;                //converting time from timer to distance
    a = a + 1;
    
    //Distance Calibration
    
    if(a >= 2 && a <= 400)          //for verifying that the distance is accurate according to the hcsr04 distance specifications
    {
      Lcd_Clear();
      Lcd_Set_Cursor(1,1);
      Lcd_Write_String("Distance = ");
      
      Lcd_Set_Cursor(1,14);
      Lcd_Write_Char(a%10 + 48);

      a = a/10;
      Lcd_Set_Cursor(1,13);
      Lcd_Write_Char(a%10 + 48);

      a = a/10;
      Lcd_Set_Cursor(1,12);
      Lcd_Write_Char(a%10 + 48);

      Lcd_Set_Cursor(1,15);
      Lcd_Write_String("cm");
    }
    else
    {
      Lcd_Clear();
      Lcd_Set_Cursor(1,1);
      Lcd_Write_String("Out of Range");
    }
    __delay_ms(400);
  }
}



