# Prime Number Printer

A simple C++ program to print all prime numbers within a specified range using modular programming. This project demonstrates how to organize code with header files and separate source files for function declarations and definitions.
Table of Contents

## Overview
* Project Structure
* Setup
* Compiling and Running
* Usage
* Example
* Contributing

## Overview
This program uses a nested loop and modular code organization to print all prime numbers within a user-defined range. Prime numbers are integers greater than 1 that have no divisors other than 1 and themselves. This project demonstrates:

## Basic prime-checking logic
Modular programming in C++
Compilation and execution of a multi-file C++ project in Visual Studio
Project Structure
The code is split across three files for modularity:

header.h: Declares functions for checking if a number is prime and printing prime numbers within a range.
source.cpp: Implements the functions declared in header.h.
main.cpp: The main program file that includes user input and calls the functions to print prime numbers.

## File Breakdown
header.h: Contains the declarations of isPrime and printPrimesInRange.
source.cpp: Implements isPrime to check for prime numbers and printPrimesInRange to output prime numbers in a specified range.
main.cpp: Accepts user input for the range and calls printPrimesInRange to display the results.
Setup
Prerequisites
Visual Studio (or any C++ compiler like GCC, Clang)
Clone the Repository
Clone this repository to your local machine using:
```
git clone https://github.com/yourusername/PrimeNumberPrinter.git
cd PrimeNumberPrinter
```

## Compiling and Running
In Visual Studio
1. Open Visual Studio and select Open a Local Folder to open the PrimeNumberPrinter folder.
2. Add the header.h, source.cpp, and main.cpp files to the Source Files and Header Files folders in Solution Explorer.
3. Build the project:
Go to Build > Build Solution (or press Ctrl + Shift + B).
4. Run the project:
Go to Debug > Start Without Debugging (or press Ctrl + F5).
In Command Line
If using g++ or another command-line compiler:

## In Command Line
If using g++ or another command-line compiler:
g++ main.cpp source.cpp -o PrimeNumberPrinter
./PrimeNumberPrinter

## Usage
When you run the program, it will prompt you to enter a lower and upper limit for the range of numbers. The program will then print all prime numbers within this range.
```
Enter the lower limit: 10
Enter the upper limit: 50
Prime numbers between 10 and 50 are:
11 13 17 19 23 29 31 37 41 43 47
```

## Example
For example, if you enter 10 as the lower limit and 50 as the upper limit, the program will output all prime numbers between 10 and 50, as shown above.

## Contributing
Feel free to fork this repository, submit issues, or make pull requests to contribute. All contributions are welcome!

---------------------------------------------------------------------

###### This README provides an overview, setup instructions, usage details, and an example output, making it easy for others to understand and use the project.
