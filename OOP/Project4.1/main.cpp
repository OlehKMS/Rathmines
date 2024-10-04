#include <iostream>

using namespace std;
string firstname, surname, classcode;
float heightcms;
int age;

int main()
{
    cout << "Key in first name" << endl;
    cin >> firstname;
     cout << "Key in your surname" << endl;
     cin >> surname;
      cout << "Key in your class code e.g. CCP 3" << endl;
      cin >> classcode;
      cout << "Key in your height in cms" << endl;
       cin >> heightcms;
       cout << "Key in age" << endl;
       cin >> age;
       cout << "Personal Details" << endl;
       cout << firstname << " " << surname <<endl<<endl;
       cout << "Class" << classcode << endl << endl;
       cout << "Height cms = " << heightcms << endl;
       cout << "Age     " << age << endl;
    return 0;
}
