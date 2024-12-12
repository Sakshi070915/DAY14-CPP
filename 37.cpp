//C++ Program to find the square root of a number
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double number,squareRoot;

    number = 25.0;

    //sqrt() is  library function to calculate square root
    squareRoot = sqrt(number);

    cout<<"Square root of "<<number<< "=" <<squareRoot;

    return 0;
}

