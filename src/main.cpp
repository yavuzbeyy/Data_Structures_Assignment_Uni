/** 
* @file main dosyasi
* @description Main metodu barindirir program buradan baslatilir.
* @course 1.Ogretim , B grubu
* @assignment 1.Odev
* @date 02.08.2022
* @author Yavuz Selim SAHIN
*/

#include <cstdlib>
#include <iostream>
#include "Arraylist.hpp"
#include "Calculator.hpp"
#include "factorial.hpp"
#include "recursive.cpp"

using namespace std;


/*int recursive(int x) {
	if(x>1){
	return x*recursive(x-1);
	}
}*/

int main() {

    int number;

    
    //Faktoriyeli hesaplanacak sayısının alınmasi
    cout << "Faktoriyelini hesaplamak istediginiz sayiyi giriniz. :\n";
    cin>>number;
	
	
	// Eger negatif sayi girisi olursa hesaplamaya calismayacak sadece pozitif tam sayilari hesaplayacak
	if(number <0) cout<< "Lutfen sifirdan buyuk bir deger giriniz.";
	
	
	// Sayi 11 den kucukse basamak kaydirma olmayacak dolayisiyla normal bir faktoriyel hesabi yaptim. recursive fonksiyon ile
	else if (number<11 && number >=0){
		
		//cout << recursive(number);
		ofstream MyFile("Sonuc.txt"); 
		MyFile << recursive(number);
		
	}
	
	// Sayi 10 dan buyukse basamak kaydirmasiz islem yapmasi gereklidir. 11*10 dan baslar.
	else if (number > 10) { 
	
	Factorial * factoriyel = new Factorial(number);
	
	
	//TXT işlemleri
	ofstream MyFile("Sonuc.txt"); 
    MyFile << *factoriyel->getResult(); 

	delete factoriyel;
		
	}

    return 0;
}

