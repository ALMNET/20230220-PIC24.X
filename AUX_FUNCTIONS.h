/* 
 * File:   AUX_FUNCTIONS.h
 * Author: ALMNET
 *
 * Created on 12 de febrero de 2022, 17:03
 */



#ifndef AUX_FUNCTIONS_H
#define	AUX_FUNCTIONS_H

#ifndef _XTAL_FREQ
#define _XTAL_FREQ	8000000
#endif

#ifndef FCY
#define FCY			_XTAL_FREQ/2
#endif

#include "mcc_generated_files/system.h"
#include <libpic30.h>

//

void delay_ms(long delay_value);

#endif	/* AUX_FUNCTIONS_H */

