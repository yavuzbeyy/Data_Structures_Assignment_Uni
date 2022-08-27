/** 
* @file factorial kaynak dosyasi
* @description Faktoriyel ve sayilarla ilgili islemleri barindirir.
* @course 1.Ogretim , B grubu
* @assignment 1.Odev
* @date 02.08.2022
* @author Yavuz Selim SAHIN
*/


#include "factorial.hpp"

Factorial::Factorial(int num) {
    calculateFactoriyel(num);
}

LongNumber * Factorial::getResult() {
    return result;
}

void Factorial::calculateFactoriyel(int num) {
 
   
    LongNumber *factorial = new LongNumber(to_string(num));
	
	factorial->arrayList->reserve(num);  // kapasite arttirma islemi
   
   LongNumber *eskiDeger;
	
	
	        for (int i = num-1; i >=1 ; --i) {
            
			LongNumber * geciciDeger = new LongNumber(to_string(i)); //bir sonraki sayi 
            eskiDeger = factorial;
            factorial =*eskiDeger*=*geciciDeger;
            
			delete eskiDeger; //eski degerin silinmesi
			delete geciciDeger;
        }
	
	    int bastakiSifirSayaci = 0; 
	
	    for (int sayac = 0; sayac < factorial->arrayList->size(); sayac++) { //islem sonucunun basindaki 0 sayisini bulur

        if (factorial->arrayList->elementAt(sayac) != '0') {
            bastakiSifirSayaci = sayac;
            break;
        }

    }
   
		while (bastakiSifirSayaci > 0) {//elde edilen sonucun basindaki sifirlari temizler kullanılmassa en son yazdırılan sonuc 0000ile basliyor.
        factorial->arrayList->removeIndex(0);
        bastakiSifirSayaci--;
    } 


    result = factorial;
}

