#include <iostream>

using namespace std;
/// 1 CLASS DECLARATION
class calculation
{
public: ///LIST OF METHOD
    float addnumbers(float num1, float num2);
    private: /// LIST OF DATA MEMBERS
    float dm_num1;
    float dm_num2;
    float dm_sum;
};
    ///2 DEFINE EACH METHOD
    ///Type class :: method (parameter values)
    float calculation::addnumbers(float num1, float num2)
    {
    dm_num1 = num1;
    dm_num2 = num2;
    dm_sum = dm_num1 + dm_num2;
    return dm_sum;
    }
    float sum; /// for storing result of addnumbers
int main()
{
    ///3 CREATE AN OBJECT ONLY ONCE
    class calculation Object1;
    /// 4   OBJECT CALLS THE METHO
    sum = Object1.addnumbers(25,150);
    cout << "The sum of the two numbers is " << sum << endl;
    return 0;
}
