/***********************************************************************
*
*  FILE        : RX231.c
*  DATE        : 2024-04-01
*  DESCRIPTION : Main Program
*
*  NOTE:THIS IS A TYPICAL EXAMPLE.
*
***********************************************************************/
#include "FreeRTOS.h"
#include "task.h"
#include "r_smc_entry.h"

#if BSP_CFG_CPLUSPLUS == 1
extern void abort(void);
#endif

void main_task(void *pvParameters)
{

	/* Create all other application tasks here */
	Object_init_manual();
	while(1);

	vTaskDelete(NULL);

}

#if BSP_CFG_CPLUSPLUS == 1
void abort(void)
{

}
#endif
