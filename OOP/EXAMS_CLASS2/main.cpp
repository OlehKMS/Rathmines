#include <iostream>
#include <iomanip>
using namespace std;
///071024

class Exams
{

public:
    string get_O_grade(float mark);
private:
    string dm_grade;
    float dm_mark;
};
string Exams:: get_O_grade(float mark)
{

    dm_mark = mark;
    if(dm_mark >= 90&& dm_mark <=100){
        dm_grade = "01";
    }
    if(dm_mark >= 80&& dm_mark <=90){
        dm_grade = "02";
    }
    if(dm_mark >= 70&& dm_mark <=80){
        dm_grade = "03";
    }
    if(dm_mark >= 60&& dm_mark <=70){
        dm_grade = "04";
    }
    ///ADD COD FOR 05,06,07 and 08
    return dm_grade;
}
float mark;
string grade,level; /// DECLARE VARIABLES


int main()
{class Exams student1; ///CREATE AN OBJECT
cout << "Enter level, H for Higher or 0 for Ordinary" << endl;
cin >> level;
cout << "Enter a mark between 60 and 100"<< endl;
cin>> mark;

if(level == "O") ///*********Ordinary
{
    grade = student1.get_O_grade(mark);
    cout << setw(10)<<"Grade" << setw(10)<< grade << endl;
}
return 0;
}
