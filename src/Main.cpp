#include "Car1.cpp"
#include "SUV.cpp"
#include<iostream>
int main()
{
    Car car1("Opel","red",2015,2000);
    car1.getName();
    car1.getWheels();
    car1.setPrice(2500);
    car1.getPrice();
    Car car2("Dacia","blue",2020,1500);
    Car car3(car2);
    car3.getPrice();
    Car car4("Volvo","black",2021,3000);
    car3 = car4;
    car3.getName();
    car3.getPrice();

    Car1 car5("Toyota","green",2018,2500);
    //car5 = car4; //used this to check that if I call copy and assignment operators I get an error
	
    Car a("Toyota","green",2021,3000);
	Car b("Mercedes","red",2020,3500);
	Car c("Lada","blue",2019,4000);
	a+=b;
	a.getPrice();
	a=b=c;//item 10
	a.getName();
	b.getName();
	c.getName();
	a=a=a;//item 11
	SUV d("Toyota","green",2018,2500,true);
	SUV e("Toyota Yaris","red",2008,3000,true);
	d.setWheels(6);
	e=d;//copy assignment operator
	std::cout<<std::endl<<"On object e: "<<std::endl;
	e.getWheels();
	e.getName();//it is Toyota Yaris because in the base class the copy assignement operator does not set the name
	SUV f=d;//copy constructor
	std::cout<<std::endl<<"On object f: "<<std::endl;
	f.getWheels();
	f.getName();//item 12
}
