#pragma once
#include "pch.h"
#include "Header.h"
using namespace std;
#define pic(y) print[x][y] = pixel;

#define setColor(x) printf("\033[%dm", x)
#define red() printf("\033[%dm", 31)
#define led() printf("\033[%dm", 5)
#define resetcolor() printf("\033[0m")

#define changePic1() x = 0; pic(0) pic(1) pic(2) pic(4) pic(6) pic(8) pic(9) pic(10) pic(12) pic(15) pic(17) pic(18) pic(21) pic(22) pic(23) pic(26) pic(27) pic(28) pic(30) pic(31) pic(32) pic(34) pic(37)
#define changePic2() x = 1;pic(0) pic(2)pic(4)pic(6)pic(8)pic(10)pic(12)pic(13)pic(15)pic(17)pic(21)pic(23)pic(26)pic(28)pic(30)pic(32)pic(34)pic(36)
#define changePic3() x = 2;char magic1[22]{0,1,2,4,5,6,8,10,12,14,15,17,18,21,22,23,26,28,30,32,34,35}; for ( int i = 0;  i < 22;  i++) {pic(magic1[i])}
#define changePic4() x = 3;char magic2[17]{0,4,6,8,10,12,15,17,21,24,26,28,30,32,34,35,36}; for ( int i = 0; i < 17;  i++) {pic(magic2[i])}	
#define changePic5() x = 4;char magic3[22]{0,4,6,8,9,10,12,15,17,18,21,22,23,24,26,27,28,30,31,32,34,37}; for ( int i = 0;  i < 22;  i++) {pic(magic3[i])}
#define allActions() changePic1() changePic2() changePic3() changePic4() changePic5();

#define shadow(x,y) i == x && j == y
#define globalShadow() shadow (0,3)||shadow (1,3)||shadow (2,3)||shadow (3,1)||shadow (4,1)||shadow (0,11)||shadow (1,11)||shadow (2,11)||shadow (3,11)||shadow (4,11)||shadow (0,7)||shadow (1,7)||shadow (2,7)||shadow (3,7)||shadow (4,7)||shadow(0, 13) ||shadow(2, 13) ||shadow(3, 13) ||shadow(4, 13)
#define globalShadow2() shadow (0,16)||shadow (1,16)||shadow (2,16)||shadow (3,16)||shadow (4,16)|| i == 1 && j == 14||shadow (1,18)||shadow (3,18)||shadow (0,19)||shadow (2,19)||shadow (4,19)||shadow (0,24)||shadow (1,24)||shadow (2,24)||shadow (3,25)||shadow (4,25)
#define globalShadow3() shadow (0,29)|| shadow (1,29)|| shadow (2,29)|| shadow (3,29)|| shadow (4,29)|| shadow (0,33)|| shadow (1,33)|| shadow (2,33)|| shadow (3,33)|| shadow (4,33)|| shadow (0,35)|| shadow (1,35)|| shadow (4,35)|| shadow (2,36)|| shadow (1,37)|| shadow (3,37)|| shadow (0,38)|| shadow (4,38)
int Print() {
	int x = 0;
	char pixel = 176;
	char print[5][39];
	red();

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 39; j++)
		{
			print[i][j] = ' ';
		}

	}
	allActions();
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 39; j++)
		{
			if (globalShadow() || globalShadow2() || globalShadow3())
			{

				led();

				cout << char(176);
				resetcolor();

			}
			else {
				red();
				cout << print[i][j];
				resetcolor();
			}


		}
		cout << endl;
	}
	setColor(94);
	cout << "\t\t\t\t(c)Wizard\n\n";
	resetcolor();
	system("pause");
	return 0;
}