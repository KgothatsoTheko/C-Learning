#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Named structures
// Treat as a data type
struct Car
{
    string brand;
    int model;
    string name;
};

// Enumeration
// Special types for constants that don't change e.g dates, months, days etc.
//If not set starts at 0 - Low, 1 - Medium etc.
enum level {
    LOW,
    MEDIUM,
    HIGH
};


int main (){

    // Arrays
    // string array
    string cars[4] = {"Toyota", "Audi", "Volvo", "Subaru"};
    // integer array
    int myNumbers[5] = {30, 37, 86, 2, 3};
    cout << cars[0] + ' ' << myNumbers[2] << '\n';

    cars[2] = "BMW";
    cout << cars[2] << '\n';

    //Array loop
    for(int i = 0; i < 4; i++){
        cout << i << "-" << cars[i] << '\n';
    }
    for(int number : myNumbers) {
        cout << "Numbers: " << number << '\n';
    }

    //Vector
    //resizable arrays - add or remove element
    vector<string> brands = {"KFC", "McD", "Nike"};
    //Adding element
    brands.push_back("Reebok");
    for(string b : brands){
        cout << "Brands - " << b << '\n';
    }

    //Get array Size
    int sizeArray = sizeof(cars) / sizeof(cars[0]);
    cout << sizeArray << '\n';

    // Structures
    struct{
        int number;
        string Name;
    } myStructure;
    myStructure.number = 5;
    myStructure.Name = "Kai";
    cout << myStructure.Name << '-' << myStructure.number << '\n';

    //One structure, multiple variables
    struct{
        int idNumber;
        string fullName;
        string gender;
    } human, human2, human3;
    human.idNumber = 1;
    human2.idNumber = 2;
    human3.idNumber = 3;
    human.fullName = "John Doe";
    human2.fullName = "Jane Doe";
    human3.fullName = "Joe Doe";
    human.gender = "Male";
    human2.gender = "Female";
    human3.gender = "Male";
    cout << human.idNumber << '.' << human.fullName << ',' << human.gender << '\n';
    cout << human2.idNumber << '.' << human2.fullName << ',' << human2.gender << '\n';
    cout << human3.idNumber << '.' << human3.fullName << ',' << human3.gender << '\n';

    //Create a car structure and store it in myCar
    Car myCar;
    myCar.name = "RS8";
    myCar.brand = "Audi";
    myCar.model = 2019;
    // Print the structure members
    cout << myCar.brand << " " << myCar.name << " " << myCar.model << "\n";

    enum level myVar;
    myVar = HIGH;

    cout << myVar;

    // References
    string insect = "Fly";
    string &insect2 = insect;

    cout << insect << '\n' << insect2 << '\n';
    
    //Memory Address
    // When a variable is created in C++, a memory address is assigned to the variable
    // location of where the variable is stored on the computer.
    cout << &insect << '\n';

    //C++ Pointers
    // A pointer is a variable that stores the memory address as its value.
    string *ptr = &insect;
    cout << ptr << '\n';
    
    // Dereferencing
    cout << *ptr << '\n';

    // Modify Poiners
    // Also changes the variable as well
    *ptr = "Bee";
    cout << *ptr << '\n';
    cout << insect;
    return 0;
}