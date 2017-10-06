// Chapter1Exercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;



int main()
{
	SetConsoleTitle(_T("Chapter 1 Exercises"));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int choice;
	// 'do' Selector Loop
	do {
		cout << "\t\tChapter 1 Exercises \n\nPlease make a selection: " << endl;
		cout << "\n1: Legal Var Names\n";
		cout << "2: Code Snippet Display\n";
		cout << "3: Game Score Program\n";
		cout << "4: Quit\n";
		cout << "Selection: ";
		cin >> choice;
		system("CLS");

		//Switch
		switch (choice) {
		case 1:
			while (true) {
				cout << "\nChapter 1.1: Legal Var Names \n";
				SetConsoleTextAttribute(h, 0x20);
				cout << "\nUse 'Enter' to Progress\n";
				SetConsoleTextAttribute(h, 0x0F);
				cout << "\nGood Choices: \n";
				cin.get();
				cin.ignore();
				SetConsoleTextAttribute(h, 0x02);
				cout << "1) kPoints: C-Case and descriptive enough\n\n2) shotsF: C-Case and descriptive\n\n3) alien_ship: No use of uppercase and just an underscroll, easy to remember\n";
				SetConsoleTextAttribute(h, 0x0F);
				cin.ignore();
				cout << "\nBad Choices: \n";
				SetConsoleTextAttribute(h, 0x04);
				cin.ignore();
				cout << "4) AlienSkilL: Variables are case-sensitive. Having a weird case structure\n increases PEBKAC issues.\n\n";
				cout << "5) pointsgainedfromalienkills: Having a long name for a variable increases\n PEBKAC issues.\n\n";
				cout << "6) lls1l: At least give your variables some sort of comprehensible name\n\n";
				SetConsoleTextAttribute(h, 0x0F);
				cout << "\n\nExit to menu pressing enter\n";
				cin.ignore();
				system("CLS");
				break;
				}break;
		case 2:
			while (true) {
				cout << "\t\t\tCode Snippet Display";
				SetConsoleTextAttribute(h, 0x04);
				cout << "\n\t\t     Press 'Enter' to progress!\n";
				cin.get();
				cin.ignore();
				SetConsoleTextAttribute(h, 0x0F);
				cout << "\nI will write each code and explain the differences\n\n";
				cout << "First code in action: \n";
				cout << "Seven divided by three is 7 / 3 (" << 7 / 3 << ")";
				cin.get();
				SetConsoleTextAttribute(h, 0x04);
				cout << "This code is wrong. 7/3 is not 2 \n7 doesnt get divided into 3 without precision";
				SetConsoleTextAttribute(h, 0x0F);
				cin.get();
				cout << "\nSecond code in action: \n";
				cout << "Seven divided by three is 7.0 / 3 (" << 7.0 / 3 << ")";
				cin.get();
				SetConsoleTextAttribute(h, 0x02);
				cout << "This code works fine.\nBecause we used 7.0, we gave the '7' precision by adding '.0'";
				cin.get();
				SetConsoleTextAttribute(h, 0x0F);
				cout << "\nThird code in action: \n";
				cout << "Seven divided by three is 7.0 / 3.0 (" << 7.0 / 3.0 << ")";
				cin.get();
				SetConsoleTextAttribute(h, 0x02);
				cout << "This code works fine.\nBecause we used X.0, we gave both numbers precision by adding '.0'\n";
				SetConsoleTextAttribute(h, 0x20);
				cout << "\n Press 'Enter' to return to main menu";
				SetConsoleTextAttribute(h, 0x0F);
				cin.ignore();
				system("CLS");
				break;
			}break;
		case 3:
			typedef float shorti;
			shorti soc;
			shorti base;
			shorti foot;
			while (true) {
				SetConsoleTextAttribute(h, 0x04);
				cout << "\n\t\tGame Score Program by Morgoth" << endl;
				SetConsoleTextAttribute(h, 0x0F);
				cout << "\n\n\t\tWelcome to 'The Score'" << endl;
				cout << "\nPlease rate the following sports on a scale from 1-10: " << endl;
				cout << "\nSoccor: ";
				cin >> soc;
				cout << "\nBaseball: ";
				cin >> base;
				cout << "\nFootball: ";
				cin >> foot;
				system("CLS");
				shorti socP = soc * 10;
				shorti baseP = base * 6;
				shorti footP = foot * 12;
				shorti tots = (socP + baseP + footP);
				if (soc > 10 || base > 10 || foot > 10) {
					SetConsoleTextAttribute(h, 0x04);
					cout << "\nYeah yeah...We all like to think our sport is the greatest.\nBut Please...just count to 10. No higher." << endl;
					SetConsoleTextAttribute(h, 0x02);
					cout << "\nResponse: Okay.. I'll stop being a kindergardener.. \nand I'll pick a real number between 1-10..(press enter)";
					cin.get();
					cin.ignore();
					SetConsoleTextAttribute(h, 0x0F);
					system("CLS");
				}
				else {
					cout << "\nOur patented Game Score Progam by Morgoth has meticulously generated \nexact sports stats based on the information you provided: ";
					cout << "\n\nYour Soccor Score: " << socP << endl;
					cout << "\nYour Baseball Score: " << baseP << endl;
					cout << "\nYour Football Score: " << footP << endl;
					SetConsoleTextAttribute(h, 0x06);
					cout << "\n\nYour Total Sports Score: ";
					SetConsoleTextAttribute(h, 0x02);
					cout << tots / 3 << endl;
					SetConsoleTextAttribute(h, 0x0F);
					cout << "\nPress 'Enter' to return to menu";
					cin.get();
					cin.ignore();
					system("CLS");
					break;
				}
			}
		}
	} while (choice != 4);
	system("CLS");
	cout << "Thank you for using Morgoth's Homework Hand-In Executable\n";
	system("pause");
    return 0;
}

