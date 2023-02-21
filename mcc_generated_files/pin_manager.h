/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for PIN MANAGER.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.168.0
        Device            :  PIC24FJ256GA705
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.50
        MPLAB 	          :  MPLAB X v5.40
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
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

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>

/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RA11, high using LATA11.

  @Description
    Sets the GPIO pin, RA11, high using LATA11.

  @Preconditions
    The RA11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA11 high (1)
    PB1_SetHigh();
    </code>

*/
#define PB1_SetHigh()          (_LATA11 = 1)
/**
  @Summary
    Sets the GPIO pin, RA11, low using LATA11.

  @Description
    Sets the GPIO pin, RA11, low using LATA11.

  @Preconditions
    The RA11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA11 low (0)
    PB1_SetLow();
    </code>

*/
#define PB1_SetLow()           (_LATA11 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA11, using LATA11.

  @Description
    Toggles the GPIO pin, RA11, using LATA11.

  @Preconditions
    The RA11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA11
    PB1_Toggle();
    </code>

*/
#define PB1_Toggle()           (_LATA11 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA11.

  @Description
    Reads the value of the GPIO pin, RA11.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA11
    postValue = PB1_GetValue();
    </code>

*/
#define PB1_GetValue()         _RA11
/**
  @Summary
    Configures the GPIO pin, RA11, as an input.

  @Description
    Configures the GPIO pin, RA11, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA11 as an input
    PB1_SetDigitalInput();
    </code>

*/
#define PB1_SetDigitalInput()  (_TRISA11 = 1)
/**
  @Summary
    Configures the GPIO pin, RA11, as an output.

  @Description
    Configures the GPIO pin, RA11, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA11 as an output
    PB1_SetDigitalOutput();
    </code>

*/
#define PB1_SetDigitalOutput() (_TRISA11 = 0)
/**
  @Summary
    Sets the GPIO pin, RA12, high using LATA12.

  @Description
    Sets the GPIO pin, RA12, high using LATA12.

  @Preconditions
    The RA12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA12 high (1)
    PB2_SetHigh();
    </code>

*/
#define PB2_SetHigh()          (_LATA12 = 1)
/**
  @Summary
    Sets the GPIO pin, RA12, low using LATA12.

  @Description
    Sets the GPIO pin, RA12, low using LATA12.

  @Preconditions
    The RA12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA12 low (0)
    PB2_SetLow();
    </code>

*/
#define PB2_SetLow()           (_LATA12 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA12, using LATA12.

  @Description
    Toggles the GPIO pin, RA12, using LATA12.

  @Preconditions
    The RA12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA12
    PB2_Toggle();
    </code>

*/
#define PB2_Toggle()           (_LATA12 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA12.

  @Description
    Reads the value of the GPIO pin, RA12.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA12
    postValue = PB2_GetValue();
    </code>

*/
#define PB2_GetValue()         _RA12
/**
  @Summary
    Configures the GPIO pin, RA12, as an input.

  @Description
    Configures the GPIO pin, RA12, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA12 as an input
    PB2_SetDigitalInput();
    </code>

*/
#define PB2_SetDigitalInput()  (_TRISA12 = 1)
/**
  @Summary
    Configures the GPIO pin, RA12, as an output.

  @Description
    Configures the GPIO pin, RA12, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA12 as an output
    PB2_SetDigitalOutput();
    </code>

*/
#define PB2_SetDigitalOutput() (_TRISA12 = 0)
/**
  @Summary
    Sets the GPIO pin, RA8, high using LATA8.

  @Description
    Sets the GPIO pin, RA8, high using LATA8.

  @Preconditions
    The RA8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA8 high (1)
    LED1_SetHigh();
    </code>

*/
#define LED1_SetHigh()          (_LATA8 = 1)
/**
  @Summary
    Sets the GPIO pin, RA8, low using LATA8.

  @Description
    Sets the GPIO pin, RA8, low using LATA8.

  @Preconditions
    The RA8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA8 low (0)
    LED1_SetLow();
    </code>

*/
#define LED1_SetLow()           (_LATA8 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA8, using LATA8.

  @Description
    Toggles the GPIO pin, RA8, using LATA8.

  @Preconditions
    The RA8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA8
    LED1_Toggle();
    </code>

*/
#define LED1_Toggle()           (_LATA8 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA8.

  @Description
    Reads the value of the GPIO pin, RA8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA8
    postValue = LED1_GetValue();
    </code>

*/
#define LED1_GetValue()         _RA8
/**
  @Summary
    Configures the GPIO pin, RA8, as an input.

  @Description
    Configures the GPIO pin, RA8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA8 as an input
    LED1_SetDigitalInput();
    </code>

*/
#define LED1_SetDigitalInput()  (_TRISA8 = 1)
/**
  @Summary
    Configures the GPIO pin, RA8, as an output.

  @Description
    Configures the GPIO pin, RA8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA8 as an output
    LED1_SetDigitalOutput();
    </code>

*/
#define LED1_SetDigitalOutput() (_TRISA8 = 0)
/**
  @Summary
    Sets the GPIO pin, RA9, high using LATA9.

  @Description
    Sets the GPIO pin, RA9, high using LATA9.

  @Preconditions
    The RA9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA9 high (1)
    LED2_SetHigh();
    </code>

*/
#define LED2_SetHigh()          (_LATA9 = 1)
/**
  @Summary
    Sets the GPIO pin, RA9, low using LATA9.

  @Description
    Sets the GPIO pin, RA9, low using LATA9.

  @Preconditions
    The RA9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA9 low (0)
    LED2_SetLow();
    </code>

*/
#define LED2_SetLow()           (_LATA9 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA9, using LATA9.

  @Description
    Toggles the GPIO pin, RA9, using LATA9.

  @Preconditions
    The RA9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA9
    LED2_Toggle();
    </code>

*/
#define LED2_Toggle()           (_LATA9 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA9.

  @Description
    Reads the value of the GPIO pin, RA9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA9
    postValue = LED2_GetValue();
    </code>

*/
#define LED2_GetValue()         _RA9
/**
  @Summary
    Configures the GPIO pin, RA9, as an input.

  @Description
    Configures the GPIO pin, RA9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA9 as an input
    LED2_SetDigitalInput();
    </code>

*/
#define LED2_SetDigitalInput()  (_TRISA9 = 1)
/**
  @Summary
    Configures the GPIO pin, RA9, as an output.

  @Description
    Configures the GPIO pin, RA9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA9 as an output
    LED2_SetDigitalOutput();
    </code>

*/
#define LED2_SetDigitalOutput() (_TRISA9 = 0)
/**
  @Summary
    Sets the GPIO pin, RB12, high using LATB12.

  @Description
    Sets the GPIO pin, RB12, high using LATB12.

  @Preconditions
    The RB12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB12 high (1)
    Potentiometer_SetHigh();
    </code>

*/
#define Potentiometer_SetHigh()          (_LATB12 = 1)
/**
  @Summary
    Sets the GPIO pin, RB12, low using LATB12.

  @Description
    Sets the GPIO pin, RB12, low using LATB12.

  @Preconditions
    The RB12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB12 low (0)
    Potentiometer_SetLow();
    </code>

*/
#define Potentiometer_SetLow()           (_LATB12 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB12, using LATB12.

  @Description
    Toggles the GPIO pin, RB12, using LATB12.

  @Preconditions
    The RB12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB12
    Potentiometer_Toggle();
    </code>

*/
#define Potentiometer_Toggle()           (_LATB12 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB12.

  @Description
    Reads the value of the GPIO pin, RB12.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB12
    postValue = Potentiometer_GetValue();
    </code>

*/
#define Potentiometer_GetValue()         _RB12
/**
  @Summary
    Configures the GPIO pin, RB12, as an input.

  @Description
    Configures the GPIO pin, RB12, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB12 as an input
    Potentiometer_SetDigitalInput();
    </code>

*/
#define Potentiometer_SetDigitalInput()  (_TRISB12 = 1)
/**
  @Summary
    Configures the GPIO pin, RB12, as an output.

  @Description
    Configures the GPIO pin, RB12, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB12 as an output
    Potentiometer_SetDigitalOutput();
    </code>

*/
#define Potentiometer_SetDigitalOutput() (_TRISB12 = 0)

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC24FJ256GA705
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);



#endif
