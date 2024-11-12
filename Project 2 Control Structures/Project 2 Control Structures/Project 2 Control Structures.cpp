// Project 2 Control Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // ---------------------------------------------------------------------------
    // Lesson 1: If, If-Else, Switch Statements
    // ---------------------------------------------------------------------------     
    // ---------------------------------------------------------------------------    
    // Part 1: If-Else Statement    
    // ---------------------------------------------------------------------------
    
    // Declare non assigned integer
    int intNumber;

    // Request an integer from the user
    std::cout << "Enter a number: ";

    // Assign user inputed integer to variable
    std::cin >> intNumber;

    // If-Else conditional statements
    if ( intNumber > 0 ) 
    {
        std::cout << "The number is positive.\n" << std::endl;
    }
    else if ( intNumber < 0 ) 
    {
        std::cout << "The number is negative.\n" << std::endl;
    } 
    else
    {
        std::cout << "The number is zero.\n" << std::endl;
    }

    // ---------------------------------------------------------------------------
    // Part 2 Switch Statement
    // ---------------------------------------------------------------------------

    std::cout << "Enter a number (1-7) for the day of the week: ";
    std::cin >> intNumber;

    switch (intNumber) {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Friday" << std::endl;
        break;
    case 6:
        std::cout << "Saturday" << std::endl;
        break;
    case 7:
        std::cout << "Sunday" << std::endl;
        break;
    default:
        std::cout << "Invalid day number." << std::endl;
    }

    // ---------------------------------------------------------------------------    
    // Lesson 2: Loops - For, While, Do-While    
    // ---------------------------------------------------------------------------
    // ---------------------------------------------------------------------------    
    // Part 1: For Loop - Demonstrate a loop for printing numbers.
    // ---------------------------------------------------------------------------

    std::cout << "\nCounting from 1 to 10:" << std::endl;
    
    // Declare loop variable
    int intIndexI = 0;

    for ( intIndexI = 1; intIndexI <= 32; intIndexI += 1 ) 
    {
        std::cout << intIndexI << " ";
    }

    std::cout << std::endl;

    // ---------------------------------------------------------------------------     
    // Part 2: While Loop - Demonstrate a while loop - ex. decrementing
    // ---------------------------------------------------------------------------

    // Declare loop variable
    int intIndexJ = 10;

    std::cout << " \nCounting down from 10 to 1:" << std::endl;

    while (intIndexJ > 0) 
    {
        std::cout << intIndexJ-- << " ";
    }

    std::cout << std::endl;

    // ---------------------------------------------------------------------------
    // Part 3: Do-While Loop - Demonstrate a do while loop
    // ---------------------------------------------------------------------------

    // Declare loop variable
    int intIndexN = 0;

    do
    {
        std::cout << "\nEnter a number (0 to stop): ";
        std::cin >> intIndexN;
        std::cout << "You entered: " << intIndexN << std::endl;
    } 
    while (intIndexN != 0);

    return 0;    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
