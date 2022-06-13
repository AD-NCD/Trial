/*
 * Error_table.h
 *
 * Created: 25-Feb-20 5:22:48 PM
 *  Author: ahmed
 */ 


#ifndef ERROR_TABLE_H_
#define ERROR_TABLE_H_


/************************************************************************/
/*							INIT DEFINES                                */
/************************************************************************/
#define ERROR_NULL_PTR_INIT		(-1)
#define ERROR_MULTIPLE_MODULE_INIT	(-2)
#define INVALID_INIT_PARAMETER		(-3)

/************************************************************************/
/*							START DEFINES                               */
/************************************************************************/
#define ERROR_NULL_PTR_START	(-4)
#define ERROR_MULTIPLE_MODULE_START	(-5)
#define ERROR_START_FULL_BUFFER		(-6)
#define ERROR_MODULE_PRIORITY_USED	(-7)
#define ERROR_INVALID_START_PARAMETERS	(-11)
/************************************************************************/
/*							DISPATCH DEFINES                            */
/************************************************************************/
#define ERROR_DISPATCH_NO_TASKS	(-8)

/************************************************************************/
/*							STOP DEFINES                                */
/************************************************************************/
#define ERROR_MODULES_STOPPED_BEFORE	(-9)
#define ERROR_MODULE_DIDNOT_START		(-10)

/************************************************************************/
/*						LCD_INIT_ERRORS                                 */
/************************************************************************/
#define ERROR_LCD_WRONG_CONNECTION    (-12)
#define ERROR_LCD_MULTIPLE_INITIALIZATION  (-13)
#define ERROR_LCD_NOT_INITIALIZED		(-14)
#define ERROR_LCD_NULL_POINTER			(-15)
#define ERROR_LCD_WRONG_LOCATION		(-16)
#endif /* ERROR_TABLE_H_ */