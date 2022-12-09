#include<iostream>
using namespace std;

int main(){
    int number ;
    int Evennumber=0 ;
    int Oddnumber=0 ;

    do
    {
         cout << "Enter an integer: "; 
         cin >> number ;
         if (number%2 == 0 && number != 0)
         {
            Evennumber++;
         }
         if (number%2 != 0)
         {
            Oddnumber++;
         }
    } while (number != 0);
    
    cout << "#Even numbers = " << Evennumber << endl;
    cout << "#Odd numbers = " << Oddnumber;
    return 0;
}