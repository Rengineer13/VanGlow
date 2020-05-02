/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.0
        Device            :  PIC16F15355
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.35	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set limitSwitch3 aliases
#define limitSwitch3_TRIS                 TRISAbits.TRISA0
#define limitSwitch3_LAT                  LATAbits.LATA0
#define limitSwitch3_PORT                 PORTAbits.RA0
#define limitSwitch3_WPU                  WPUAbits.WPUA0
#define limitSwitch3_OD                   ODCONAbits.ODCA0
#define limitSwitch3_ANS                  ANSELAbits.ANSA0
#define limitSwitch3_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define limitSwitch3_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define limitSwitch3_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define limitSwitch3_GetValue()           PORTAbits.RA0
#define limitSwitch3_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define limitSwitch3_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define limitSwitch3_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define limitSwitch3_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define limitSwitch3_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define limitSwitch3_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define limitSwitch3_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define limitSwitch3_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set led0 aliases
#define led0_TRIS                 TRISAbits.TRISA1
#define led0_LAT                  LATAbits.LATA1
#define led0_PORT                 PORTAbits.RA1
#define led0_WPU                  WPUAbits.WPUA1
#define led0_OD                   ODCONAbits.ODCA1
#define led0_ANS                  ANSELAbits.ANSA1
#define led0_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define led0_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define led0_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define led0_GetValue()           PORTAbits.RA1
#define led0_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define led0_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define led0_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define led0_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define led0_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define led0_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define led0_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define led0_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set touchSensor aliases
#define touchSensor_TRIS                 TRISAbits.TRISA2
#define touchSensor_LAT                  LATAbits.LATA2
#define touchSensor_PORT                 PORTAbits.RA2
#define touchSensor_WPU                  WPUAbits.WPUA2
#define touchSensor_OD                   ODCONAbits.ODCA2
#define touchSensor_ANS                  ANSELAbits.ANSA2
#define touchSensor_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define touchSensor_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define touchSensor_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define touchSensor_GetValue()           PORTAbits.RA2
#define touchSensor_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define touchSensor_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define touchSensor_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define touchSensor_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define touchSensor_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define touchSensor_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define touchSensor_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define touchSensor_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set limitSwitch1 aliases
#define limitSwitch1_TRIS                 TRISAbits.TRISA3
#define limitSwitch1_LAT                  LATAbits.LATA3
#define limitSwitch1_PORT                 PORTAbits.RA3
#define limitSwitch1_WPU                  WPUAbits.WPUA3
#define limitSwitch1_OD                   ODCONAbits.ODCA3
#define limitSwitch1_ANS                  ANSELAbits.ANSA3
#define limitSwitch1_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define limitSwitch1_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define limitSwitch1_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define limitSwitch1_GetValue()           PORTAbits.RA3
#define limitSwitch1_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define limitSwitch1_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define limitSwitch1_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define limitSwitch1_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define limitSwitch1_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define limitSwitch1_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define limitSwitch1_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define limitSwitch1_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set limitSwitch2 aliases
#define limitSwitch2_TRIS                 TRISAbits.TRISA4
#define limitSwitch2_LAT                  LATAbits.LATA4
#define limitSwitch2_PORT                 PORTAbits.RA4
#define limitSwitch2_WPU                  WPUAbits.WPUA4
#define limitSwitch2_OD                   ODCONAbits.ODCA4
#define limitSwitch2_ANS                  ANSELAbits.ANSA4
#define limitSwitch2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define limitSwitch2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define limitSwitch2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define limitSwitch2_GetValue()           PORTAbits.RA4
#define limitSwitch2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define limitSwitch2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define limitSwitch2_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define limitSwitch2_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define limitSwitch2_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define limitSwitch2_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define limitSwitch2_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define limitSwitch2_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set led1 aliases
#define led1_TRIS                 TRISAbits.TRISA5
#define led1_LAT                  LATAbits.LATA5
#define led1_PORT                 PORTAbits.RA5
#define led1_WPU                  WPUAbits.WPUA5
#define led1_OD                   ODCONAbits.ODCA5
#define led1_ANS                  ANSELAbits.ANSA5
#define led1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define led1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define led1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define led1_GetValue()           PORTAbits.RA5
#define led1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define led1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define led1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define led1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define led1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define led1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define led1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define led1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set MS2A aliases
#define MS2A_TRIS                 TRISAbits.TRISA6
#define MS2A_LAT                  LATAbits.LATA6
#define MS2A_PORT                 PORTAbits.RA6
#define MS2A_WPU                  WPUAbits.WPUA6
#define MS2A_OD                   ODCONAbits.ODCA6
#define MS2A_ANS                  ANSELAbits.ANSA6
#define MS2A_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define MS2A_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define MS2A_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define MS2A_GetValue()           PORTAbits.RA6
#define MS2A_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define MS2A_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define MS2A_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define MS2A_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define MS2A_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define MS2A_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define MS2A_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define MS2A_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set EnableA aliases
#define EnableA_TRIS                 TRISAbits.TRISA7
#define EnableA_LAT                  LATAbits.LATA7
#define EnableA_PORT                 PORTAbits.RA7
#define EnableA_WPU                  WPUAbits.WPUA7
#define EnableA_OD                   ODCONAbits.ODCA7
#define EnableA_ANS                  ANSELAbits.ANSA7
#define EnableA_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define EnableA_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define EnableA_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define EnableA_GetValue()           PORTAbits.RA7
#define EnableA_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define EnableA_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define EnableA_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define EnableA_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define EnableA_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define EnableA_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define EnableA_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define EnableA_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set EnableB aliases
#define EnableB_TRIS                 TRISBbits.TRISB1
#define EnableB_LAT                  LATBbits.LATB1
#define EnableB_PORT                 PORTBbits.RB1
#define EnableB_WPU                  WPUBbits.WPUB1
#define EnableB_OD                   ODCONBbits.ODCB1
#define EnableB_ANS                  ANSELBbits.ANSB1
#define EnableB_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define EnableB_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define EnableB_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define EnableB_GetValue()           PORTBbits.RB1
#define EnableB_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define EnableB_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define EnableB_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define EnableB_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define EnableB_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define EnableB_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define EnableB_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define EnableB_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set MS2B aliases
#define MS2B_TRIS                 TRISBbits.TRISB2
#define MS2B_LAT                  LATBbits.LATB2
#define MS2B_PORT                 PORTBbits.RB2
#define MS2B_WPU                  WPUBbits.WPUB2
#define MS2B_OD                   ODCONBbits.ODCB2
#define MS2B_ANS                  ANSELBbits.ANSB2
#define MS2B_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define MS2B_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define MS2B_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define MS2B_GetValue()           PORTBbits.RB2
#define MS2B_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define MS2B_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define MS2B_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define MS2B_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define MS2B_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define MS2B_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define MS2B_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define MS2B_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set MS1B aliases
#define MS1B_TRIS                 TRISBbits.TRISB3
#define MS1B_LAT                  LATBbits.LATB3
#define MS1B_PORT                 PORTBbits.RB3
#define MS1B_WPU                  WPUBbits.WPUB3
#define MS1B_OD                   ODCONBbits.ODCB3
#define MS1B_ANS                  ANSELBbits.ANSB3
#define MS1B_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define MS1B_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define MS1B_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define MS1B_GetValue()           PORTBbits.RB3
#define MS1B_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define MS1B_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define MS1B_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define MS1B_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define MS1B_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define MS1B_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define MS1B_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define MS1B_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set DirB aliases
#define DirB_TRIS                 TRISBbits.TRISB4
#define DirB_LAT                  LATBbits.LATB4
#define DirB_PORT                 PORTBbits.RB4
#define DirB_WPU                  WPUBbits.WPUB4
#define DirB_OD                   ODCONBbits.ODCB4
#define DirB_ANS                  ANSELBbits.ANSB4
#define DirB_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define DirB_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define DirB_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define DirB_GetValue()           PORTBbits.RB4
#define DirB_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define DirB_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define DirB_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define DirB_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define DirB_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define DirB_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define DirB_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define DirB_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set stepsB aliases
#define stepsB_TRIS                 TRISBbits.TRISB5
#define stepsB_LAT                  LATBbits.LATB5
#define stepsB_PORT                 PORTBbits.RB5
#define stepsB_WPU                  WPUBbits.WPUB5
#define stepsB_OD                   ODCONBbits.ODCB5
#define stepsB_ANS                  ANSELBbits.ANSB5
#define stepsB_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define stepsB_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define stepsB_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define stepsB_GetValue()           PORTBbits.RB5
#define stepsB_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define stepsB_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define stepsB_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define stepsB_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define stepsB_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define stepsB_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define stepsB_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define stepsB_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set MS1A aliases
#define MS1A_TRIS                 TRISCbits.TRISC0
#define MS1A_LAT                  LATCbits.LATC0
#define MS1A_PORT                 PORTCbits.RC0
#define MS1A_WPU                  WPUCbits.WPUC0
#define MS1A_OD                   ODCONCbits.ODCC0
#define MS1A_ANS                  ANSELCbits.ANSC0
#define MS1A_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define MS1A_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define MS1A_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define MS1A_GetValue()           PORTCbits.RC0
#define MS1A_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define MS1A_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define MS1A_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define MS1A_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define MS1A_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define MS1A_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define MS1A_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define MS1A_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set DirA aliases
#define DirA_TRIS                 TRISCbits.TRISC1
#define DirA_LAT                  LATCbits.LATC1
#define DirA_PORT                 PORTCbits.RC1
#define DirA_WPU                  WPUCbits.WPUC1
#define DirA_OD                   ODCONCbits.ODCC1
#define DirA_ANS                  ANSELCbits.ANSC1
#define DirA_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define DirA_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define DirA_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define DirA_GetValue()           PORTCbits.RC1
#define DirA_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define DirA_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define DirA_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define DirA_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define DirA_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define DirA_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define DirA_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define DirA_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set stepsA aliases
#define stepsA_TRIS                 TRISCbits.TRISC2
#define stepsA_LAT                  LATCbits.LATC2
#define stepsA_PORT                 PORTCbits.RC2
#define stepsA_WPU                  WPUCbits.WPUC2
#define stepsA_OD                   ODCONCbits.ODCC2
#define stepsA_ANS                  ANSELCbits.ANSC2
#define stepsA_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define stepsA_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define stepsA_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define stepsA_GetValue()           PORTCbits.RC2
#define stepsA_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define stepsA_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define stepsA_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define stepsA_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define stepsA_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define stepsA_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define stepsA_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define stepsA_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

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