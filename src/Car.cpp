#include<iostream>
class Car{
    protected:
    std::string name;
    std::string colour;
    int year;
    float price;
    int wheels=4;
    bool isLocked=false;

    public:
    Car(const std::string& name,const std::string& colour,int year,float price) //constuctor that uses member initialization list(initialization not assignment)
    :name(name),
    colour(colour),
    year(year),
    price(price)
    {}

    Car(const Car& a_car){ //copy constructor
        this->name=a_car.name;
        this->colour=a_car.colour;
        this->year=a_car.year;
        this->price=a_car.price;
        this->wheels=a_car.wheels;
    }

    Car& operator=(const Car& a_car){ //copy assignment operator
	    if(this == &a_car)//assignment to self was attempted
		   return *this;
        this->price=a_car.price;
        this->wheels=a_car.wheels;
		return *this;
    }
	
	Car& operator+=(const Car& a_car){ //copy assignment operator
        this->price+=a_car.price;
		return *this;
    }

    ~Car(){
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
	void setWheels(int wheels){
        this->wheels=wheels;
    }
    void setPrice(int price){
        this->price = price;
    }
    void setisLocked(bool is_isnot){
      this->isLocked = is_isnot;
    }
    void askResource(){
        if(this->isLocked){
            std::cout<<"Resource is locked!"<<std::endl;
        }else{
            std::cout<<"Resource can be used :)"<<std::endl;
        }
    }
};
