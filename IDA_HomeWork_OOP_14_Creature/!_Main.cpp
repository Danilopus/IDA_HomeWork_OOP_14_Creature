// HomeWork template project v 6.0 // 27.06.2023 //

/*

Наследование - Множественное и ромбовидное

Задание на композицию

Используя механизм множественного наследования разработайте класс “Существо”. Должны
быть классы “Конечности», «Голова», «Тело» и т.д. Все классы органов должны иметь
общий базовый класс "Орган".
Продемонстрируйте в функции main работу класса "Существо" как с методами радителе так
и общего базового класса.

*/

#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <conio.h>
//My own headers
#include "Service functions.h"
#include "MainMenu.h"



// Homework OOP 14 ----------------------------------------------------	


//Task 1 
void Task_1(std::string name_of_task)
{

	do
	{		
		system("cls");
		std::cout << "***\t" << name_of_task << "\n";					
	





		std::cout << "\n\nEsc - exit | any key to continue";
	} while (_getch() != 27);
}

//Task 2
void Task_2(std::string name_of_task)
{
	do
	{
		system("cls");
		std::cout << "***\t" << name_of_task << "\n";





		std::cout << "\n\nEsc - exit | any key to continue";
	} while (_getch() != 27);
}

//Task 3 
void Task_3() {}

//Task 4
void Task_4() {}

// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
	srand(time(NULL));
	//setlocale(LC_CTYPE, "Russian");
	//system("mode con cols=60 lines=40"); 
	Main_menu MainMenu;	
	MainMenu.AddElement("OOP Home Work 14: Multiple inheritance and the Diamond problem");	// Homework name
	MainMenu.AddElement("Creature class demo through base class interface");
	MainMenu.AddElement("Creature class demo through direct parents classes");

	do 
	{		
		MainMenu.Show_menu();
		if (!MainMenu.User_Choice_Handle(_getch()))	break;
	} while (true);
	return 0;
}

