/** 
* @file recursive.cpp
* @description Main fonksiyondan alinan number 1 ile 10 arasinda ise bu kod calisir ve normal faktoriyel hesabini recursive sekilde yapar.
* @course 1. Ogretim - B Grubu
* @assignment 1. Odev
* @date 06.08.2022
* @author Yavuz Selim SAHIN
*/

#include <iostream>

int recursive(int x) {
	if(x == 0 || x ==1 ) return 1;
	if(x>1){
	return x*recursive(x-1);
	}
	return 0;
}
