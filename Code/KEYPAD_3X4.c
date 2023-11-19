#include "KEYPAD_3X4.h"
char key;
char Get_Key(void)
{
	int done=1;
	while(done)
	{
	//COLUMN 3
	HAL_GPIO_WritePin (KC0_GPIO_Port, KC0_Pin, GPIO_PIN_SET);     // Pull the C0 HIGH
	HAL_GPIO_WritePin (KC1_GPIO_Port, KC1_Pin, GPIO_PIN_RESET);   // Pull the C1 LOW
	HAL_GPIO_WritePin (KC2_GPIO_Port, KC2_Pin, GPIO_PIN_RESET);   // Pull the C2 LOW

	if ((HAL_GPIO_ReadPin (KR0_GPIO_Port, KR0_Pin)))   // if R0 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR0_GPIO_Port, KR0_Pin)));   // wait till the button is pressed
		key='1';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR1_GPIO_Port, KR1_Pin)))   // if  R1 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR1_GPIO_Port, KR1_Pin)));   // wait till the button is pressed
		key='4';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR2_GPIO_Port, KR2_Pin)))   // if R2 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR2_GPIO_Port, KR2_Pin)));   // wait till the button is pressed
		key='7';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR3_GPIO_Port, KR3_Pin)))   // if R3 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR3_GPIO_Port, KR3_Pin)));   // wait till the button is pressed
		key='*';
		break;
	}

	//COLUMN 2
	HAL_GPIO_WritePin (KC0_GPIO_Port, KC0_Pin, GPIO_PIN_RESET);   // Pull the C0 LOW
	HAL_GPIO_WritePin (KC1_GPIO_Port, KC1_Pin, GPIO_PIN_SET);     // Pull the C1 HIGH
	HAL_GPIO_WritePin (KC2_GPIO_Port, KC2_Pin, GPIO_PIN_RESET);   // Pull the C2 LOW
	if ((HAL_GPIO_ReadPin (KR0_GPIO_Port, KR0_Pin)))   // if R0 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR0_GPIO_Port, KR0_Pin)));   // wait till the button is pressed
		key='2';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR1_GPIO_Port, KR1_Pin)))   // if  R1 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR1_GPIO_Port, KR1_Pin)));   // wait till the button is pressed
		key='5';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR2_GPIO_Port, KR2_Pin)))   // if R2 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR2_GPIO_Port, KR2_Pin)));   // wait till the button is pressed
		key='8';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR3_GPIO_Port, KR3_Pin)))   // if R3 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR3_GPIO_Port, KR3_Pin)));   // wait till the button is pressed
		key='0';
		break;
	}
	//COLUMN 1
	HAL_GPIO_WritePin (KC0_GPIO_Port, KC0_Pin, GPIO_PIN_RESET);  // Pull the C0 LOW
	HAL_GPIO_WritePin (KC1_GPIO_Port, KC1_Pin, GPIO_PIN_RESET);  // Pull the C1 LOW
	HAL_GPIO_WritePin (KC2_GPIO_Port, KC2_Pin, GPIO_PIN_SET);    // Pull the C2 HIGH

	if ((HAL_GPIO_ReadPin (KR0_GPIO_Port, KR0_Pin)))   // if R0 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR0_GPIO_Port, KR0_Pin)));   // wait till the button is pressed
		key='3';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR1_GPIO_Port, KR1_Pin)))   // if  R1 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR1_GPIO_Port, KR1_Pin)));   // wait till the button is pressed
		key='6';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR2_GPIO_Port, KR2_Pin)))   // if R2 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR2_GPIO_Port, KR2_Pin)));   // wait till the button is pressed
		key='9';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR3_GPIO_Port, KR3_Pin)))   // if R3 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR3_GPIO_Port, KR3_Pin)));   // wait till the button is pressed
		key='#';
		break;
	}
	//COLUMN 0
	HAL_GPIO_WritePin (KC0_GPIO_Port, KC0_Pin, GPIO_PIN_RESET);   // Pull the C0 LOW
	HAL_GPIO_WritePin (KC1_GPIO_Port, KC1_Pin, GPIO_PIN_RESET);   // Pull the C1 LOW
	HAL_GPIO_WritePin (KC2_GPIO_Port, KC2_Pin, GPIO_PIN_RESET);   // Pull the C2 LOW

	if ((HAL_GPIO_ReadPin (KR0_GPIO_Port, KR0_Pin)))   // if R0 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR0_GPIO_Port, KR0_Pin)));   // wait till the button is pressed
		key='A';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR1_GPIO_Port, KR1_Pin)))   // if  R1 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR1_GPIO_Port, KR1_Pin)));   // wait till the button is pressed
		key='B';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR2_GPIO_Port, KR2_Pin)))   // if R2 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR2_GPIO_Port, KR2_Pin)));   // wait till the button is pressed
		key='C';
		break;
	}

	if ((HAL_GPIO_ReadPin (KR3_GPIO_Port, KR3_Pin)))   // if R3 is HIGH
	{
		while ((HAL_GPIO_ReadPin (KR3_GPIO_Port, KR3_Pin)));   // wait till the button is pressed
		key='D';
		break;
	}
}
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
	return(key);
}
