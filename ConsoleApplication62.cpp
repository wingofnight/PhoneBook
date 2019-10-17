// Это телефонная книга! Крутецкая сразу говорю!
// Автор Питецкий Владимир (с) Wizard

#include "pch.h"
#include "Header.h"
#include "menu.h"





int main()
{	//setlocale(LC_ALL, "ru");

	
	Print();
	system("cls");
	locale::global(locale("ru"));
	wcout.imbue(locale());
	Load();
	do
	{
		system("cls");
		Choice();
		Action();
		if (sure){Save();}
		
		//system("pause");

	} while (!runAway);
	
	

}


