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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.0
        Device            :  PIC16F15355
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
int foo;
char data;
int currentA = 0;
int currentB = 0;


void timerA(int time){
    for(int i = 0; i < time; i++){
        __delay_ms(1);
    }
}
void direction(int a){
    
    if(a == 1){
        DirA_SetHigh();
        
    }
    else if(a == 2){
        DirA_SetLow();
    }
    else if(a == 3){
        DirB_SetHigh();
    }
    else if(a == 4){
        DirB_SetLow();
    }
}
void step(int targetA,int targetB, int dirA, int dirB){
    
    direction(dirA);
    direction(dirB);
    
    if(currentA < targetA){
        stepsA_SetHigh();
        __delay_ms(5);
        stepsA_SetLow();
        __delay_ms(5);
        currentA++;
    }
    
    if(currentB < targetB){
        stepsB_SetHigh();
        __delay_ms(5);
        stepsB_SetLow();
        __delay_ms(5);
        currentB++;
    }
}
static void motorController(int stepsA, int stepsB , int dirA, int dirB){
    direction(dirA);
    direction(dirB);
    for(int i = 0; i < stepsA; i++){
        stepsA_SetHigh();
        __delay_ms(5);
        stepsA_SetLow();
        __delay_ms(5);
                
    }
    for(int i = 0; i < stepsB; i++){
        stepsB_SetHigh();
        __delay_ms(50);
        stepsB_SetLow();
        __delay_ms(50);
    }
    
}

static void both_StepForward (int a){
    for(int i = 0; i <a; i++){
    DirA_SetHigh();
    DirA_SetHigh();
    
    stepsA_SetHigh();
    stepsB_SetHigh();
    __delay_ms(5);
    
    stepsA_SetLow();
    stepsB_SetLow();
    __delay_ms(5);
    }
}

static void motorA_Forward (){
   
    DirA_SetHigh();
    
    stepsA_SetHigh();
    __delay_ms(5);
    
    stepsA_SetLow();
    __delay_ms(5);
    
}

static void motorB_Forward (){
    
    DirB_SetHigh();
    
    stepsB_SetHigh();
    __delay_ms(5);
    
    stepsB_SetLow();
    __delay_ms(5);
   
}

static void motorA_Back (){
    
    DirA_SetLow();
    
    stepsA_SetHigh();
    __delay_ms(5);
    
    stepsA_SetLow();
    __delay_ms(5);
    
}


static void motorB_Back (){
    
    DirB_SetLow();
    
    stepsB_SetHigh();
    __delay_ms(20);
    
    stepsB_SetLow();
    __delay_ms(20);
    
}
static void led(char a){
    if(a == 'o'){
        led0_SetHigh();
    }
    else if(a == 'f'){
        led0_SetLow();
    }
    
}
static char Home (char a){
    
    led(a);
    
    while(limitSwitch2_GetValue() != 0){
        
        motorA_Back();
    }
    
    
    while(limitSwitch1_GetValue() != 0){
        
        motorB_Back();
    }
    
    led0_SetLow();
    return 'a';
}
static void UART(){
    if(EUSART1_is_rx_ready()){
            
        data = EUSART1_Read();
                
    }
}
static void motors_Enable(){
    MS2A_SetLow();
    MS1A_SetLow();
    EnableA_SetLow();
    
    
    MS2B_SetLow();
    MS1B_SetHigh();
    EnableB_SetLow();
    
    
    
}


/*
                         Main application
 */
void main(void)
{
    // initialize the device
    EUSART1_Initialize();
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    

    // Enable the Peripheral Interrupts
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    char transmit;
    char switchState;
    int touchSens;
    int touchSensOld = 0;
    
    
    
    
    
    data = EUSART1_Read();
    while (1)
    {
        
       //step(200,200,1,3);
        motors_Enable();
        
        
        Home('f');
        
        motorController(100,30,1,3);
        led0_SetHigh();
        motorController(510,20,1,3);
        motorController(510,20,2,4);
        
        led0_SetLow();
        
        __delay_ms(30000);
        
        
        
         /*
        switch(data){
            
            
            case '1':
                motors_Enable();
                //Begin homing and store return to char transmit
                
                transmit = Home('o');
         
         
                //send char transmit to Argon
                if(EUSART1_is_tx_ready()){
                EUSART1_Write(transmit);
                }
                
                if(data != '4'){
                if(touchSensor_GetValue() == 1){
                data = '2';
                }
                else if(touchSensor_GetValue() == 0){
                data = '3';
                    }
                }
                
                break;
                
            case '2':
                motors_Enable();
                led0_SetHigh();
                motorController(200,200,1,3);
                
                led0_SetLow();
                
                //Transmit completion of random drawing.
                if(EUSART1_is_tx_ready()){
                EUSART1_Write('b');
                }
                
                //Home with laser off.
                Home('f');
                
                if(data != '4'){
                if(touchSensor_GetValue() == 1){
                data = '2';
                }
                else if(touchSensor_GetValue() == 0){
                data = '3';
                    }
                }
                
                __delay_ms(3000);
                
                break;
            
            case'3':
                motors_Enable();
                led0_SetHigh();
                motorController(200,200,1,3);
                motorController(200,200,2,4);
                led0_SetLow();
                
                //Transmit completion of touch-based drawing.
                if(EUSART1_is_tx_ready()){
                EUSART1_Write('c');
                }
                
                Home('f');
                if(data != '4'){
                if(touchSensor_GetValue() == 1){
                data = '2';
                }
                else if(touchSensor_GetValue() == 0){
                data = '3';
                    }
                }
                break;   
                
             
            
            case '4':
                
                led0_SetHigh();
                __delay_ms(1000);
                led0_SetLow();
                __delay_ms(1000);
                
                led0_SetHigh();
                __delay_ms(1000);
                led0_SetLow();
                __delay_ms(1000);
                
                
                Home('f');
                
                if(touchSensor_GetValue() == 1){
                data = '2';
                }
                else if(touchSensor_GetValue() == 0){
                data = '3';
                    }
                
                break;
            default:
                break;
          
        }   
        */
      
    }
    


}




/**
 End of File
*/