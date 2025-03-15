#include <iostream>
#include <string>
//  is a header file library that lets us work with input and output objects, such as cout
// Header files add functionality to C++ programs.


//namespace - access it anywhere no need to use std::
using namespace std;

//main function - where program begins
//inoke main
int main (){

    //basic output
    //standard(std::) character(cout) output(<<) 
    //end line(endl) -- ('\n')
    std::cout << "I like C++" << std::endl;
    std::cout << "I like coding" << '\n';
    std::cout << "This is fun" << '\n';
    std::cout << "Also fast" << '\n';

    //variables
    // always initialize to a value
    int age = 17;
    age = 30;
    std::cout << age << '\n';
    double price = 5.33;
    std::cout << price << '\n';

    int a = 1;
    int b = 4;
    int temp = b;
    b = a;
    a = temp;
    std::cout << a << '\n';

    //const
    const double pi = 3.14;
    std::cout << pi << '\n';

    //Math
    int x = 4;
    int y = 5;
    int z = x * y;
    std::cout << z << '\n';

    x++; // x = 5
    int e = x++; // e = 5, x = 6
    int t = ++x; //x= 7, t = 7
    std::cout << t << '\n';

    double k = 10;
    int l = 3;
    double j = k / 3;
    std::cout << j << '\n';
    //means no problems (0 - success, 1 - failed)

    //stream insertion opertator (<<)
    // "" - strings case sensitive 
    cout << "I have " << t <<" apples" << '\n'
         << "Also " << l << " phones" << '\n';

    int one = 8;
    int two = 10;
     
    cout << (one < two) << '\n';     
    
    //Reading from the console
    cout << "enter value: ";
    int value;
    cin >> value;
    cout << value << '\n';

    cout << "enter value d and c: ";
    double d;
    double c;
    cin >> d >> c;
    cout << d + c << '\n';

    cout << "Enter name: ";
    string name;
    cin >> name;
    cout << name << '\n';
    cout << "Enter age: ";
    int old;
    cin >> old;

    return 0;
}