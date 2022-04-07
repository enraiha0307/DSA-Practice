#include <iostream>
#include <cmath>
using namespace std;

void AreaCircle();
void AreaTriangle();
void AreaRectangle();
void AreaIsocelesTriangle();
void AreaParallelogram();
void AreaRhombus();
void AreaEquiLateralRectangle();
void PeriCircle();
void PeriEquilateralTriangle();
void PeriParallelogram();
void PeriRhombus();
void PeriRectangle();
void PeriSquare();
void VolumeCone();
void VolumePrism();
void VolumePyramid();
void VolumeSphere();
void VolumeCylinder();
void CSACylinder();
void TSACube();
int main()
{
    // VolumeCylinder();
    // VolumeSphere();
    //   VolumePyramid();
    // VolumePrism();
    //  VolumeCone()//
    //   PeriRectangle();
    //   PeriSquare();
    //   PeriRhombus();
    //    PeriParallelogram();
    //     PeriEquilateralTriangle();
    //         PeriCircle();
    //      AreaEquiLateralRectangle();
    //       AreaRhombus();
    //        AreaParallelogram();
    //         AreaIsocelesTriangle();
    //          AreaRectangle();
    //           AreaTriangle();
    //           AreaCircle();
    return 0;
}

void CSACylinder()
{
    float r, h;
    cout << "enter radius and height of a cylinder" << endl;
    cin >> r >> h;
    float csa = 2 * 3.14 * r * h;
    cout << "CSA is " << csa << endl;
}

void TSACube()
{
    float a;
    cout << "enter side of a cube" << endl;
    cin >> a;
    float tsa = (6 * a);
    cout << "TSA is " << tsa << endl;
}

// **********Volume********

void VolumeSphere()
{
    float r;
    cout << "enter radius of a sphere" << endl;
    cin >> r;
    float vol = (4 * 3.14 * r * r * r) / 3;
    cout << "Volume is " << vol << endl;
}
void VolumeCylinder()
{
    float r, h;
    cout << "enter radius and height of a cylinder" << endl;
    cin >> r >> h;
    float vol = 3.14 * r * r * h;
    cout << "Volume is " << vol << endl;
}

void VolumePyramid()
{
    float b, l, h;
    cout << "enter lenght, base and height of a pyramid" << endl;
    cin >> l >> b >> h;
    float vol = (l * b * h) / 3;
    cout << "Volume is " << vol << endl;
}

void VolumePrism()
{
    float b, l, h;
    cout << "enter lenght, base and height of a prism" << endl;
    cin >> l >> b >> h;
    float vol = l * b * h;
    cout << "Volume is " << vol << endl;
}

void VolumeCone()
{
    float r, l, h;
    cout << "enter radius and height of cone" << endl;
    cin >> r >> h;
    float vol = (3.14 * r * r * h) / 3;
    cout << "Volume is " << vol << endl;
}

//******************PERIMETER**********
void PeriRectangle()
{
    float l = 0, b = 0;
    cout << "enter side rectangle in order l, b" << endl;
    cin >> l >> b;
    float peri = 2 * (l + b);
    cout << "Perimeter is: " << peri << endl;
}

void PeriSquare()
{
    float a = 0;
    cout << "enter side square" << endl;
    cin >> a;
    float peri = 4 * a;
    cout << "Perimeter is: " << peri << endl;
}

void PeriRhombus()
{
    float a = 0;
    cout << "enter side rhombus" << endl;
    cin >> a;
    float peri = 4 * a;
    cout << "Perimeter is: " << peri << endl;
}

void PeriParallelogram()
{
    float a = 0, b = 0;
    cout << "enter side  and base parallelogram" << endl;
    cin >> a >> b;
    float peri = 2 * (b + a);
    cout << "Perimeter is: " << peri << endl;
}

void PeriEquilateralTriangle()
{
    float a = 0;
    cout << "enter side of traingle" << endl;
    cin >> a;
    float peri = 3 * a;
    cout << "Perimeter is: " << peri << endl;
}

void PeriCircle()
{
    float r = 0;
    cout << "enter radius of circle" << endl;
    cin >> r;
    float peri = 3.14 * r * 2;
    cout << "Perimeter is: " << peri << endl;
}

////*********AREA **************
void AreaRhombus()
{
    float d1 = 0, d2 = 0;
    cout << "enter daigonals of an rhombus in order d1,d2" << endl;
    cin >> d1 >> d2;
    float area = (d1 * d2) / 2;
    cout << "Area is: " << area << endl;
}

void AreaParallelogram()
{
    float b = 0, h = 0;
    cout << "enter base & height of an Parallelogram in order b,h" << endl;
    cin >> b >> h;
    float area = b * h;
    cout << "Area is: " << area << endl;
}
void AreaEquiLateralRectangle()
{
    int a = 0;
    cout << "enter side of equilateral triangle" << endl;
    cin >> a;
    float area = (sqrt(3) * a * a) / 4;
    cout << "Area is: " << area << endl;
}
void AreaRectangle()
{
    int l = 0, b = 0;
    cout << "enter length & breadth of Rectangle in order l,b" << endl;
    cin >> l >> b;
    float area = l * b;
    cout << "Area is: " << area << endl;
}

void AreaIsocelesTriangle()
{
    float b = 0, h = 0;
    cout << "enter base & height of an Isoceles Triangle in order b,h" << endl;
    cin >> b >> h;
    float area = 0.5 * b * h;
    cout << "Area is: " << area << endl;
}

void AreaTriangle()
{

    float a = 0, b = 0, c = 0;
    cout << "enter all sides of Triangle in order a,b,c" << endl;
    cin >> a >> b >> c;
    float s = (a + b + c) / 2;
    float partial = s * (s - a) * (s - b) * (s - c);
    float area = sqrt(partial);
    cout << "Area is: " << area << endl;
}

void AreaCircle()
{
    float r = 0;
    cout << "enter radius of circle" << endl;
    cin >> r;
    float area = 3.14 * r * r;
    cout << "Area is: " << area << endl;
}