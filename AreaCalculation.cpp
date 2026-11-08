
#include <iostream>
#include <limits>
using namespace std;

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height)
{
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width)
{
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side)
{
    return side * side;
}

// Function to get a valid positive measurement
double getPositiveInput(string message)
{
    double value;

    cout << message;

    while (!(cin >> value) || value <= 0)
    {
        cout << "Invalid input. Please enter a positive number: ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return value;
}

int main()
{
    int choice;

    // Keep the program running until the user chooses to quit
    while (true)
    {
        cout << "\n===== AREA CALCULATOR =====" << endl;
        cout << "1. Calculate the area of a Triangle" << endl;
        cout << "2. Calculate the area of a Rectangle" << endl;
        cout << "3. Calculate the area of a Square" << endl;
        cout << "4. Quit the program" << endl;

        cout << "Please select an option (1-4): ";

        // Validate the menu input
        while (!(cin >> choice) || choice < 1 || choice > 4)
        {
            cout << "Invalid input. Please enter a number between 1 and 4: ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Select the shape using switch
        switch (choice)
        {
            case 1:
            {
                double base, height, area;

                base = getPositiveInput("Enter the base of the triangle: ");
                height = getPositiveInput("Enter the height of the triangle: ");

                area = calculateTriangleArea(base, height);

                cout << "The area of the triangle is: " << area << endl;
                break;
            }

            case 2:
            {
                double length, width, area;

                length = getPositiveInput("Enter the length of the rectangle: ");
                width = getPositiveInput("Enter the width of the rectangle: ");

                area = calculateRectangleArea(length, width);

                cout << "The area of the rectangle is: " << area << endl;
                break;
            }

            case 3:
            {
                double side, area;

                side = getPositiveInput("Enter the side of the square: ");

                area = calculateSquareArea(side);

                cout << "The area of the square is: " << area << endl;
                break;
            }

            case 4:
                cout << "Thank you for using the Area Calculator. Goodbye!" << endl;
                return 0;
        }
    }

    return 0;
}
