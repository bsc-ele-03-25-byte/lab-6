# include <iostream>
# include <string>
using namespace std;

int main(){
// declare and initialise the array

string myArray[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
// calculate the size of the array
int size = 8;

//use for loop to check each element 
for(int i = 0; i<size; i++){
    if (myArray[i][0] =='B'){
        cout << myArray[i] << endl;
    }
}
return 0;

}