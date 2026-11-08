# include <iostream>
# include<string>
# include<limits>
using namespace std;

int main () {
    int * number = new int ;// dynamically allocate an integer
    string * text = new string; // dynamically allocates a string
    
    cout<< "Enter an integer :" ;
    cin>>*number;

    cout<< "Enter a string :" ;
    cin>>*text;

    // display the entered values 
    cout << "\n --- output --- " << endl;
    cout << "The integer value is : " << *number << endl;
    cout << "The string value is : " << *text << endl;

    //free dynamically allocated memory 
     delete number;
     delete text;

     return 0;

}