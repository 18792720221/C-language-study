#include "Contact.h"


int main()
{
	int input = 0;
	Contact contact;
	Initcontact(&contact);
	Load(&contact);
	do 
	{
		menu();
		printf("请选择您需要的功能：>\n");
		scanf("%d", &input);
		switch (input)
		{
		case Exit: 
			printf("退出通讯录！\n");
			break;
		case Add: 
			add(&contact);
			break;
		case Del: 
			del(&contact);
			break;
		case Search:
			search(&contact);
			break;
		case Modify: 
		    modify(&contact);
			break;
		case Show: 
			show(&contact);
			break;
		case Sort: 
			sort(&contact);
			break;
		case Save: 
			save(&contact);
			break;
		default:break;
		}		
	} while (input);
	return 0;
}