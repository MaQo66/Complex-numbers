#include "ComplexZahl.hpp"
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>


void ComplexZahl::polarform()
{
    double range = sqrt(pow(real, 2) + pow(imag, 2));
    double a = acos(real / range);
    if (imag<0)//pruefen ob die komplex zahl in der dritten oder vierten quadrat befindet.
    {
        std::cout << "Betrag=" << range << ",Winkel=" << 2*3.141592654-a << std::endl;
    }
    else
    {
        std::cout << "Betrag=" << range << ",Winkel=" << a << std::endl;

    }
}

ComplexZahl ComplexZahl::operator+(ComplexZahl& c)
{
    double r = real + c.real;
    double i = imag + c.imag;
    ComplexZahl result(r,i);
    return result;
}

ComplexZahl ComplexZahl::operator*(double x)
{
    double r = x * real;
    double i = x * imag;
    ComplexZahl result(r, i);
    return result;
}

ComplexZahl ComplexZahl::operator*(ComplexZahl& c)
{
    ComplexZahl result;
    if (real==c.real&&imag==-c.imag)//Pruefen, ob die zahlen komplement zu ein ander sind.
    {
       result.real = real * c.real;
       result.imag = 0;
        return result;
    }
    else
    {
        result.real = real * c.real - imag * c.imag;
        result.imag = real * c.imag + imag * c.real;
        return result;
    }
}

ComplexZahl::ComplexZahl(double r,double i):real(r),imag(i)
{
}

ComplexZahl::ComplexZahl():real(0),imag(0)
{
}

ComplexZahl::~ComplexZahl()
{
}

std::istream& operator>>(std::istream& in, ComplexZahl& c)
{
    char ch1, ch2, ch3;
    std::string str;
    getline(in, str);
    try
    {
    ch1 = str[0];//sollte die erste klammer
    long unsigned int i=1;
    std::string num1="";
    int punkt = 0;
    for (; i < str.size() - 1 && str[i] != ' '; ++i)//suchen fuer das komma
    {
        if (str[i] == '.')
        {
            punkt +=1;//zaehlt wie viele Punkte es gibt
        }
        if ((str[i]<'0'|| str[i]>'9')&& punkt > 1)//wenn keine zahlen und mehr als ein punkt dann 'throw'
        {
        throw "Sie muessen die Zahl in dieser Weise eingeben:(real imag)";
        }
        num1+= str[i];
    }
    if (num1=="")
    {
        throw "Sie muessen die Zahl in dieser Weise eingeben:(real imag)";
    }
    c.real = stod(num1);//wechsel bishierger Teil(sollte wert von realteil sein) von String zu doubel
    ch2 = str[i];
    i++;
    std::string num2="";
    punkt = 0;
    for (;i < str.size() - 1; ++i)//nach dem komma suchen wir feur die imag Zahl
    {
        if (str[i]=='.')
        {
            punkt += 1;
        }
        if ((str[i] < '0' || str[i]>'9')&& punkt>1)
        {
            throw "Sie muessen die Zahl in dieser Weise eingeben:(real imag)";
        }
        num2 += str[i];
    }
    if (num2 == "")
    {
        throw "Sie muessen die Zahl in dieser Weise eingeben:(real imag)";
    }
    c.imag = stod(num2);//Wechseln den Teil nach dem komma zur double(sollte imaginaereteil sein)
    ch3 = str[str.size() - 1];

        if (ch1 != '(' || ch2 != ' ' || ch3 != ')')
        {
            throw "Sie muessen die Zahl in dieser Weise eingeben:(real imag)";
        }
        else
        {
            return in;
        }
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
        std::cin >> c;
    }
    return in;
}


std::ostream& operator<<(std::ostream& o, const ComplexZahl& c)
{
    o << "(" << c.real << " " << c.imag << ")";
    return o;
}

