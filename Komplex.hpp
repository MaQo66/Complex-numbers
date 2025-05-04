#pragma once
#include"ComplexZahl.hpp"
#include<vector>
class Komplex
{
private:
	size_t N;
	std::vector<ComplexZahl> vector;
public:
	/**
	* @brief Konstructor erzeugt ein Vektor der laenge N 
	* @param n: Das vector hat die laenge n
	*/
	Komplex(size_t n);
	/**
	* @return: die Laenge des Vektor
	*/
	size_t size()const;
	/**
	* @brief Die Methode sucht fuer die Komplexzahl in der Stelle i
	* @param i: die Stelle der Komplexzahl in dem Vektor
	* @return: refernz fuer die Komplexzahl in der Stelle i
	*/
	ComplexZahl& at(int i);
	/**
	* (operator overloading)
	* brief opertator fuer addition von zwei Vektoren
	* @param k: ein Refernz von einem Vektor die mit dem Caller addiert wird
	* @return: Ein Vektor, das die Summe von der zwei Vektoren enthaelt
	*/
	Komplex operator+(Komplex& k);
	/**
	* @brief eine Methode die einem Vektor ausfuellt
	* details:streamt dass das Vektor gefuellt wurde
	*/
	void fill();
	/**
	* @brief eine Methode druckt den Vektor aus
	*/
	void print();
};

