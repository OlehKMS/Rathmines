#include <iostream>

using namespace std;
///1 cLASS DECLARATION
class AREA_FINDER
{
public:
    float RECTANGLE(float width, float lenght);
private:
    float dm_width;
    float dm_lenght;
    float dm_area;
};

/// 2 Method definitions
/// type Class :: Method (type & name Parameters)
float AREA_FINDER ::RECTANGLE( float width, float lenght){
dm_width = width;
dm_lenght = lenght;
dm_area = dm_width * dm_lenght;
return dm_area;
}
float R_area;


int main()
{
    /// 3 create an object
    /// class class_name object_name or names;
    class AREA_FINDER rect1, rect2;

    cout << "Find area of AREA_FINDERs!" << endl;
    ///4 result = Object.method(values to be processed aka arguments)
    R_area = rect1.RECTANGLE(20.5, 30.5);
     cout << "Area of rctangle 1 is!" <<R_area   <<"Sq Metres" << endl;
    return 0;
}
