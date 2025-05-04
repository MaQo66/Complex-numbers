#include "Komplex.hpp"
#include <iostream>
#include <fstream>

Komplex::Komplex(size_t n) :N(n), vector(n)
{
}

size_t Komplex::size() const
{
	return N;
}

ComplexZahl& Komplex::at(int i)
{
		return vector.at(i);
}

Komplex Komplex::operator+(Komplex& k)
{
	Komplex result(N);
	for (size_t i = 0; i < N; ++i)
	{
		result.at(i) = at(i) + k.at(i);
	}
	return result;
}

void Komplex::fill()
{
	ComplexZahl c;
	for (size_t i = 0; i < N; ++i)
	{
		std::cin >> c;
		at(i) = c;
	}
	std::cout << "Der Vektor wurde gefuellt!" << std::endl;
}

void Komplex::print()
{
	std::cout <<"[";
	for (size_t i = 0; i < N; ++i)
	{
		std::cout << at(i);
		if (i!=N-1)
		{
			std::cout << ",";
		}
	}
	std::cout << "]" << std::endl;
}

