#include <iostream>

using namespace std;

float hours, rate, gross,tax,net;

int main()
{
    cout << "Wages" << endl;
    ///Ask the user to key in hours using cout
    cout << "key in hours" << endl;
     ///use cin to stop the programm and store the input in hours
    cin >> hours;
     /// Ask the user to key in rate using cout
    cout << "key in rate" << endl;
      ///calculate gross = hours * rate
    cin>> rate;
      ///display gross using cout
    gross = hours * rate;

     cout << "Gross pay = " << gross << endl;
     /// calculate tax at 20% of gross tax = gross *2
     if(gross <= 600)
     {
     tax = gross * .2;
     }
     ///display tax using cout
    cout << "Tax = " << tax << endl;
      /// net = gross - tax
    net = gross - tax;
      ///display net
    cout << "Net pay ="<< net << endl;
    return 0;
}
