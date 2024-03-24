#include <iostream>
#include <vector>
#include <string>

using namespace std;

void calculate(string firstNum, string secondNum, string opperation)
{
    int firstNumber = stoi(firstNum);
    int secondNumber = stoi(secondNum);

    cout << "The answer is: ";

    if (opperation == "+")
    {
        cout << firstNumber + secondNumber << endl;
    }
    else if (opperation == "-")
    {
        cout << firstNumber - secondNumber << endl;
    }
    else if (opperation == "*")
    {
        cout << firstNumber * secondNumber << endl;
    }
    else if (opperation == "/")
    {
        cout << firstNumber / secondNumber << endl;
    }
    else
    {
        cout << "Invalid operation" << endl;
    }
}

int main()
{
    cout << "Welcome to the c++ console calculator" << endl;

    bool again = true;
    while (again)
    {
        cout << endl
             << "Enter the first number: ";
        string firstNum;
        getline(cin, firstNum);

        cout << "Enter the operation you wish to perform (+, -, *, /): ";
        string opperation;
        getline(cin, opperation);

        cout << "Enter the second number: ";
        string secondNum;
        getline(cin, secondNum);

        calculate(firstNum, secondNum, opperation);

        cout << "Would you like to perform another calculation? (y/n): ";
        string answer;
        getline(cin, answer);

        if (answer == "y")
        {
            again = true;
        }
        else
        {
            again = false;
        }
    }
}
