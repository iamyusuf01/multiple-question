#include<iostream>
using namespace std;
class Area
{
    private:
      int square,l,w,r;
      int float area;
      public:
     void setsquare(int x)
     {
        square=x;
     }
     int getsquare()
     {
        return square;
     }
     void calculatesquare()
    { 
        int n,i;
         for(i=2;i<=square;i++)
        {
            n=i*i;
        }
         square=n;
    
     
    }  
     void setAreaofrectangle(int y,int c)
     {
        l=y;
        w=c;
     }
     int getAreaofRectagle()
    {
        return area;
    }
    int Areaofrectangle()
    {
        area=l*w;
        return area;
    }
     void setRadius(int z)
     {
        r=z;
     }
     int getRadius()
     {
        return r;
     }
     int getAreaof()
     {
        return area;
     }
     int AreaOfCircle()
     {
        area=3.14*r*r;
        return area;
     }

  
};
int main()
{
    Area r1;
    r1.setsquare(5);
    r1.calculatesquare();
    r1.setRadius(5);
    r1.AreaOfCircle();
    r1.setAreaofrectangle(5,4);
    r1.Areaofrectangle();

    cout<<"Square is "<<r1.getsquare();
    cout<<"\nArea of Rectangle is "<<r1.getAreaofRectagle();
    cout<<"\nArea of Circle is "<<r1.AreaOfCircle();
}