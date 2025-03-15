#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Function Declarion
void myFunction(string name);

// Default Parameters
//set default using =
void myFunction2(string country = "Norway"){
    cout << "Favorite country " << country << '\n';
}

//Multiple parameters
void myFunction3(string name, int age){
    cout << "Name: " << name << " " << "Age: " << age << '\n';
}

//Return values
int sum(int x, int y){
    return x + y;
}

//Pass reference
//Useful for swapping 
void swap(int &x, int &y){
    int z = x;
    x= y;
    y = z; 
}

//Pass Array as Parameter
void loop(int myArray[8]){
    int i = 0;
    while(i < 8){
        cout << "item: " << myArray[i] << '\n';
        i++;
    }
}

void loop2(int myArray[8]) {
    for(int i = 0; i < 8; i++){
        cout << "Number: " << myArray[i] << '\n';
    }
}

//function overloading
int plusFunc(int x, int y){
    return x + y;
}
double plusFunc(double x, double y){
    return x + y;
}

int main(){
    myFunction("kai"); // call function
    myFunction2("India");
    myFunction2(); // Call without arguement will give default parameter
    myFunction3("Tommy", 17);
    //return values
    cout << sum(30,20) << '\n';
    int answer = sum(100,200);
    cout << answer << '\n';

    //Swapping 
    int one = 20;
    int two = 10;
    //Before swap 
    cout << one << "-" << two << '\n';
    swap(one,two);
    //After swap
    cout << one << "-" << two << '\n';

    //Passing Array
    int myArray[8] = {30, 37, 8, 90, 27, 43, 34, 60};
    loop(myArray);
    loop2(myArray);

    //function overloading
    int myInt = plusFunc(2,2);
    double myDouble = plusFunc(2.2,5.5);
    cout << "Int" << "-" << myInt << '\n'
         << "Double" << "-" << myDouble; 


    return 0;
}

// Function Defination
void myFunction(string name){
    cout << "My name is: " << name << '\n';
};