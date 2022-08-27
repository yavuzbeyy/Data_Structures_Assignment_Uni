
/** 
* @file calculator header dosyasi
* @description calculator kaynak dosyasinin baslik dosyasidir. LongNumber classini barindirir.
* @course 1.Ogretim , B grubu
* @assignment 1.Odev
* @date 03.08.2022
* @author Yavuz Selim SAHİN
*/

#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP
#define CHARTOINT 48   
#define INTTOCHAR 48

#include <iostream>
#include <fstream>
#include "Arraylist.hpp"


using namespace std;
class LongNumber{
    
public:
    
	LongNumber();
    LongNumber(string number);
    LongNumber(int,string);
    
    LongNumber* operator *=(LongNumber&);//iki LongNumberi odevde belirtildigi gibi carpar
    LongNumber operator +(LongNumber  &otherNum);//iki LongNumberi toplar
    
    Arraylist *arrayList;
    ~LongNumber();
	
private:
    friend ofstream& operator<<(ofstream& myfile,LongNumber& right);//dosyaya yazma fonksiyonu

};


#endif

