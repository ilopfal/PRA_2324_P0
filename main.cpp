#include<iostream>
#include "BrazoRobotico.h"
#include "BrazoRobotico.cpp"

int main(){
	BrazoRobotico Brazo;
	Brazo.mover(10.0,20.0,5.0);
	Brazo.coger();
	return 0;
}
