#pragma once
#include <iostream>
class ComplexZahl
{
private:
	double real;
	double imag;
public:
	/**
	* (operator overloading)
	* @param in: Die Eingabequelle
	* @param c: Die Komplexzahl, in die die Daten eingelesen werden
	* @return: refernz auf die Eingabequelle
	*/
	friend std::istream& operator>>(std::istream& in, ComplexZahl& c);
	/**
	* (operator overloading)
	* @param o: Die Ausgabequelle
	* @param c: Die Zahl die ausgegeben wird
	* @return: referenz auf die Ausgabequelle
	*/
	friend std::ostream& operator<<(std::ostream& o, const ComplexZahl& c);
	/**
	* polarform: @brief: Stellt die Komplexzahl in Winkel und Beitrag dar 
	*/
	void polarform();
	/**
	* (operator overloading)
	* operator+:@brief: addiert die Komplexzahl(caller) mit der anderen komplexzahl(input)
	* @param c:Die Komplexzahl, die addiert wird
	* @return: Eine Komplexzahl, die die Summe enthaelt
	*/
	ComplexZahl operator +(ComplexZahl& c);
	/**
	* (operator overloading)
	* operator+:@brief: multipziert die Komplexzahl(caller) mit einem Skalar
	* @param x: Der Skalr, mit dem Die Zahl multipziert wird
	* @return: Eine Komplexzahl, die das Produkt enthaelt 
	*/
	ComplexZahl operator *(double x);
	/**
	* (operator overloading)
	* operator+:@brief: multipziert die Komplexzahl(caller) mit der anderen komplexzahl(input)
	* @param c:Die Komplexzahl, die multipziert wird(input)
	* @return: Eine Komplexzahl, die das Produkt enthaelt
	*/
	ComplexZahl operator *(ComplexZahl& c);
    /**
	* Konstruktor mit bestimmeten Real und Imaginaerteil
	* @param r: der Realteil
	* @param i: die Imigaenarteil
	*/
	ComplexZahl(double r, double i);
	/**
	* default Konstruktor gibt den Realteil und den Imaginerteil der Wert null
	*/
	ComplexZahl();
	~ComplexZahl();
};

