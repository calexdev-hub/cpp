#include <iostream>

int main () {
    int x; //declaration
    x = 7; // assignment

    int y = 3; // declaration and assignment

    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';

    std::cout << sum << '\n';


    //integer (whole number)
    int age = 21;
    int year = 2026;
    int days = 7.5;

    std::cout << days << '\n';

    //double (number including decimal)
    double price = 19.99;
    double gpa = 2.5;

    std::cout << price << std::endl;

    //single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string (objects that represent a sequence of text)
    std::string name = "Carlos";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << "Hello " << name << "!" << '\n';
    std::cout << "You are " << age << "  years old!";

    return 0;
}