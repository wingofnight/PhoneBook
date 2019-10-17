#pragma once
#include "pch.h"
#include "Header.h"
#include "menu.h"
#include "Stabilizer.h"


struct person
{
	string name;
	string ultimateName[3];
	string selfPhone;
	string homePhone;
	string email;
	
};
person zero;
map <string, person> human;
int runJust;
int poz1,poz2,poz3,id;

string name,twoname;
bool sure = false;
bool runAway = false;

void Action() {
	string buff;
	
	switch (zaza)
	{
	case 0:
		cout << "Введите имя : "; getline(cin, name);
		buff = Stabilizer(name);
		cout << "Поиск по : "<< buff << endl;
		for (auto i = human.begin(); i != human.end(); i++)
		{
			if (i->first == buff || i->second.ultimateName[0] == buff || i->second.ultimateName[1] == buff || i->second.ultimateName[2] == buff || i->second.selfPhone == buff || i->second.homePhone == buff || i->second.email == buff)
			{
				id++;
				cout << " name  : " << i->first << "\n s.tel : " << i->second.selfPhone << "\n h.tel : " << i->second.homePhone << "\n @Email: " << i->second.email << endl << endl;
				cout << endl << "Выберите дальнейше действие : \nПродолжить - \"Enter\"\nРедактировать запись - \"Backspase\"\nВернуться в меню - \"Esc\"" << endl;
				tryagane2:
				Where();
				if (choice == 8)
				{
					system("cls");
					Change();
					switch (ch)
					{
					case 0:
						cin >> buff;
						zero.ultimateName[0] = Stabilizer(buff);
						break;
					case 1:
						cin >> buff;
						zero.ultimateName[1] = Stabilizer(buff);
						break;
					case 2:
						cin >> buff;
						zero.ultimateName[2] = Stabilizer(buff);
						break;
					case 3:
						cin >> buff;
						zero.selfPhone = Stabilizer(buff);
						break;
					case 4:
						cin >> buff;
						zero.homePhone = Stabilizer(buff);
						break;
					case 5:
						cin >> buff;
						zero.email = Stabilizer(buff);
						break;

					default:
						break;
						}
					
					
				}
				
				/*if (choice != 8 || choice != 13 || choice != 27)
				{
					goto tryagane2;
				}*/
				system("pause");
			}
		}
		cout << "Найдено : " << id << " соответсвий" << endl;
		id = 0;
		break;
	case 1:
		for (auto i = human.begin(); i != human.end(); i++)
		{
			cout << " name  : " << i->first << "\n s.tel : " << i->second.selfPhone << "\n h.tel : " << i->second.homePhone << "\n @Email: " << i->second.email << endl << endl;
		}
		system("pause");
		break;
	case 2:
	label:
		//тут гдето ошибка!
		system("cls");
		cout << "\nВведите ФИО\n";
		getline(cin, buff);
		twoname = Stabilizer(buff);
		poz1 = twoname.find(' ');
		poz2 = twoname.find(' ', poz1 + 1);
		poz3 = twoname.find(' ', poz2 + 1);
		zero.ultimateName[0] = twoname.substr(0, poz1);
		zero.ultimateName[1] = twoname.substr(poz1 + 1, poz2 - poz1 - 1);
		zero.ultimateName[2] = twoname.substr(poz2 + 1, poz3 - poz2 - 1);


		cout << endl;
		zero.name = twoname;
			
		buff.erase();
		cout << "\nВведите сотовый телефон\n";
		getline(cin , buff);
		zero.selfPhone = buff;
		buff.erase();
		cout << "\nВведите домашний телефон\n";
		getline(cin, buff);
		zero.homePhone = buff;
		buff.erase();
		cout << "\nВведите @Email\n";
		getline(cin, buff);
		zero.email = buff;
		buff.erase();
		system("pause");
		cout << "\nПроверьте введенные данные\n\n";
		cout << " name  : " << zero.name << "\n s.tel : " << zero.selfPhone << "\n h.tel : " << zero.homePhone << "\n @Email: " << zero.email << endl << endl;
		/*cout << zero.ultimateName[0] << endl;
		cout << zero.ultimateName[1] << endl;
		cout << zero.ultimateName[2] << endl;*/
		cout << "\n Если все верно нажмите - Enter\n Вернуться к редактированию - BackSpase\n В начало - Esc\n";
		tryagane:
		Where();
		if (choice == 8)
		{
			goto label;
		}
		else if (choice == 13)
		{
			human.insert(pair<string, person>(zero.name, zero));
			sure = true;
		}
		else if (choice != 8 || choice != 13 || choice != 27 )
		{
			goto tryagane;
		}

		break;
	case 3:
		cout << "Exit";
		runAway = true;
		break;
	default:
		break;
	}
}
