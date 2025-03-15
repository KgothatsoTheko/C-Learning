//header file library
#include <iostream>
#include <string>
#include <cmath>

//accessing the standard library
using namespace std;

int main(){

    //Strings
    string firstName = "Kelly";
    string lastName = "Price";
    cout << firstName + " " + lastName << '\n';
    string fullName = lastName.append(firstName);
    cout << fullName << '\n'; //PriceKelly

    //Methods
    cout << fullName.length() << '\n'; //10
    cout << fullName.size() << '\n'; //10
    cout << fullName[0] << '\n'; // P
    cout << fullName[fullName.length() - 1] << '\n'; // y
    cout << fullName.at(2) << '\n'; // i

    //special character
    // string txt = "Hello \"world\""; // hello "world"
    string txt = "Hello \'world\'"; // hello 'world'
    cout << txt << '\n';

    //User Input Strings
    // string naam;
    // cout << "enter naam: ";
    // getline(cin, naam);
    // cout << "Name: " + naam << '\n';
    // string laat;
    // cout << "enter laat: ";
    // cin >> laat;
    // cout << "Laat: " << laat;

    //Math
    cout << max(3, 7) << '\n';
    cout << min(4, 5) << '\n';
    //from cmath lib
    cout << sqrt(64) << '\n';
    cout << round(2.6) << '\n';

    //Boolean
    // 1 - True && 0 - False
    int myAge = 22;
    int votingAge = 18;
    if(myAge >= votingAge){
        cout << "You can vote" << '\n';
    } else {
        cout << "Not old enough";
    }

    //If...Else
    if (20 > 18) {
        cout << "20 is greater than 18" << '\n';
    }

    int time = 22;
    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }

    string answer = (time > 18 ) ? "Good morning \n" : "Good evening";
    cout << answer;

    //switch 
    int day = 4;

    switch (day)
    {
    case 1:
        /* code */
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday" << '\n';
        break;
    case 5:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    }


    // While loops
    int i = 0;
    while(i < 5) {
        cout << i << '\n';
        i++;
    };

    int j = 10;
    while(j < 20){
        cout << j << '\n';
        j++;
    };

    int m = 20;
    do{
        cout << m << '\n';
        m++;
    } 
    while (m < 30);
    
    int countdown = 5;

    while(countdown > 0) {
        cout << countdown << '\n';
        countdown--;
    }
    cout << "Happy birthday \n";

    int prime = 0;
    while(prime <= 20){
        cout << prime << '\n';
        prime = prime + 2;
    }

    //For Loop
    for(int o = 0; o < 10; o++){
        cout << "Item: "<< o << '\n';
    }

    for(int y = 1; y <=3; y++){
        cout << "Outer: " << y << '\n'; // Executes 3 times
        for(int w = 1; w <=2; w++){
            cout << "Inner: " << w << '\n'; // Executes 6 times (2 * 3)
        }
    }

    //foreach loop (ranged loop)
    string myWords[4] = {"Kai", "kaiya", "Monkey", "Monkee"};
    for(string b : myWords){
        cout << "Names: " << b << '\n';
    }
    return 0;
}