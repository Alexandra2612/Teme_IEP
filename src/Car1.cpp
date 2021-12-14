#include<iostream>
class Car1{
    private:
    std::string name;
    std::string colour;
    int year;
    float price;
    int wheels=4;

    public:
    Car1(const std::string& name,const std::string& colour,int year,float price) //constuctor that uses member initialization list(initialization not assignment)
    :name(name),
    colour(colour),
    year(year),
    price(price)
    {}

    ~Car1(){
        std::cout<<"The object was destroyed!"<<std::endl;
    }

    std::string getName(){
        std::cout << "Name is: "<<name<<std::endl;
        return this->name;
    }
    int getPrice(){
        std::cout << "Price is: "<<price<<std::endl;
        return this->price;
    }
    int getWheels(){
        std::cout << "Number of wheels is:"<<wheels<<std::endl;
        return this->wheels;
    }
    void setPrice(int price){
        this->price = price;
    }

    private:
    Car1(const Car1&);//if you do not need these methods then you can make them private and no one can call them
    Car1& operator=(const Car1&);
    
};