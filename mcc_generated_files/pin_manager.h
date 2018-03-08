/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F19185
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/



#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS               TRISAbits.TRISA0
#define IO_RA0_LAT                LATAbits.LATA0
#define IO_RA0_PORT               PORTAbits.RA0
#define IO_RA0_WPU                WPUAbits.WPUA0
#define IO_RA0_OD                ODCONAbits.ODCA0
#define IO_RA0_ANS                ANSELAbits.ANSA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()    do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetOpenDrain()   do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_RA1 aliases
#define IO_RA1_TRIS               TRISAbits.TRISA1
#define IO_RA1_LAT                LATAbits.LATA1
#define IO_RA1_PORT               PORTAbits.RA1
#define IO_RA1_WPU                WPUAbits.WPUA1
#define IO_RA1_OD                ODCONAbits.ODCA1
#define IO_RA1_ANS                ANSELAbits.ANSA1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_RA1_SetPushPull()    do { ODCONAbits.ODCA1 = 0; } while(0)
#define IO_RA1_SetOpenDrain()   do { ODCONAbits.ODCA1 = 1; } while(0)
#define IO_RA1_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define IO_RA1_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_RA2 aliases
#define IO_RA2_TRIS               TRISAbits.TRISA2
#define IO_RA2_LAT                LATAbits.LATA2
#define IO_RA2_PORT               PORTAbits.RA2
#define IO_RA2_WPU                WPUAbits.WPUA2
#define IO_RA2_OD                ODCONAbits.ODCA2
#define IO_RA2_ANS                ANSELAbits.ANSA2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_RA2_SetPushPull()    do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_RA2_SetOpenDrain()   do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_RA2_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_RA3 aliases
#define IO_RA3_TRIS               TRISAbits.TRISA3
#define IO_RA3_LAT                LATAbits.LATA3
#define IO_RA3_PORT               PORTAbits.RA3
#define IO_RA3_WPU                WPUAbits.WPUA3
#define IO_RA3_OD                ODCONAbits.ODCA3
#define IO_RA3_ANS                ANSELAbits.ANSA3
#define IO_RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IO_RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IO_RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IO_RA3_GetValue()           PORTAbits.RA3
#define IO_RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IO_RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IO_RA3_SetPullup()      do { WPUAbits.WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()    do { WPUAbits.WPUA3 = 0; } while(0)
#define IO_RA3_SetPushPull()    do { ODCONAbits.ODCA3 = 0; } while(0)
#define IO_RA3_SetOpenDrain()   do { ODCONAbits.ODCA3 = 1; } while(0)
#define IO_RA3_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define IO_RA3_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set IO_RA4 aliases
#define IO_RA4_TRIS               TRISAbits.TRISA4
#define IO_RA4_LAT                LATAbits.LATA4
#define IO_RA4_PORT               PORTAbits.RA4
#define IO_RA4_WPU                WPUAbits.WPUA4
#define IO_RA4_OD                ODCONAbits.ODCA4
#define IO_RA4_ANS                ANSELAbits.ANSA4
#define IO_RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_RA4_GetValue()           PORTAbits.RA4
#define IO_RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define IO_RA4_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define IO_RA4_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define IO_RA4_SetPushPull()    do { ODCONAbits.ODCA4 = 0; } while(0)
#define IO_RA4_SetOpenDrain()   do { ODCONAbits.ODCA4 = 1; } while(0)
#define IO_RA4_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define IO_RA4_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set IO_RA6 aliases
#define IO_RA6_TRIS               TRISAbits.TRISA6
#define IO_RA6_LAT                LATAbits.LATA6
#define IO_RA6_PORT               PORTAbits.RA6
#define IO_RA6_WPU                WPUAbits.WPUA6
#define IO_RA6_OD                ODCONAbits.ODCA6
#define IO_RA6_ANS                ANSELAbits.ANSA6
#define IO_RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_RA6_GetValue()           PORTAbits.RA6
#define IO_RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define IO_RA6_SetPullup()      do { WPUAbits.WPUA6 = 1; } while(0)
#define IO_RA6_ResetPullup()    do { WPUAbits.WPUA6 = 0; } while(0)
#define IO_RA6_SetPushPull()    do { ODCONAbits.ODCA6 = 0; } while(0)
#define IO_RA6_SetOpenDrain()   do { ODCONAbits.ODCA6 = 1; } while(0)
#define IO_RA6_SetAnalogMode()  do { ANSELAbits.ANSA6 = 1; } while(0)
#define IO_RA6_SetDigitalMode() do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set IO_RA7 aliases
#define IO_RA7_TRIS               TRISAbits.TRISA7
#define IO_RA7_LAT                LATAbits.LATA7
#define IO_RA7_PORT               PORTAbits.RA7
#define IO_RA7_WPU                WPUAbits.WPUA7
#define IO_RA7_OD                ODCONAbits.ODCA7
#define IO_RA7_ANS                ANSELAbits.ANSA7
#define IO_RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IO_RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IO_RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IO_RA7_GetValue()           PORTAbits.RA7
#define IO_RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IO_RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define IO_RA7_SetPullup()      do { WPUAbits.WPUA7 = 1; } while(0)
#define IO_RA7_ResetPullup()    do { WPUAbits.WPUA7 = 0; } while(0)
#define IO_RA7_SetPushPull()    do { ODCONAbits.ODCA7 = 0; } while(0)
#define IO_RA7_SetOpenDrain()   do { ODCONAbits.ODCA7 = 1; } while(0)
#define IO_RA7_SetAnalogMode()  do { ANSELAbits.ANSA7 = 1; } while(0)
#define IO_RA7_SetDigitalMode() do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set IO_RB0 aliases
#define IO_RB0_TRIS               TRISBbits.TRISB0
#define IO_RB0_LAT                LATBbits.LATB0
#define IO_RB0_PORT               PORTBbits.RB0
#define IO_RB0_WPU                WPUBbits.WPUB0
#define IO_RB0_OD                ODCONBbits.ODCB0
#define IO_RB0_ANS                ANSELBbits.ANSB0
#define IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_RB0_GetValue()           PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_RB0_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_RB0_SetPushPull()    do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_RB0_SetOpenDrain()   do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_RB0_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define IO_RB0_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set IO_RB1 aliases
#define IO_RB1_TRIS               TRISBbits.TRISB1
#define IO_RB1_LAT                LATBbits.LATB1
#define IO_RB1_PORT               PORTBbits.RB1
#define IO_RB1_WPU                WPUBbits.WPUB1
#define IO_RB1_OD                ODCONBbits.ODCB1
#define IO_RB1_ANS                ANSELBbits.ANSB1
#define IO_RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_RB1_GetValue()           PORTBbits.RB1
#define IO_RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_RB1_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_RB1_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_RB1_SetPushPull()    do { ODCONBbits.ODCB1 = 0; } while(0)
#define IO_RB1_SetOpenDrain()   do { ODCONBbits.ODCB1 = 1; } while(0)
#define IO_RB1_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define IO_RB1_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set IO_RB2 aliases
#define IO_RB2_TRIS               TRISBbits.TRISB2
#define IO_RB2_LAT                LATBbits.LATB2
#define IO_RB2_PORT               PORTBbits.RB2
#define IO_RB2_WPU                WPUBbits.WPUB2
#define IO_RB2_OD                ODCONBbits.ODCB2
#define IO_RB2_ANS                ANSELBbits.ANSB2
#define IO_RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_RB2_GetValue()           PORTBbits.RB2
#define IO_RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_RB2_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_RB2_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_RB2_SetPushPull()    do { ODCONBbits.ODCB2 = 0; } while(0)
#define IO_RB2_SetOpenDrain()   do { ODCONBbits.ODCB2 = 1; } while(0)
#define IO_RB2_SetAnalogMode()  do { ANSELBbits.ANSB2 = 1; } while(0)
#define IO_RB2_SetDigitalMode() do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()    do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()   do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()   do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()         PORTBbits.RB3
#define RB3_SetDigitalInput()   do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()  do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()     do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()   do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode() do { ANSELBbits.ANSB3 = 1; } while(0)
#define RB3_SetDigitalMode()do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set IO_RC3 aliases
#define IO_RC3_TRIS               TRISCbits.TRISC3
#define IO_RC3_LAT                LATCbits.LATC3
#define IO_RC3_PORT               PORTCbits.RC3
#define IO_RC3_WPU                WPUCbits.WPUC3
#define IO_RC3_OD                ODCONCbits.ODCC3
#define IO_RC3_ANS                ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()    do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()   do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_RC4 aliases
#define IO_RC4_TRIS               TRISCbits.TRISC4
#define IO_RC4_LAT                LATCbits.LATC4
#define IO_RC4_PORT               PORTCbits.RC4
#define IO_RC4_WPU                WPUCbits.WPUC4
#define IO_RC4_OD                ODCONCbits.ODCC4
#define IO_RC4_ANS                ANSELCbits.ANSC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()    do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()   do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set IO_RC6 aliases
#define IO_RC6_TRIS               TRISCbits.TRISC6
#define IO_RC6_LAT                LATCbits.LATC6
#define IO_RC6_PORT               PORTCbits.RC6
#define IO_RC6_WPU                WPUCbits.WPUC6
#define IO_RC6_OD                ODCONCbits.ODCC6
#define IO_RC6_ANS                ANSELCbits.ANSC6
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_RC6_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_RC6_SetPushPull()    do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_RC6_SetOpenDrain()   do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_RC6_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO_RC6_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO_RC7 aliases
#define IO_RC7_TRIS               TRISCbits.TRISC7
#define IO_RC7_LAT                LATCbits.LATC7
#define IO_RC7_PORT               PORTCbits.RC7
#define IO_RC7_WPU                WPUCbits.WPUC7
#define IO_RC7_OD                ODCONCbits.ODCC7
#define IO_RC7_ANS                ANSELCbits.ANSC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_RC7_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_RC7_SetPushPull()    do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO_RC7_SetOpenDrain()   do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO_RC7_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define IO_RC7_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set IO_RD4 aliases
#define IO_RD4_TRIS               TRISDbits.TRISD4
#define IO_RD4_LAT                LATDbits.LATD4
#define IO_RD4_PORT               PORTDbits.RD4
#define IO_RD4_WPU                WPUDbits.WPUD4
#define IO_RD4_OD                ODCONDbits.ODCD4
#define IO_RD4_ANS                ANSELDbits.ANSD4
#define IO_RD4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IO_RD4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IO_RD4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IO_RD4_GetValue()           PORTDbits.RD4
#define IO_RD4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IO_RD4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IO_RD4_SetPullup()      do { WPUDbits.WPUD4 = 1; } while(0)
#define IO_RD4_ResetPullup()    do { WPUDbits.WPUD4 = 0; } while(0)
#define IO_RD4_SetPushPull()    do { ODCONDbits.ODCD4 = 0; } while(0)
#define IO_RD4_SetOpenDrain()   do { ODCONDbits.ODCD4 = 1; } while(0)
#define IO_RD4_SetAnalogMode()  do { ANSELDbits.ANSD4 = 1; } while(0)
#define IO_RD4_SetDigitalMode() do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set IO_RD5 aliases
#define IO_RD5_TRIS               TRISDbits.TRISD5
#define IO_RD5_LAT                LATDbits.LATD5
#define IO_RD5_PORT               PORTDbits.RD5
#define IO_RD5_WPU                WPUDbits.WPUD5
#define IO_RD5_OD                ODCONDbits.ODCD5
#define IO_RD5_ANS                ANSELDbits.ANSD5
#define IO_RD5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IO_RD5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IO_RD5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IO_RD5_GetValue()           PORTDbits.RD5
#define IO_RD5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IO_RD5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IO_RD5_SetPullup()      do { WPUDbits.WPUD5 = 1; } while(0)
#define IO_RD5_ResetPullup()    do { WPUDbits.WPUD5 = 0; } while(0)
#define IO_RD5_SetPushPull()    do { ODCONDbits.ODCD5 = 0; } while(0)
#define IO_RD5_SetOpenDrain()   do { ODCONDbits.ODCD5 = 1; } while(0)
#define IO_RD5_SetAnalogMode()  do { ANSELDbits.ANSD5 = 1; } while(0)
#define IO_RD5_SetDigitalMode() do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set IO_RD6 aliases
#define IO_RD6_TRIS               TRISDbits.TRISD6
#define IO_RD6_LAT                LATDbits.LATD6
#define IO_RD6_PORT               PORTDbits.RD6
#define IO_RD6_WPU                WPUDbits.WPUD6
#define IO_RD6_OD                ODCONDbits.ODCD6
#define IO_RD6_ANS                ANSELDbits.ANSD6
#define IO_RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IO_RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IO_RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IO_RD6_GetValue()           PORTDbits.RD6
#define IO_RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IO_RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IO_RD6_SetPullup()      do { WPUDbits.WPUD6 = 1; } while(0)
#define IO_RD6_ResetPullup()    do { WPUDbits.WPUD6 = 0; } while(0)
#define IO_RD6_SetPushPull()    do { ODCONDbits.ODCD6 = 0; } while(0)
#define IO_RD6_SetOpenDrain()   do { ODCONDbits.ODCD6 = 1; } while(0)
#define IO_RD6_SetAnalogMode()  do { ANSELDbits.ANSD6 = 1; } while(0)
#define IO_RD6_SetDigitalMode() do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set IO_RD7 aliases
#define IO_RD7_TRIS               TRISDbits.TRISD7
#define IO_RD7_LAT                LATDbits.LATD7
#define IO_RD7_PORT               PORTDbits.RD7
#define IO_RD7_WPU                WPUDbits.WPUD7
#define IO_RD7_OD                ODCONDbits.ODCD7
#define IO_RD7_ANS                ANSELDbits.ANSD7
#define IO_RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IO_RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IO_RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IO_RD7_GetValue()           PORTDbits.RD7
#define IO_RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IO_RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IO_RD7_SetPullup()      do { WPUDbits.WPUD7 = 1; } while(0)
#define IO_RD7_ResetPullup()    do { WPUDbits.WPUD7 = 0; } while(0)
#define IO_RD7_SetPushPull()    do { ODCONDbits.ODCD7 = 0; } while(0)
#define IO_RD7_SetOpenDrain()   do { ODCONDbits.ODCD7 = 1; } while(0)
#define IO_RD7_SetAnalogMode()  do { ANSELDbits.ANSD7 = 1; } while(0)
#define IO_RD7_SetDigitalMode() do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set IO_RE0 aliases
#define IO_RE0_TRIS               TRISEbits.TRISE0
#define IO_RE0_LAT                LATEbits.LATE0
#define IO_RE0_PORT               PORTEbits.RE0
#define IO_RE0_WPU                WPUEbits.WPUE0
#define IO_RE0_OD                ODCONEbits.ODCE0
#define IO_RE0_ANS                ANSELEbits.ANSE0
#define IO_RE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define IO_RE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define IO_RE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define IO_RE0_GetValue()           PORTEbits.RE0
#define IO_RE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define IO_RE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define IO_RE0_SetPullup()      do { WPUEbits.WPUE0 = 1; } while(0)
#define IO_RE0_ResetPullup()    do { WPUEbits.WPUE0 = 0; } while(0)
#define IO_RE0_SetPushPull()    do { ODCONEbits.ODCE0 = 0; } while(0)
#define IO_RE0_SetOpenDrain()   do { ODCONEbits.ODCE0 = 1; } while(0)
#define IO_RE0_SetAnalogMode()  do { ANSELEbits.ANSE0 = 1; } while(0)
#define IO_RE0_SetDigitalMode() do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set IO_RE1 aliases
#define IO_RE1_TRIS               TRISEbits.TRISE1
#define IO_RE1_LAT                LATEbits.LATE1
#define IO_RE1_PORT               PORTEbits.RE1
#define IO_RE1_WPU                WPUEbits.WPUE1
#define IO_RE1_OD                ODCONEbits.ODCE1
#define IO_RE1_ANS                ANSELEbits.ANSE1
#define IO_RE1_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define IO_RE1_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define IO_RE1_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define IO_RE1_GetValue()           PORTEbits.RE1
#define IO_RE1_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define IO_RE1_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define IO_RE1_SetPullup()      do { WPUEbits.WPUE1 = 1; } while(0)
#define IO_RE1_ResetPullup()    do { WPUEbits.WPUE1 = 0; } while(0)
#define IO_RE1_SetPushPull()    do { ODCONEbits.ODCE1 = 0; } while(0)
#define IO_RE1_SetOpenDrain()   do { ODCONEbits.ODCE1 = 1; } while(0)
#define IO_RE1_SetAnalogMode()  do { ANSELEbits.ANSE1 = 1; } while(0)
#define IO_RE1_SetDigitalMode() do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set IO_RF1 aliases
#define IO_RF1_TRIS               TRISFbits.TRISF1
#define IO_RF1_LAT                LATFbits.LATF1
#define IO_RF1_PORT               PORTFbits.RF1
#define IO_RF1_WPU                WPUFbits.WPUF1
#define IO_RF1_OD                ODCONFbits.ODCF1
#define IO_RF1_ANS                ANSELFbits.ANSF1
#define IO_RF1_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define IO_RF1_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define IO_RF1_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define IO_RF1_GetValue()           PORTFbits.RF1
#define IO_RF1_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define IO_RF1_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define IO_RF1_SetPullup()      do { WPUFbits.WPUF1 = 1; } while(0)
#define IO_RF1_ResetPullup()    do { WPUFbits.WPUF1 = 0; } while(0)
#define IO_RF1_SetPushPull()    do { ODCONFbits.ODCF1 = 0; } while(0)
#define IO_RF1_SetOpenDrain()   do { ODCONFbits.ODCF1 = 1; } while(0)
#define IO_RF1_SetAnalogMode()  do { ANSELFbits.ANSF1 = 1; } while(0)
#define IO_RF1_SetDigitalMode() do { ANSELFbits.ANSF1 = 0; } while(0)

// get/set IO_RF2 aliases
#define IO_RF2_TRIS               TRISFbits.TRISF2
#define IO_RF2_LAT                LATFbits.LATF2
#define IO_RF2_PORT               PORTFbits.RF2
#define IO_RF2_WPU                WPUFbits.WPUF2
#define IO_RF2_OD                ODCONFbits.ODCF2
#define IO_RF2_ANS                ANSELFbits.ANSF2
#define IO_RF2_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define IO_RF2_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define IO_RF2_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define IO_RF2_GetValue()           PORTFbits.RF2
#define IO_RF2_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define IO_RF2_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define IO_RF2_SetPullup()      do { WPUFbits.WPUF2 = 1; } while(0)
#define IO_RF2_ResetPullup()    do { WPUFbits.WPUF2 = 0; } while(0)
#define IO_RF2_SetPushPull()    do { ODCONFbits.ODCF2 = 0; } while(0)
#define IO_RF2_SetOpenDrain()   do { ODCONFbits.ODCF2 = 1; } while(0)
#define IO_RF2_SetAnalogMode()  do { ANSELFbits.ANSF2 = 1; } while(0)
#define IO_RF2_SetDigitalMode() do { ANSELFbits.ANSF2 = 0; } while(0)

// get/set IO_RF3 aliases
#define IO_RF3_TRIS               TRISFbits.TRISF3
#define IO_RF3_LAT                LATFbits.LATF3
#define IO_RF3_PORT               PORTFbits.RF3
#define IO_RF3_WPU                WPUFbits.WPUF3
#define IO_RF3_OD                ODCONFbits.ODCF3
#define IO_RF3_ANS                ANSELFbits.ANSF3
#define IO_RF3_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define IO_RF3_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define IO_RF3_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define IO_RF3_GetValue()           PORTFbits.RF3
#define IO_RF3_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define IO_RF3_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define IO_RF3_SetPullup()      do { WPUFbits.WPUF3 = 1; } while(0)
#define IO_RF3_ResetPullup()    do { WPUFbits.WPUF3 = 0; } while(0)
#define IO_RF3_SetPushPull()    do { ODCONFbits.ODCF3 = 0; } while(0)
#define IO_RF3_SetOpenDrain()   do { ODCONFbits.ODCF3 = 1; } while(0)
#define IO_RF3_SetAnalogMode()  do { ANSELFbits.ANSF3 = 1; } while(0)
#define IO_RF3_SetDigitalMode() do { ANSELFbits.ANSF3 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/