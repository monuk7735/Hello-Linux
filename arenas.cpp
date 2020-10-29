#include<iostream>
#include<math.h>
using namespace std;

class shape
{
    public:
        virtual void findarea()=0;
};
class TwoDimensional:public shape
{
    public:
        virtual void find_area() = 0;
};
class ThreeDimensional: public shape
{
    public:
        virtual void find_volume() = 0;
};
class triangle: public TwoDimensional
{
    int b, h;
    public:
        triangle(int q, int w) {
            b=q;
            h=w;
        }
        void find_area() {
            float area;
            area = 0.5 * b* h;
            cout<<"Area of triangle"<<area<<endl;
        }
}
class rectangle: public TwoDimensional
{
    int b, h;
    public:
        rectangle(int q, int w) {
            b=q;
            h=w;
        }
        void find_area() {
            float area;
            area = b * h;
            cout<<"Area of rectangle"<<area<<endl;
        }
}
class circle: public TwoDimensional
{
    int r;
    public:
        circle(int q) {
            r=q;
        }
        void find_area() {
            float area;
            area = 3.14 * r * r;
            cout<<"Area of circle"<<area<<endl;
        }
}
class box: public ThreeDimensional {
    
    int l, b, h;
    public:
        box(int a, int d, int c) {
            l=a;
            b=d;
            h=c;
        }
        void find_volume() {
            float volume;
            volume = l * b * h;
            cout<<"Volume of box is"<<volume<<endl;
        }
};
class cone: public ThreeDimensional {
    
    int r, h;
    public:
        box(int a, int b) {
            r=a;
            h=b;
        }
        void find_volume() {
            float volume;
            volume = (3.14 * r * r * h) / 3;
            cout<<"Volume of cone is"<<volume<<endl;
        }
};
class sphere: public ThreeDimensional {
    
    int r;
    public:
        box(int a) {
            r=a;
        }
        void find_volume() {
            float volume;
            volume = (4 * 3.14 * r * r * r) / 3;
            cout<<"Volume of sphere is"<<volume<<endl;
        }
};
class cylinder: public ThreeDimensional {
    
    int r, h;
    public:
        box(int a, int d, int c) {
            r=a;
            h=b;
        }
        void find_volume() {
            float volume;
            volume = 3.14 * r * r * h;
            cout<<"Volume of cylinder is"<<volume<<endl;
        }
};

int main() {
    triangle a(2,2);
    a.find_area();
    trectangle  b(3,5);
    b.findarea(); 
    circle c(2);
    c.findarea();
    box d(2,2r2);
    d.findarea();
    cone e(3,10);
    e.findarea();
    cylinder f(3,5);
    f.findarea();
    sphere g(4);
    g.findarea();
    return 0;
}
