#include <iostream>

using namespace std;
class area{
public:/// LIST OF METHODS
    float get_area_rectangle(float lenght, float width);
    ///AREA OF CIRCLE 3.14 x R*R
    float get_area_circle( float r_adius);
    ///AREA OF TRIANGLE (BASE X HEIGHT)/2
    float get_area_triangle(float base, float height);
private:
    float dm_lenght, dm_width, dm_area, dm_radius, dm_base, dm_height;
};
///DEFINE EACH METHOD
/// RETIRN_TYPE class::: method(parametrs) { method instructions}
float area:: get_area_circle(float r_adius){
dm_radius = r_adius;
dm_area = 3.14 * (dm_radius * dm_radius);
return dm_area;
}
///return_type class :: method(parametrs) {method instructions}
float area :: get_area_triangle(float base, float height){
dm_base = base;
dm_height = height;
dm_area = (dm_base*dm_height)/2;
return dm_area;
}
///Declare varitables for storing data after int main()
float area_of_triangle, area_of_cirlce, area_of_rectangle;
int main()
{///Create an project
    class area measure1, measure2;
    area_of_cirlce = measure1.get_area_circle(10);
    cout << "Area of circle" << area_of_cirlce<<" sq cms" << endl;
    area_of_triangle = measure2.get_area_triangle(203 , 137);
    cout << "Area of triangle" << area_of_triangle <<" sq cms" << endl;
    return 0;
}
