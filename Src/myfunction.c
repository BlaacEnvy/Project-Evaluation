#include <sdk_tplus.h>

#include "DateScreen.h"
#include "Menu.h"


void EnterAmountSale(void){

	char enterAmount[100];
	char currency[]= "KSH";
	float amountPut=0.00;

	memset(enterAmount, 0 , sizeof(enterAmount));

	GL_Dialog_Amount(gGoalGraphicLibInstance, "Sale", "Enter Amount: ", "/d/d/d/D./D/D", enterAmount, sizeof(enterAmount), currency, GL_ALIGN_LEFT,GL_TIME_MINUTE);
	scanf(enterAmount, "%f", &amountPut);
	amountPut=amountPut/100;

	if (amountPut<1.00) {
		GL_Dialog_Message(gGoalGraphicLibInstance,"Invalid",
				"Please put an amount greater than 1", GL_ICON_ERROR , GL_BUTTON_VALID, 3* GL_TIME_SECOND);

	} else if (amountPut>5000.00) {
		GL_Dialog_Message(gGoalGraphicLibInstance,"Invalid",
						"Please put an amount less than 5000", GL_ICON_ERROR , GL_BUTTON_VALID, 3* GL_TIME_SECOND);


	} else {
		enterAndswipeCard();

	}
	{
		return;

	}


	void BillPayments(void){
		char payBillNumber = 0;
		char enterPayBill[100];
		char currency[]= "KSH";



		GL_Dialog_Amount(gGoalGraphicLibInstance, "enter Pay Bill", "billAmount: ","/d/d/d/D./D/D", enterPayBill, sizeof(enterPayBill), currency, GL_ALIGN_LEFT,GL_TIME_MINUTE);
			scanf(enterPayBill, "%f", &payBillNumber);


			if (payBillNumber<5) {
					GL_Dialog_Message(gGoalGraphicLibInstance,"Invalid",
							"Check Your Pay Bill Number And Try Again", GL_ICON_ERROR , GL_BUTTON_VALID, 3* GL_TIME_SECOND);

				} else if (payBillNumber>8) {
					GL_Dialog_Message(gGoalGraphicLibInstance,"Invalid",
									"Check Your Pay Bill Number And Try Again", GL_ICON_ERROR , GL_BUTTON_VALID, 3* GL_TIME_SECOND);


				} else {
				enterAndswipeCard();

				}

	}

	void SalesWithCashback(void){
		char enterAmount[100];
		char currency[]= "KSH";
		float amountPut=0.00;
		int choice;




				GL_Dialog_Amount(gGoalGraphicLibInstance, "enter Pay Bill", "billAmount: ","/d/d/d/D./D/D", enterAmount, sizeof(enterAmount), currency, GL_ALIGN_LEFT,GL_TIME_MINUTE);
					scanf(enterAmount, "%f", &amountPut);

					While (amountPut < 1.00){
								printf("1) Sale\n");
								printf("2) Cash back\n");
								printf("Enter Choice: ");
								scanf("%d", &choice);


					switch (choice)
							{
							case 1:
								printf("Enter Amount:");
								scanf("%1f", &amountPut);
								balance += amountPut;
								break;
							case 2:
								printf("Cash Back:");
								scanf("%1f", &amountPut);
								balance -= amountPut;
								break;
							case 3:
								printf("Insert/Swipe card" );
								break;
							case 4:
								printf("Enter pin");

							case 5:
								exit(0);
							}
					}


	}



}

