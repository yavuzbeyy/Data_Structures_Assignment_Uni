/** 
* @file Faktoriyel baslik dosyasi
* @description Factorial Header dosyasi , class ve içindeki metodlari barindirir.
* @course 1.Ogretim , B grubu
* @assignment 1.Odev
* @date 02.08.2022
* @author Yavuz Selim SAHİN
*/

using namespace std;

#include "Calculator.hpp"

#ifndef FACTORIAL_HPP
#define FACTORIAL_HPP



class Factorial{
	
public:

    Factorial(int);
    LongNumber* getResult();

private:

    void calculateFactoriyel(int num);
    LongNumber * result;
	
	
};


#endif 

