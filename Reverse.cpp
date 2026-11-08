
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to reverse the statement
string Reverse(string fileData)
{
    reverse(fileData.begin(), fileData.end());
    return fileData;
}

int main()
{
    string fileData;
    ifstream file("statement.txt");

    // Read the text file
    if (!file)
    {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    getline(file, fileData);
    file.close();

    // Count vowels
    int vowels = 0;

    for (int i = 0; i < fileData.length(); i++)
    {
        char ch = tolower(fileData[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            vowels++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;

    // Count words
    stringstream ss(fileData);
    string word;
    int words = 0;

    while (ss >> word)
    {
        words++;
    }

    cout << "Number of words: " << words << endl;

    // Reverse the statement
    cout << "Reversed statement: " << Reverse(fileData) << endl;

    // Capitalise the second letter of each word
    for (int i = 1; i < fileData.length(); i++)
    {
        if (isspace(fileData[i - 1]))
        {
            fileData[i] = toupper(fileData[i]);
        }
    }

    cout << "Capitalised statement: " << fileData << endl;

    return 0;
}

