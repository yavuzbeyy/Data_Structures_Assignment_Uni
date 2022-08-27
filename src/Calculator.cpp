/** 
* @file calculator kaynak dosyasi
* @description hesaplama islemlerini barindirir.
* @course 1.Ogretim , B grubu
* @assignment 1.Odev
* @date 03.08.2022
* @author Yavuz Selim SAHIN
*/

#include "Calculator.hpp"


LongNumber::LongNumber(string number) {
    arrayList = new Arraylist();

    for (int i = 0; i < number.length(); i++) {
        arrayList->add(number[i]);
    }
}

LongNumber::LongNumber(int times, string number) {
	
    arrayList = new Arraylist();

    for (int i = 0; i < times; i++) {
        for (int j = 0; j < number.length(); j++) {
            arrayList->add(number[j]);
        }

    }
}



LongNumber* LongNumber::operator*=(LongNumber& num1) {
    //odeve gore carpma islemi

    int length = num1.arrayList->size();
    int length2 = this->arrayList->size();


    //sonuc degiskeninin tanimlasi
    LongNumber *result = new LongNumber(length + length2, "0");

    if (length == 0 || length2 == 0) {//bos sayi gelirse sifir dondurur
        delete result;
        result = new LongNumber("0");
        return result;
    }

    //sayilarin kaydirilmasi icin degiskenler
    int d1 = 0;
    int d2 = 0;

    for (int i = length - 1; i >= 0; i--) {
        int elde = 0; 
        int number1 = num1.arrayList->elementAt(i) - CHARTOINT; //sayinin basmaginin n1 e atanmasi

        d2 = 0;

        for (int j = length2 - 1; j >= 0; j--) {

            int number2 = this->arrayList->elementAt(j) - CHARTOINT; //sayinin basamagi n1 e atanmasi

            int toplam = (number1 * number2) + (result->arrayList->elementAt(d1 + d2) - CHARTOINT) + elde; //eldeli sekilde basamaklarin toplanmasi

            elde = toplam / 10; 

            result->arrayList->putAt(d1 + d2, (toplam % 10) + INTTOCHAR); //degerin sonucun icine konmasi
			
            d2++; //diger basamaga gecer

        }
        //elde 0 degilse sayiya ekleme
        if (elde > 0) {
            int num = result->arrayList->elementAt(d1 + d2) - CHARTOINT;
            result->arrayList->putAt(d1 + d2, (num + elde) + CHARTOINT);
        }
    }
    result->arrayList->reserveArr();
    return result;
}

LongNumber::~LongNumber() {

    if (this->arrayList != NULL) {
        delete this->arrayList;
    }
}

ofstream& operator<<(ofstream& myfile, LongNumber& right) {//dosyaya yazma fonksiyonu

    for (int i = 0; i < right.arrayList->size(); i++) {
        myfile << right.arrayList->elementAt(i);

    }
    return myfile;
}
