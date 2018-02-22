/*
 * File:   llvd.h
 * Author: Miguel
 *
 * Created on February 21, 2018, 6:31 PM
 */

// PIC16F19185 Configuration Bit Settings



#include <xc.h>

// CONFIG1
#pragma config FEXTOSC = ECM    // External Oscillator mode selection bits (EC for 500kHz to 8MHz; PFM set to medium power)
#pragma config RSTOSC = EXT1X   // Power-up default value for COSC bits (EXTOSC operating per FEXTOSC bits)
#pragma config CLKOUTEN = OFF   // Clock Out Enable bit (CLKOUT function is disabled; i/o or oscillator function on OSC2)
#pragma config VBATEN = OFF     // VBAT Pin Enable bit (VBAT functionality is disabled)
#pragma config LCDPEN = ON      // LCD Charge Pump Mode bit (LCD Charge Pump is enabled)
#pragma config CSWEN = ON       // Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable bit (FSCM timer enabled)

// CONFIG2
#pragma config MCLRE = OFF      // Master Clear Enable bit (MCLR pin function is port defined function)
#pragma config PWRTE = OFF      // Power-up Timer selection bits (PWRT disable)
#pragma config LPBOREN = OFF    // Low-Power BOR enable bit (ULPBOR disabled)
#pragma config BOREN = ON       // Brown-out reset enable bits (Brown-out Reset Enabled, SBOREN bit is ignored)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (VBOR) set to 1.9V on LF, and 2.45V on F Devices)
#pragma config ZCD = OFF        // Zero-cross detect disable (Zero-cross detect circuit is disabled at POR.)
#pragma config PPS1WAY = ON     // Peripheral Pin Select one-way control (The PPSLOCK bit can be cleared and set only once in software)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable bit (Stack Overflow or Underflow will cause a reset)

// CONFIG3
#pragma config WDTCPS = WDTCPS_31// WDT Period Select bits (Divider ratio 1:65536; software control of WDTPS)
#pragma config WDTE = ON        // WDT operating mode (WDT enabled regardless of sleep; SWDTEN ignored)
#pragma config WDTCWS = WDTCWS_7// WDT Window Select bits (window always open (100%); software control; keyed access not required)
#pragma config WDTCCS = SC      // WDT input clock selector (Software Control)

// CONFIG4
#pragma config BBSIZE = 512     // Boot Block Size Selection bits (Boot Block Size (Words) 512)
#pragma config BBEN = OFF       // Boot Block Enable bit (Boot Block disabled)
#pragma config SAFEN = OFF      // SAF Enable bit (SAF disabled)
#pragma config WRTAPP = OFF     // Application Block Write Protection bit (Application Block NOT write-protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block NOT write-protected)
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration Words NOT write-protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM NOT write-protected)
#pragma config WRTSAF = OFF     // Storage Area Flash Write Protection bit (SAF NOT write-protected)
#pragma config LVP = ON         // Low Voltage Programming Enable bit (Low Voltage programming enabled. MCLR/Vpp pin function is MCLR.)

// CONFIG5
#pragma config CP = OFF         // UserNVM Program memory code protection bit (UserNVM code protection disabled)


// Setting of our oscilator
#define _XTAL_FREQ 3400000
