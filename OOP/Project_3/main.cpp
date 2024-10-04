#include <iostream>

using namespace std;
float mark; /// variable to store exam mark
int main()
{
    cout << "KEY IN STUDENT MARK" << endl;
    cin >> mark;
    if(mark < 50){
        cout << "U Unsuccessful" << endl;
    }

    if(mark >= 80){
        cout << "D Distinction" <<endl;
    }
    if(mark >= 50 && mark < 65){
        cout <<"P Pass"<<endl;
    }

    return 0;
}
