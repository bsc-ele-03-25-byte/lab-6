# include<iostream>
using namespace std; 
int main() {
    int rows;
    int columns;
    // asks the user for the dimensions 
    cout<<"Enter the number of rows (maximum 3 ) : ";
    cin >> rows;

    cout <<"Enter the number of columns (maximum 3) :";
    cin>>columns;

    // check that the dimensions do not exceed 3

    while(rows < 1 || rows > 3 || columns < 1 || columns > 3){
        cout<< "\nInvalid dimensions!";
        cout<<"\nplease enter values between 1 and 3.\n";

        cout<<"Enter the number of rows :";
        cin>>rows;

        cout<< "Enter the number of columns :";
        cin>>columns;
    }

    //Dynamically allocates a 2D array
    double ** array = new double * [rows];
    for(int i = 0; i< rows; i++){
        array[i] = new double [columns];
    }
   
    //assign values using nested loops 
    cout<< "\nEnter the elements of the array:\n";
    for(int i = 0; i< rows; i++){
        for(int j = 0; j< columns; j++){
        cout<<"Enter value for position ["<< i << "] ["<< j << "] :" ;
        cin>> array [i][j];
    }



// display the array using nested loops
cout<< "\nThe elements of the array are :\n" ;

for(int i = 0; i< rows ; i++){
    for(int j=0; j< columns ; j++){
        cout<< array[i][j]<< "\t" ;

    }
cout<< endl;

}

// free the dynamically allocated memory
 for(int i = 0; i< rows ; i++){
    delete[]array[i];
 }
 delete[] array;

 return 0;
 }
}