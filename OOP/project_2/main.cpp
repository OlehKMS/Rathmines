#include <iostream>

using namespace std;
float number1;
float number2;
float sum;
float product;
float difference;
float quotient;


int main()
{
    cout << "Key in a number" << endl;
    cin >> number1;
    cout << "Key in a second number" << endl;
    cin >> number2;
    sum = number1 + number2;
    product = number1 * number2;
    difference = number1 - number2;
    if(number2 == 0){

        cout << "Sum = " << sum << endl;
        cout << "Product = " << product<<endl;
        cout << "Difference= " << difference << endl;
        cout << "quotient = Cannot divide by zero" << endl;
        return 0;
    }
    quotient = number1 / number2;
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product<<endl;
    cout << "Difference= " << difference << endl;
    cout << "Quotient= " << quotient <<endl;

    return 0;
}
