#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Classes and objects
//class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

class myClass {     //Class
    public:         //Access specifier
    int myAge;      //Attribute
    string myName;  //Attribute

    //Class Methods - 2 types
    //Inside
    // Method/function defined inside the class
    void methodOne(){
        cout << "Method from inside class" << '\n';
    }
    //Outside
    void methodTwo();
}; 

class myClass2 {
    //Constructor
    //a special method that is automatically called when an object of a class is created.
    public:
    myClass2(){
        cout << "I am from a constructor" << '\n';
    }
};

// Method/function definition outside the class
// done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:
void myClass::methodTwo(){
    cout << "Method that is defined outside class" << '\n';
};

class myClassThree {
    public: 
    myClassThree(){
        cout << "Monster" << '\n';
    }
};

int main(){ 

    //Creating object from class
    myClass myObject;
    //Access attributes and set values
    myObject.myAge = 20;
    myObject.myName = "Kai";
    cout << myObject.myName << '\n' << myObject.myAge << '\n';

    //call the method
    myObject.methodOne(); 
    myObject.methodTwo();

    myClass2 myObject2;
    
    myClassThree myObj;

    return 0;
}