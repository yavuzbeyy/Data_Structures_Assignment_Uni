/** 
* @file ArrayList class dosyasi , olusturulan Arraylist nesnesi icin metodlari ve degiskenleri barindiriyor.
* @description Arraylist.cpp dosyasinin header dosyasi
* @course 1.Ogretim , B grubu
* @assignment 1.Odev
* @date 02.08.2022
* @author Yavuz Selim SAHİN
*/

#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP


class Arraylist{
public:
	
	Arraylist();
	~Arraylist();
	
	char *items;
    
	int size() const;
    
	bool isEmpty() const;
    
	char elementAt(int i) ;
    
	void removeIndex(int i);
    void putAt(int ,char);
    void reserveArr();
	void add( char item);
	void insert(int i, char item);
    void reserve(int);
    
private:
    int length;
    int capacity;

};


#endif 

