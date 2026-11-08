# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;

int main() {

//generate random number between 0 and 11
srand (time(0));
int daysUntilExpiration = rand () % 12;

//check the subscripti0n status
if (daysUntilExpiration > 10) {
    cout<<"You have an active subscription." << endl;
}

else if (daysUntilExpiration == 0) {
    cout<<"Your subscription has expired." << endl;
}

else if (daysUntilExpiration == 1){
    cout<<"Your subscription expires within a day!. Renew now and save 20%!" << endl;
}

else if(daysUntilExpiration <= 5) {
    cout << "Your subscription expires in "<< daysUntilExpiration << " days. Renew now and save 10%!" << endl;
}

else{
    cout<< "Your subscription will expire soon. Renew now!" << endl;

}
 return 0;
}