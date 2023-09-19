#include "BrazoRobotico.h"
#include <iostream>


BrazoRobotico::BrazoRobotico(double x, double y, double z,bool sujecion){
	this->x=x;
	this->y=y;
	this->z=z;
	sujecion=false;
}
    double BrazoRobotico::getx(){
	    return x;
    }
    double BrazoRobotico::gety(){
	    return y;
    }
    double BrazoRobotico::getz(){
	    return z;
    }
    bool BrazoRobotico::haysujecion(){
	    return sujecion;
    }
    void coger(){
	    sujecion=true;
    }
    void soltar(){
	    sujecion=false;
    }
    void mover(double x_nueva, double y_nueva, double z_nueva){
	    x+=x_nueva;
	    y+=y_nueva;
	    z+=z_nueva;
    }
};
