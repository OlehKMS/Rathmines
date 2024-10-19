#include <iostream>
#include <iomanip>
using namespace std;

class Payroll{
public:
    float get_gross(float hours, float rate);
};

///Method Definition for calculating gross "Определение метода для вычисления брутто"
float Payroll:: get_gross(float hours, float rate){
return hours * rate;
}

class FindPrsi {
public :
    float get_prsi(float gross ,float percent);
};
/// Method for calculating by x percent
float FindPrsi:: get_prsi (float gross, float percent){
return gross * percent;
}

int main() {
/// Первая часть программы - расчет зарплаты
Payroll employee1;
float hours = 50;
float rate = 15.0f;
float gross = employee1.get_gross(hours, rate);

cout << "Gross pay :"  << gross << endl;

/// Вторая часть программы - расчет PRSI
FindPrsi employee2;
float percent = 0.04f;
float prsi = employee2.get_prsi(gross, percent);

cout << "PRSI: "  << prsi <<endl;
return 0;
}
