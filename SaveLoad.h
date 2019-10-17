#pragma once
#include "Header.h"





void Load() {
	person loadMan;
	string str;
	
	int position, position2, position3;
	ifstream file;
	file.open("db.csv");
	if (file.is_open())
	{
		//cout << "Файл открылся" << endl;
		while (!file.eof()) {
			getline(file, str);
			position = str.find(';');
			position2 = str.find(';', position + 1);
			position3 = str.find(';', position2 + 1);
			loadMan.name = str.substr(0, position);
			loadMan.selfPhone = str.substr(position + 1, position2 - position - 1);
			loadMan.homePhone = str.substr(position2 + 1, position3 - position2 - 1);
			loadMan.email = str.substr(position3 + 1);
			human.insert(pair<string, person>(loadMan.name, loadMan));
		}
	}
	else {
		cout << "Файл не открылся!" << endl;
	}
	file.close();

}

void Save() {
	
	ofstream ofile;
	ofile.open("db.csv", ios_base::app);
	if (ofile.is_open())
	{
		//cout << "Файл открылся" << endl;
		ofile.seekp(0, ios_base::end);//seekp позволяет позиционироваться в файле.
		for (auto i = human.begin(); i != human.end(); i++)
		{
			ofile <<  i->first << ";" << i->second.selfPhone << ";" << i->second.homePhone << ";" << i->second.email << endl;
		}
		
	}
	else { cout << "Файл не открылся!" << endl; }
	ofile.close();
	sure = false;
}
