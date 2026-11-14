#include <iostream>
#include <random>

class UintPerson {
public:
    void xren(){
        std::cout << "xren";
    }
    void print() const 
    {
        std::cout << "Id: " << id << "\tName: " << name << std::endl;
    }
private:
    unsigned id = 0;
    std::string name = "name";
};
 

  
int main()
{
    UintPerson tom;
    tom.xren();    // Id: 123456      Name: Tom
    tom.print();
}
