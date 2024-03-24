#include <iostream>
#include <vector>
#include <string>

using namespace std;

// calculate function for running the calculation of the given numbers and opperations
void calculate(string firstNum, string secondNum, string opperation)
{
    // Convert each number to an integer
    int firstNumber = stoi(firstNum);
    int secondNumber = stoi(secondNum);

    // Start to answer output
    cout << "The answer is: ";

    // Check if the opperation is addition
    if (opperation == "+")
    {
        // Display the numbers added together
        cout << firstNumber + secondNumber << endl;
    }
    // Otherwise check if the opperation is subtraction
    else if (opperation == "-")
    {
        // Display the numbers subtracted
        cout << firstNumber - secondNumber << endl;
    }
    // Otherwise check if the opperation is multiplication
    else if (opperation == "*")
    {
        // Display the numbers multiplied
        cout << firstNumber * secondNumber << endl;
    }
    // Otherwise check if the opperation is division
    else if (opperation == "/")
    {
        // Display the numbers divided
        cout << firstNumber / secondNumber << endl;
    }
    else
    {
        // Display an error message
        cout << "Invalid operation" << endl;
    }
}

int main()
{
    // Welcome the user
    cout << "Welcome to the c++ console calculator" << endl;

    // Create a variable for looping
    bool again = true;
    while (again)
    {
        // Get the first number
        cout << endl
             << "Enter the first number: ";
        // Create a variable to store the first number
        string firstNum;
        // Get the console input and store it in the first number
        getline(cin, firstNum);

        // Get the operation number
        cout << "Enter the operation you wish to perform (+, -, *, /): ";
        // Create a variable to store the operation number
        string opperation;
        // Get the console input and store it in the operation number
        getline(cin, opperation);

        // Get the second number
        cout << "Enter the second number: ";
        // Create a variable to store the second number
        string secondNum;
        // Get the console input and store it in the second number
        getline(cin, secondNum);

        // Call the calculate function
        calculate(firstNum, secondNum, opperation);

        // Ask if the user would like to perform another calculation
        cout << "Would you like to perform another calculation? (y/n): ";
        // Create a variable to store the answer
        string answer;
        // Get the console input and store it in the answer
        getline(cin, answer);

        // Check if the user would like to perform another calculation
        if (answer == "y")
        {
            // Set the again variable to true
            // This will result in the main while loop to run again
            again = true;
        }
        else
        {
            // Set the again variable to false
            // This will result in the main while loop to exit
            again = false;
        }
    }
}
