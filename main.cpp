#include <iostream>
#include "prostokunt.h"


int main() {
	
	Prostokunt Obliczarka;
	
	std::cout<<"podaj bok a: "<<std::endl;
	std::cin>>Obliczarka.a;
	std::cout<<"podaj bok b: "<<std::endl;
	std::cin>>Obliczarka.b;
	
	
	std::cout<<"podaj bok b:"<<std::endl;
	Obliczarka.ObliczPole(Obliczarka.a,Obliczarka.b);
	Obliczarka.ObliczObwod(Obliczarka.a,Obliczarka.b);
	Obliczarka.ObliczPrzek(Obliczarka.a,Obliczarka.b);
	
	std::cout<<"pole: "<<Obliczarka.pole<<std::endl;
	std::cout<<"obwod: "<<Obliczarka.obw<<std::endl;
	std::cout<<"przekatna: "<<Obliczarka.c<<std::endl;
	
	
	Prostokunt Obliczarka2 = Obliczarka;
	std::cout<<"skopiowane pole: "<<std::endl<<Obliczarka2.pole<<std::endl;
	
	return 0;
}

                     