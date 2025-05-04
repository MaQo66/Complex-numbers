// aufgabe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include "ComplexZahl.hpp"
#include "Komplex.hpp"

int main()
{
	std::ofstream myfile("TEST.txt",std::ios::out);
	std::cout << "!die Zahl soll so (x y) gegeben werden!" << std::endl;
	std::cout << "***************************************************************************" << std::endl;
	std::cout << "Geben Sie bitte die zwei Komplexezahlen, die Sie ihre Summe berchnen wollen" << std::endl;
	std::cout << "***************************************************************************" << std::endl;
	ComplexZahl x,y;
	std::cin >> x;
	std::cin >> y;
	std::cout << x << "+" << y << "=" << x + y << std::endl;
	std::cout << "****************************************************************************" << std::endl;
	std::cout << "Geben Sie bitte die zwei Komplexezahlen, die Sie ihr Produkt berchnen wollen" << std::endl;
	std::cout << "****************************************************************************" << std::endl;
	std::cin >> x;
	std::cin >> y;
	std::cout << x << "*" << y << "=" << x * y << std::endl;
	std::cout << "***********************************************************************************" << std::endl;
	std::cout << "Geben Sie bitte den Skalar und die Komplexzahl, die Sie ihr Produkt berchnen Wollen" << std::endl;
	std::cout << "***********************************************************************************" << std::endl;
	std::cout << "die Komplexzahl:";
	std::cin >> x;
	std::cout << x << std::endl;
	std::cout << "der Skalar:";
	double s;
	std::cin >> s;
	std::cout << s << std::endl;
	std::cout << y << "*" << s << "=" << x * s << std::endl;
	std::cout << "************************************************************" << std::endl;
	std::cout << "Geben sie eine Komplexezahl um die in Polarform darzustellen" << std::endl;
	std::cout << "************************************************************" << std::endl;
	ComplexZahl c;
	std::cin.ignore(1, '\n');
	std::cin >> c;
	std::cout << c << "in porlarform ";
	c.polarform();
	std::cout << "***************************************************************************" << std::endl;
	std::cout << "***************************************************************************" << std::endl;
	std::cout << "Geben sie bitte die laenge der Vektoren, die Sie berchnen wollen" << std::endl;
	int n;
	std::cin >> n;
	std::cin.ignore(1, '\n');
	Komplex v1(n);
	Komplex v2(n);
	std::cout << "Fuellen Sie bitte den ersten Vektor der Laenge " <<v1.size()<< std::endl;
	v1.fill();
	std::cout << "***************************************************************************" << std::endl;
	std::cout << "Fuellen Sie bitte den zweiten Vektor der Laenge " <<v2.size()<< std::endl;
	std::cout << "***************************************************************************" << std::endl;
	v2.fill();
	v1.print();
	std::cout << "+" << std::endl;
	v2.print();
	std::cout << "=" << std::endl;
	Komplex res = v1 + v2;
	res.print();



	

	
	

}
