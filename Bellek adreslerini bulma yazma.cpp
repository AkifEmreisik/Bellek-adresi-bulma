#include<iostream>

int main(){
	int a=10;
	std::cout<<a<<std::endl;
	std::cout<<&a<<std::endl; //a n�n bellek adresini yazar
	int* ptr=&a; //int yan�na y�ld�z koyduk bunun manas� bellek adresi olarak int tut yani bellek adresini tutar a n�n &a olmak �art�yla 
	std::cout<<ptr<<std::endl;
	std::cout<<&ptr<<std::endl;  // ptr a n�n bellek adresini g�steriyor onun da bellek adresi a n�n bellek adresini verir
	std::cout<<*ptr<<std::endl; // a n�n de�erini verir 
	char b='B';
	char* rtp=&b;
	std::cout<<rtp<<std::endl;
	std::cout<<*rtp;
	return 0;
}
