#include<iostream>
#include "Car.cpp"
class SUV:public Car{
   private:
    bool highCapicityEngine;
   public:

    SUV (const std::string& name,const std::string& colour,int year,float price, bool hce)
    :Car(name, colour, year, price),
    highCapicityEngine(hce)
    {}

    SUV(const SUV& hce) //copy constructor
    :Car(hce),
    highCapicityEngine(hce.highCapicityEngine)
    {}
	
	SUV& operator=(const SUV& hce){ //copy assignment operator
	    if(this == &hce)//assignment to self was attempted
		   return *this;
	Car::operator=(hce);
        this->highCapicityEngine=hce.highCapicityEngine;
	return *this;
    }
	int getHighCapacityEngine(){
        std::cout << "High capacity engine: "<<highCapicityEngine<<std::endl;
        return this->highCapicityEngine;
    }
};
