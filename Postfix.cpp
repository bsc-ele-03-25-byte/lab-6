# include<iostream> 
using namespace std;
int main() {
 int x = 3;

 //the value of x is increased after the initial value of x is assigned to y
 //hence the value assigned to y is the value before it was increased

 int y = x++;

cout << " x :" << x << endl;
cout << " y :" << y << endl;

return 0;

}