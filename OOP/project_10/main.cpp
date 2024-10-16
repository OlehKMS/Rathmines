#include <iostream>
#include <iomanip>

using namespace std;

class payroll
{

public:
    ///type method name type parametr, type paremeter
    float gross_pay_method(float hours, float rate);
    void payslip_method(int emp_no, string P_date);
    float  net_pay_METHOD(); ///1
private:
    float dm_hours;
    float dm_rate;
    float dm_gross;
    float dm_PAYE = 210.09;
    float dm_USC =27.71;
    float dm_PRSI = 40;
    float dm_net_pay = 0;  ///2

    string dm_name = "Employee";
    int dm_emp_no;
    string dm_P_date;

};
/// DEFINE THE net_net_METHODS
float payroll::net_pay_METHOD() ///3
{

    ///net_pay = gross - prsi + paye + usc

}

void payroll::payslip_method(int emp_no, string P_date)
{

    dm_emp_no = emp_no;
    dm_P_date = P_date;
    cout << "__________________________________________" << endl;

    cout << "|" <<setw(23) << "Company name"  << setw(18) << "|" <<endl;
    cout << "|" << setw(9) << "Pay date" << setw(9) << dm_P_date << setw(23) << "|" <<endl;
    cout << "|" <<setw(12) << "Employee NO"  << setw(4) << dm_emp_no << setw(25) << "|" <<endl;
    cout << "|" <<setw(14) << "Employee Name"  << setw(12) << dm_name<< setw(15) << "|" <<endl;
    cout << "|" <<setw(41) <<  "|" <<endl;
    cout << "|" <<setw(14) << "Gross pay "  << setw(25) << dm_gross << setw(2) << "|" <<endl;
    cout << "|" <<setw(41) <<  "|" <<endl;
        ///add code to print rest of payslip
        cout << "|" <<setw(13)<<"PRSI" <<setw(10) <<dm_PRSI <<setw(18) <<  "|" <<endl;
        cout << "|" <<setw(41) <<  "|" <<endl;
        cout << "|" <<setw(13)<<"PAYE" <<setw(10) <<dm_PAYE <<setw(18) <<  "|" <<endl;
        cout << "|" <<setw(41) <<  "|" <<endl;
        cout << "|" <<setw(13)<<"USC" <<setw(10) <<dm_USC <<setw(18) <<  "|" <<endl;
        cout << "|" <<setw(41) <<  "|" <<endl;
        cout << "|" <<setw(13)<<"Net pay" <<setw(10) <<dm_net_pay <<setw(18) <<  "|" <<endl;
    cout << "__________________________________________" << endl;
}

float payroll::gross_pay_method(float hours, float rate)
{

    dm_hours = hours;
    dm_rate = rate;
    dm_gross = dm_hours * dm_rate;
    return dm_gross;
}

int rate = 20;
float hours =50;
int main()
{

    cout << "Payroll application" << endl;
    class payroll employeel;
    employeel.gross_pay_method(hours, rate); ///CALL gross_pay_method

    /// add code to CALL net_pay_METHOD()
    employeel.payslip_method(101, "11/12/23");
    return 0;
}


