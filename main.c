/**
  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.168.0
        Device            :  PIC24FJ256GA702
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.50
        MPLAB 	          :  MPLAB X v5.40
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
#include "mcc_generated_files/uart1.h"
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

enum states{RESET, SENSOR_ALARM_MODE, SENSOR_ALARM_ACK_MODE} OPER_STATUS;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////// PROTOTYPE FUNCTIONS /////////////////////////////
////////////////////////////////////////////////////////////////////////////////

uint16_t adc_value_get();

////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// MAIN FUNCTION /////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    // initialize the device
    OPER_STATUS = RESET;
    
    SYSTEM_Initialize();
    
    // Inputs initializing
    PB1_SetDigitalInput();
    PB2_SetDigitalInput();
    
    // Outputs initializing
    LED1_SetDigitalOutput();
    LED2_SetDigitalOutput();
    
    

    
    
    do{
        switch(OPER_STATUS){
        case RESET:
            
            LED1_Toggle();
            LED2_Toggle();
            delay_ms(500);

            LED1_Toggle();
            LED2_Toggle();
            delay_ms(500);

            LED1_Toggle();
            LED2_Toggle();
            delay_ms(500);

            printf("\n\nOK");
            
            while(adc_value_get() < 50);
            
            OPER_STATUS = SENSOR_ALARM_MODE;

            break;

        case SENSOR_ALARM_MODE:
            
            
            printf("\nSENSOR ALARM");
            
            do{
                potValue = adc_value_get();
                LED1_Toggle();
                delay_ms(10 * (100 - potValue));
            }while(PB1_GetValue());
            
            LED1_SetHigh();
            OPER_STATUS = SENSOR_ALARM_ACK_MODE;
            
            break;

        case SENSOR_ALARM_ACK_MODE:
            
            printf("\nSENSOR ALARM ACK");
            
            while(PB2_GetValue());
            LED2_SetLow();
            
            printf("\nSENSOR ALARM CLEARED");
            delay_ms(2000);
            
            LED1_SetLow();
            
            OPER_STATUS = RESET;
            
            break;

        }           
    }while (1);
    
    do{
        potValue = adc_value_get();
        LATA =  potValue;
        printf("\n%u", potValue);
        LED1_Toggle();
        delay_ms(500);
        
    }while(1);
        
    return 1;
}

/**
 * @brief 		Function to handle the ADC module
 *
 * @param[in] 	None
 * 
 * @retval		0 to 100 adc result value 
 */
uint16_t adc_value_get(){

    uint16_t result = 0;

    ADC1_Initialize();

    ADC1_Enable();
    ADC1_ChannelSelect(Potentiometer);
    ADC1_SoftwareTriggerEnable();
    //Provide Delay
    for(int i = 0; i < 1000; i++)
    {
    }
    ADC1_SoftwareTriggerDisable();
    while(!ADC1_IsConversionComplete(Potentiometer));
    result = (uint16_t) (ADC1_ConversionResultGet(Potentiometer) * 0.0977517106);
    ADC1_Disable(); 
    
    return result;
    
}