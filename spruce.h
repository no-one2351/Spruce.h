/** @file Spruce.h
 * This is c++ utility header
 **/
//Made by:Arindam Trivedi
//You can redistribute and modify this library as you wish .
//BUT,you are strictly prohibited from distributing this library as
//your own creation or sell this library.
//
//
//This library was developed for the Tool Jam.
//This library was made with the intention to make
//C++ development easier for begginers.
//C++
//For setup and how to use this library , please visit :
//https://someyoutubelink.com/

//Since this library uses the iostream library as a base,
//you are free to use that library as well.
//Be sure to obey both library's agreement .

//The iostream agreement :
//
// Standard iostream objects -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/iostream
 *  This is a Standard C++ Library header.
 */

//
// ISO C++ 14882: 27.3  Standard iostream objects
//

#include <iostream>

#ifndef _SPRUCE_H
#define _SPRUCE_H 1

using namespace std;

///<outputs>
void Print(const char *msg)
{
    cout << msg;
}
void Print(char ch)
{
    cout << ch;
}
void Print(int i)
{
    cout << i;
}
void Print(float f)
{
    cout << f;
}
void Print(double d)
{
    cout << d;
}
void Print(bool b)
{
    cout << b;
}
///<\outputs>

///<inputs>
void GetInt(int &i)
{
    cin >> i;
}
void GetInt(int &i, const char *msg)
{
    cout << msg;
    cin >> i;
}
void GetFloat(float &f)
{
    cin >> f;
}
void GetFloat(float &f, const char *msg)
{
    cout << msg;
    cin >> f;
}
void GetChar(char &c)
{
    cin >> c;
}
void GetChar(char &c, const char *msg)
{
    cin >> c;
}
void GetDouble(double &d)
{
    cin >> d;
}
void GetDouble(double &d, const char *msg)
{
    cout << msg;
    cin >> d;
}
void GetBool(bool &b)
{
    cin >> b;
}
void GetBool(bool &b, const char *msg)
{
    cout << msg;
    cin >> b;
}
///<\inputs>

///<math>
void Sum(int x,int y){
    int z = x+y;
    cout << z;
}
void Diff(int x,int y){
    int z = x-y;
    cout << z;
}
void Prod(int x,int y){
    int z = x*y;
    cout << z;
}
void Qout(int x,int y){
    int z =  x/y;
    cout << z;
}
///<\math>
///<misc>
void newl()
{
    cout << '\n';
}
void ring()
{
    cout << '\a';
}
void section(const char *name, bool skip)
{
    if (skip ==true)
    {
        cout << '\n'<< '\n'<< name << '\n';
    }
    if (skip == false)
    {
        cout << '\n'<< name << '\n';
    }
}
void End()
{
    system("pause");
}
///<\misc>

///<text adventure>

///NOTE : this @section is under development
void Case(const char *options[], int arrayLength, int &result)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << i << "." << options[i] << endl;
    }
    cout << "What will you do?\n";
    cin >> result;
}
///<\text adventure>
#endif