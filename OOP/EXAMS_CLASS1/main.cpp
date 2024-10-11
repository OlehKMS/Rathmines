#include <iostream>
#include <iomanip> /// NEEDED FOR SETW>
using namespace std;

class Exams{
public:
    string get_H_grade(float mark);
private:
    string dm_grade;
    float dm_mark;
};
string Exams::get_H_grade(float mark){
dm_mark = mark;
if(dm_mark >= 90 && dm_mark <=100)
{
    dm_grade = "H1";
}
if(dm_mark >= 80&& dm_mark <90){
    dm_grade ="H2";
}
if(dm_mark >= 70 && dm_mark<80){
    dm_grade = "H3";
}
if(dm_mark >= 60 && dm_mark<70){
    dm_grade="H4";
}
///ADD CODE FOR H5,H6,H7 AND H8
return dm_grade;
}
float mark;
string grade,level; ///DECLARE VARIABLES

int main()
{
 class Exams student1; ///CREATE AN OBJECT
 cout <<"Enter level, H for Higher or 0 for Ordinary"<< endl;
 cin>> level;
 cout<<"Enter a mark between 60 and 100"<<endl;
 cin >> mark;
 if(level =="H")/// ****** Higher
 {
     grade = student1.get_H_grade(mark);
     cout<< setw(10)<< "Grade" << setw(10)<< grade << endl;
 }
 return 0;
}
