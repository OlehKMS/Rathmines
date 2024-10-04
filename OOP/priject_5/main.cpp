#include <iostream>

using namespace std;
class calculator{
public: ///METHODS
    ///type method parametr values
    float addnums(float num1, float num2);
    float multiply( float num1, float num2);
private: ///DATTA MEMBERS
    float dm_num1;
    float dm_num2;
    float dm_sum; ///store result of add nums
    float dm_product; /// store result of multy
    };
    /// 2 METHOD DEFINITION FOR EACH METHOD

    float calculator:: addnums (float num1, float num2){
    dm_num1 = num1;
    dm_num2 = num2;
    dm_sum = dm_num1 + dm_num2;
    return dm_sum;
    }
    float calculator:: multiply( float num1, float num2){
    dm_num1 = num1;
    dm_num2 = num2;
    dm_product = dm_num1 * dm_num2;
    return dm_product;
    }

    /// Multy method
    float sum, product;
int main()
{
    cout <<"CALCULATIONS   " <<endl;
    /// 3 CREATE AN OBJECT AND CALL THE METHODS
    class calculator object1; /// Create object
    sum = object1.addnums(34.75, 22.75); /// object uses addnums methods
    product = object1.multiply(20.50, 29.50);
    cout <<"Sum of values = " << sum <<endl;
    cout <<"Product of values = " << product <<endl;
        return 0;
}
