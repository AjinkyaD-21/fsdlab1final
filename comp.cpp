// / Program to calculate the distance between two cartesian points
#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int a,b;
public :
  void setvalue (int x,int y)
    {
        a =x; b=y;
    }
   friend  int  distance (point A,point B);
};
int distance (point A,point B)
{

 float c = sqrt ((A.a- B.a)*(A.a- B.a)+ (A.b- B.b)*(A.b- B.b));
  return c;
}
int main()
{
    int x,y;
    cout << "enter your x and y coordinate respectively";
    cin>> x>>y;
    point C,D;
    C.setvalue (x,y);
    cout << "enter your x and y coordinate respectively";
    cin>> x>>y;
    D.setvalue (x,y);
    int c =distance (C,D);
    cout << " the distance between the two respective points is "<< c;


}