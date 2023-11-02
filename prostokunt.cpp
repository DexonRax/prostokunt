#include "prostokunt.h"
#include<cmath>

Prostokunt::ObliczPole(unsigned int a,unsigned int b){
	pole = a*b;
}

Prostokunt::ObliczObwod(unsigned int a,unsigned int b){
	obw = a+a+b+b;
}

Prostokunt::ObliczPrzek(unsigned int a,unsigned int b){
	c = sqrt(pow(a,2.0)+pow(b,2.0));
}