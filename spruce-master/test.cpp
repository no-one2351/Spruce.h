#include "spruce.h"

int main()
{
    int num1 = 12;
    bool b = true;
    float f = 90.01;
    char c = 'a';
    double d = 30.9;
    section("Output Sample", false);
    Print("Hello World");newl();
    Print("This print function everything!ints,floats,bools,doubles etc.");newl();
    Print(num1);newl();
    Print(b);newl();
    Print(f);newl();
    Print(c);newl();
    Print(d);newl();
    section("Input and Math Sample",true);
    int s1;
    int s2;
    GetInt(s1,"Tell me a number");
    GetInt(s2,"Tell me another number");
    Print("All of the operations listed bellow");newl();
    Sum(s1,s2);newl();
    Diff(s1,s2);newl();
    Qout(s1,s2);newl();
    Prod(s1,s2);newl();
    End();
}