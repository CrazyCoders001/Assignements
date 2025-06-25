//Problem 2: Multiply Two Numbers
//Problem Statement:
//Write a function that takes two integers and returns their product.

#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers : ";
    cin>> num1>>num2;

    int product = multiply(num1, num2);

    cout<< "Product: "<< product<<endl;

}
