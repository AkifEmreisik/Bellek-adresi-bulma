#include<iostream>

int main(){
	int a=10;
	std::cout<<a<<std::endl;
	std::cout<<&a<<std::endl; //a nın bellek adresini yazar
	int* ptr=&a; //int yanına yıldız koyduk bunun manası bellek adresi olarak int tut yani bellek adresini tutar a nın &a olmak şartıyla 
	std::cout<<ptr<<std::endl;
	std::cout<<&ptr<<std::endl;  // ptr a nın bellek adresini gösteriyor onun da bellek adresi a nın bellek adresini verir
	std::cout<<*ptr<<std::endl; // a nın değerini verir 
	char b='B';
	char* rtp=&b;
	std::cout<<rtp<<std::endl;
	std::cout<<*rtp;
	return 0;
}
