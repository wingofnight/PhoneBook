#pragma once
#include "Book.h"
#include "Header.h"



/*#define setColor(x) printf("\033[%dm", x)
#define led() printf("\033[%dm", 5)
#define resetcolor() printf("\033[0m")*/

int buffy = 0;
int choice;
bool action = true;
int zaza = 0;
int ch = 0;

string textMenu[4]{ "Поиск\n","Весь список\n","Добавить номер\n", "Выход\n" };

void Choice() {
	action = true;
	buffy = 0;
	cout << endl;
	setColor(47);
	setColor(30);
	cout << textMenu[0];
	resetcolor();
	cout<< textMenu[1] << textMenu[2]<< textMenu[3];
	cout << "\nPush button" << endl;

	do
	{
		
		choice = _getch();

		switch (choice)
		{
		case 72:
			buffy--;
			if (buffy < 0)
			{
				buffy = 3;
			}
			system("cls");
			cout << endl ;

			for (int i = 0; i < 4; i++)
			{
				if (buffy == i)
				{
					setColor(47);
					setColor(30);
					cout << textMenu[i];
					resetcolor();
				}
				else {
					cout << textMenu[i];
				}

			}

			break;
		case 80:
			buffy++;
			if (buffy > 3)
			{
				buffy = 0;
			}
			system("cls");
			cout << endl;

			for (int i = 0; i < 4; i++)
			{
				if (buffy == i)
				{
					setColor(47);
					setColor(30);
					cout << textMenu[i];
					resetcolor();
				}
				else {
					cout << textMenu[i];
				}

			}
			break;
		case 13:
			zaza = buffy;
			action = false;
			break;
		default:
			break;
		}
	} while (action);
	
}
void Where() {
	choice = _getch();
	switch (choice)
	{
	case 13:
		break;
	case 32:
		break;
	case 8:
		break;
	default:
		break;
	}
}
void Change() {
	string textChang[6]{ "Имя\n","Фамилия\n","Отчество\n", "Сотовый\n", "Домашний\n", "Почта\n" };
	action = true;
	buffy = 0;
	cout << endl;
	setColor(47);
	setColor(30);
	cout << textChang[0];
	resetcolor();
	cout << textChang[1] << textChang[2] << textChang[3]<< textChang[4] << textChang[5];
	cout << "\nPush button" << endl;

	do
	{

		choice = _getch();

		switch (choice)
		{
		case 72:
			buffy--;
			if (buffy < 0)
			{
				buffy = 5;
			}
			system("cls");
			cout << endl;

			for (int i = 0; i < 6; i++)
			{
				if (buffy == i)
				{
					setColor(47);
					setColor(30);
					cout << textChang[i];
					resetcolor();
				}
				else {
					cout << textChang[i];
				}

			}

			break;
		case 80:
			buffy++;
			if (buffy > 5)
			{
				buffy = 0;
			}
			system("cls");
			cout << endl;

			for (int i = 0; i < 6; i++)
			{
				if (buffy == i)
				{
					setColor(47);
					setColor(30);
					cout << textChang[i];
					resetcolor();
				}
				else {
					cout << textChang[i];
				}

			}
			break;
		case 13:
			zaza = buffy;
			action = false;
			break;
		default:
			break;
		}
	} while (action);


}