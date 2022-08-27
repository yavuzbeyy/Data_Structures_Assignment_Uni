/** 
* @file ArrayList kaynak dosyasi ,
* @description Olusturulan Arraylist nesnesi icin metodlarin kodlarini barindiriyor.
* @course 1.Ogretim , B grubu
* @assignment 1.Odev
* @date 02.08.2022
* @author Yavuz Selim SAHİN
*/


#include "Arraylist.hpp"
#include <iostream>

Arraylist::Arraylist() {
	

    length = 0;
    capacity = 0;
    items = 0;

}

char Arraylist::elementAt(int i) {
    if (i < 0 || i >= length) {
        throw "indeksOf";
    }
    return items[i];
}

bool Arraylist::isEmpty() const //dizi bos mu 
{
    return size() == 0;
}

int Arraylist::size() const //dizini boyutunu verir
{
    return length;
}

void Arraylist::reserve(int newCapacity) {
	
    char *tempDizi = new char[newCapacity]; 
	
    for (int i = 0; i < length; i++) { //items icindeki veri temp dizisine kopyalanir
        tempDizi[i] = items[i];
    }
	
    if (items != 0) { 
        delete[] items;
    }
	
    items = tempDizi; 
    capacity = newCapacity; 



}

void Arraylist::add(char item) { //dizinin sonuna ekleme yapar

    insert(length, item);
}


void Arraylist::insert(int i, char item) {//dizi icine eklme yapar

    if (i < 0 || i > length) throw "hata";
    if (length >= capacity) // kapasiteden buyukse boyutu arttir.

        if (capacity) { 
            reserve(5000 * capacity);
        } else {
            reserve(1000);
        }
    for (int j = length - 1; j >= i; j--) {
        items[j + 1] = items[j]; 
    }
    items[i] = item;
    length++;
}


void Arraylist::removeIndex(int i) { //remove islemi
    if (i < 0 || i >= length) {
        throw "indeksOf";
    }

    for (int j = i + 1; j < length; j++) items[j - 1] = items[j];
    length--;
}


void Arraylist::reserveArr() { 
    int temporary;
    for (int i = 0; i < length / 2; i++) {
        temporary = items[i];
        items[i] = items[length - i - 1];
        items[length - i - 1] = temporary;
    }

}

void Arraylist::putAt(int i, char item) {
    if (items == NULL) {
        throw "error";
    }
    if (i < 0 || i > length) throw "error";

    items[i] = item;
}

Arraylist::~Arraylist() {

    if (items != NULL) {

        delete[] items;
    }
}


