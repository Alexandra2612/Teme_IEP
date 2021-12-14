#include <mutex>
#include "Car.cpp"
void lock(Car &c){
  std::cout<<"Locking the resource.."<<std::endl;
  c.setisLocked(true);
}
void unlock(Car &c){
  std::cout<<"Unlocking the resource.."<<std::endl;
  c.setisLocked(false);
}
class Lock {
private: 
Car &lockPtr;  
public: 
Lock(Car &ptr) 
: lockPtr(ptr) 
{ lock(lockPtr); } // acquire resource 
~Lock() { 
unlock(lockPtr); } // release resource 
};
