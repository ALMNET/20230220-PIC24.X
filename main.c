/**
  @File Name
    main.c

  @Summary
    main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.167.0
        Device            :  PIC24FJ256GA705
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.50
        MPLAB             :  MPLAB X v5.35
*/

////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// PROJECT LIBRARIES //////////////////////////////
////////////////////////////////////////////////////////////////////////////////

#define _XTAL_FREQ	8000000
#define FCY			XTAL_FREQ/2

#include <stdio.h>
#include <string.h>
#include <libpic30.h>

#include "mcc_generated_files/system.h"

#include "AUX_FUNCTIONS.h"
#include "mcc_generated_files/adc1.h"
#include "mcc_generated_files/pin_manager.h"

////////////////////////////////////////////////////////////////////////////////
////////////////////////// I/O PINOUT AND DEFINITIONS //////////////////////////
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// CONSTANTS  //////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

///////////////////////////////// DEFINITIONS //////////////////////////////////

#define INPUT		1
#define OUTPUT		0

#define ON			1
#define OFF			0

#define HIGH		1
#define LOW			0

#define ENGAGED		1
#define DISENGAGED	0


////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// VARIABLES  ////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

unsigned char buffer[64];
uint16_t potValue = 0;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////// PROTOTYPE FUNCTIONS /////////////////////////////
////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// MAIN FUNCTION /////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    PB1_SetDigitalInput();
    PB2_SetDigitalInput();
    
    LED1_SetDigitalOutput();
    LED2_SetDigitalOutput();
    
    ADC1_Enable();
    
    ADC1_ChannelSelect(Potentiometer);
    
    ADC1_SoftwareTriggerEnable();
    
//    ADC1_CHANNEL.Potentiometer = 
    
    do{
        potValue = ADC1_ConversionResultGet(Potentiometer);
        while(!IFS0bits.AD1IF);
        LATC =  potValue;
        
    }while(1);
        
//    LED1_SetHigh();
//    LED1_SetLow()
//    LED1_Toggle()
//            LED1_GetValue()
    
    
	delay_ms(1000);
	
	

    return 1;
}
