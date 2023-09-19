#include<iostream>
#include "BrazoRobotico.h"


int main(){
	BrazoRobotico Brazo(0.0,0.0,0.0,false);
	Brazo.mover(10.0,20.0,5.0);
	Brazo.coger();
	return 0;
}
