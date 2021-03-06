/////////////////////////////////////////////////////////////////////////
///	\file main.c
///	\brief This is the main program code.
///
///	Author: Ronald Sousa (Opticalworm)
/////////////////////////////////////////////////////////////////////////
#include "common.h"
#include "MCU/led.h"
#include "MCU/tick.h"

int8_t                Char_8_Type;			// 1 byte   8bit   -128 to +127
uint8_t       Unsigned_Char_8_Type;     	// 1 byte   8bit   +0 to 255

int32_t                 Int_32_Type;     	// 4 byte   32bit   -2147483648 to +2147483647
uint32_t       Unsigned_Int_32_Type;     	// 4 byte   32bit   0 to +4294967295

int16_t           Long_Int_16_Type;      	// 2 byte   16bit   -32768 to 32767
uint16_t  Unsigned_Long_Int_16_Type;     	// 2 byte   16bit   0 to 65535

int64_t            Long_Int_64_Type;     	// 8 byte   64bit   -9223372036854775808 to +9223372036854775807
uint64_t    Signed_Long_Int_64_Type;     	// 8 byte   64bit   0 to +18446744073709551615

float               Float_Type;       		// 4 byte   32bit   single precision

// assuming that double is enable in compiler
double              Double_Type;      		// 4 or 8 byte      single precision / double precision

// assuming that double is enable in compiler
long double         Long_Double_Type; 		// 8 byte           double precision


// there will be at least 1 byte
uint_least8_t      poss_least_8_Type;
uint_least16_t     poss_least_16_Type;
uint_least32_t     poss_least_32_Type;
uint_least64_t     poss_least_64_Type;

int_least8_t      least_8_Type;
int_least16_t     least_16_Type;
int_least32_t     least_32_Type;
int_least64_t     least_64_Type;

// it will uses what data size hardware can execute the quickest
// if its a 32bit system then it will likely use 32bit data size
uint_fast8_t      poss_fast_8_Type;
uint_fast16_t     poss_fast_16_Type;
uint_fast32_t     poss_fast_32_Type;
uint_fast64_t     poss_fast_64_Type;

int_fast8_t       fast_8_Type;
int_fast16_t      fast_16_Type;
int_fast32_t      fast_32_Type;
int_fast64_t      fast_64_Type;

/////////////////////////////////////////////////////////////////////////
///	\brief the first user code function to be called after the ARM M0
///	has initial.
/////////////////////////////////////////////////////////////////////////
void main(void)
{
    Led_Init();
    Tick_init();

    for ( ;; )
    {
    	Led_Toggle();
    	Tick_DelayMs(1000);
    }
}
