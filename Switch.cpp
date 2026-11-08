# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;

int main() {

//generate random number between 0 and 11
srand (time(0));
int daysUntilExpiration = rand () % 12;

//display the generated random number
cout<< "Days Until Expiration :" << daysUntilExpiration<< endl;

// check the subscription using switch
switch (daysUntilExpiration) {

case 0 :
cout << "Your subscription has expired." << endl;
break;

case 1 :
cout << " Your subscription expires within a day! Renew now and save 20%!" << endl;
break;

case 2:
case 3:
case 4:
case 5:
cout << "Your subscription expires in " << daysUntilExpiration << "days. Renew now and save 10%!" << endl;
break;

case 6:
case 7:
case 8:
case 9:
case 10:
cout << "Your subscription will expire soon. Renew now!" << endl;
break;

default:
cout<< "You have an active subscription." << endl;
break;
}

return 0;
}