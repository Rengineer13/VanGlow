/**
   EXT_INT Generated Driver File
 
   @Company
     Microchip Technology Inc.
 
   @File Name
     ext_int.c
 
   @Summary
     This is the generated driver implementation file for the EXT_INT driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs
 
   @Description
     This source file provides implementations for driver APIs for EXT_INT.
     Generation Information :
         Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.0
         Device            :  PIC16F15355
         Driver Version    :  1.11
     The generated drivers are tested against the following:
         Compiler          :  XC8 2.10 and above
         MPLAB             :  MPLAB X 5.35
 */ 

 /**
   Section: Includes
 */
#include <xc.h>
#include "ext_int.h"
#include "mcc.h"
extern char data;

void (*INT_InterruptHandler)(void);

void INT_ISR(void)
{
    EXT_INT_InterruptFlagClear();

    // Callback function gets called everytime this ISR executes
    INT_CallBack();    
}


void INT_CallBack(void)
{
    // Add your custom callback code here
    if(INT_InterruptHandler)
    {
        INT_InterruptHandler();
    }
}

void INT_SetInterruptHandler(void (* InterruptHandler)(void)){
    INT_InterruptHandler = InterruptHandler;
}
 void INT_DefaultInterruptHandler(void){
    
     
    // add your INT interrupt custom code
    // or set custom function using INT_SetInterruptHandler()
     
     if(limitSwitch3_GetValue() == 0){
         data = '4';
         EUSART1_Write('t');
     }
     
}

void EXT_INT_Initialize(void)
{
    
    // Clear the interrupt flag
    // Set the external interrupt edge detect
    EXT_INT_InterruptFlagClear();   
    EXT_INT_risingEdgeSet();    
    // Set Default Interrupt Handler
    INT_SetInterruptHandler(INT_DefaultInterruptHandler);
    EXT_INT_InterruptEnable();      

}

