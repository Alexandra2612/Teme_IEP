#include "Car.cpp"
#include "Car1.cpp"
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

}