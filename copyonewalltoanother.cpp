/*WAP using C++ to copy the contents of wall1 to wall2*/
#include <iostream>
using namespace std;
class wall
{
    private:
    double length;
    double breadth;
    public:
    wall (double len, double br)
    {
        length=len;
        breadth=br;
    }
    wall(wall&obj)
    {
        length=obj.length;
        breadth=obj.breadth;
    }
    double calarea()
    {
        return (length*breadth);
    }
};
    int main()
    {
        wall wall1(10.5,12.5);
        cout<<"Area="<<wall1.calarea()<<endl;
        wall wall2= wall1;
        cout<<"Copied area="<<wall2.calarea()<<endl;
        return 0;
    }


