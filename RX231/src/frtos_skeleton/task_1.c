/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
* other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
* EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
* SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS
* SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
* this software. By using this software, you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2019 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
Includes   <System Includes> , "Project Includes"
***********************************************************************************************************************/
#include "task_function.h"
#include "platform.h"
/* Start user code for import. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#define LED0 PORT1.PIDR.BIT.B7
#define LED0_PDR PORT1.PDR.BIT.B7
#define LED1 PORT5.PIDR.BIT.B0
#define LED1_PDR PORT5.PDR.BIT.B0
#define LED2 PORT5.PIDR.BIT.B1
#define LED2_PDR PORT5.PDR.BIT.B1
#define LED3 PORT5.PIDR.BIT.B2
#define LED3_PDR PORT5.PDR.BIT.B2


void task_1(void * pvParameters)
{

/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
for(;;){

	LED0_PDR =1;
	LED0=0 ;
	LED1_PDR =1;
	LED1=0 ;
	LED2_PDR =1;
	LED2=0 ;
	LED3_PDR =1;
	LED3=0 ;

vTaskDelay(10);
}
}


/* Start user code for other. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
