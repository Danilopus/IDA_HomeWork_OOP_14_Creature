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
#include <memory>
//My own headers
#include "Service functions.h"
#include "MainMenu.h"
#include "Creature.h"



// Homework OOP 14 ----------------------------------------------------	


//Task 1 
void Tell_me_your_size(BodyPart* inner_ptr);
void Task_1(std::string name_of_task)
{
	/*
	Классы не особо богаты на методы, но для целей задания этого хватает одного
	*/
	float density = 75.0;
	BodyPartSize size = BodyPartSize::middle;
	BodyColor color = BodyColor::milkedcoffee;
	HairDensity hair = HairDensity::massive;
	float armslength = 100.0;
	float legslength = 120;
	float bodysize = 90;
	float headsize = 50;
	size_t eyes_amount = 2;
	std::string name = "Golem Gennadiy";
	Character_type type = Character_type::sailor;
	Character_race race = Character_race::orc;
	
	do
	{		
		system("cls");
		std::cout << "***\t" << name_of_task << "\n";					
	
		Creature creature_1(density, size, color, hair, armslength, legslength, bodysize, headsize, eyes_amount, name, type, race);

		std::cout << "\n\n--- Class pointer";
		std::cout << "\nCreature*->size() " << (&creature_1)->size();
		{			
			BodyPart* creature_1_ptr = &creature_1;
			BodyPart& creature_1_ref = creature_1;							
			std::unique_ptr<BodyPart> creature_1_uniqptr(new Creature(density, size, color, hair, armslength, legslength, bodysize, headsize, eyes_amount, name, type, race));
			//std::cout << "\nBodyPart - > " << creature_1_ptr->BodyPart::size();
			std::cout << "\n\n--- Base class pointer";
			std::cout << "\nBodyPart*->size() " << creature_1_ptr->size();
			std::cout << "\nBodyPart*u->size() " << creature_1_uniqptr->size();
			std::cout << "\n\n--- Base class reference";
			std::cout << "\nBodyPart&.size() " << creature_1_ref.size();
		}
		std::cout << "\n\n--- Direct parent class pointer";
		{
			Head* creature_1_ptr = &creature_1;
			std::cout << "\nHead*->size() " << creature_1_ptr->size();
		}
		{
			Body* creature_1_ptr = &creature_1;
			std::cout << "\nBody*->size() " << creature_1_ptr->size();
		}		
		{
			Arms* creature_1_ptr = &creature_1;
			std::cout << "\nArms*->size() " << creature_1_ptr->size();
		}
		{
			Legs* creature_1_ptr = &creature_1;
			std::cout << "\nLegs*->size() " << creature_1_ptr->size();
		}

		std::cout << "\n\nEsc - exit | any key to continue";
	} while (_getch() != 27);
}
void Tell_me_your_size(BodyPart* inner_ptr)
{
	//inner_ptr->size();
	std::cout << "\tfunc(" << inner_ptr->size();
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
	MainMenu.AddElement("Creature class demo");
	//MainMenu.AddElement("Creature class demo through direct parents classes");

	do 
	{		
		MainMenu.Show_menu();
		if (!MainMenu.User_Choice_Handle(_getch()))	break;
	} while (true);
	return 0;
}

