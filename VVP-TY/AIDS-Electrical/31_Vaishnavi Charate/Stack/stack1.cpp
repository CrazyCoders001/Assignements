//Write a program that uses a stack to reverse a given string.
//💡 Sample Input:"hello"
//📤 Output:"olleh"
#include <iostream>
#include <stack>
using namespace std;
// Function to reverse a string using a stack
string reverseString(string input) 
{
    stack<char> s;
    // Push each character into the stack
    for (char ch : input) 
    {
        s.push(ch);
    }
    // Pop characters from the stack to reverse the string
    string reversed = "";
    while (!s.empty()) 
    {
        reversed += s.top();
        s.pop();
    }

    return reversed;
}
int main() 
{
    string str = "hello";  // input string
    cout << "Input: " << str << endl;
    cout << "Reversed: " << reverseString(str) << endl; // function call
    return 0;
}

