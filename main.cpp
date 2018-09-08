/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on August 27, 2018, 12:40 AM
 */

#include <cstdlib>
#include <iostream>

#include "ComplexNum.h"

using namespace std;

/*
 * 
 */
int main() {

    ComplexNum c1(3, 4);
    ComplexNum c2(9, 7);
    ComplexNum c;

    c = c1 + c2;

    cout << "Sum of c1 and c2 is (" << c.getNreal() << " + " << c.getNImg() << "i)" << endl;

    ++c;
    cout << "++c is (" << c.getNreal() << " + " << c.getNImg() << "i)" << endl;

    c++;
    cout << "c++ is (" << c.getNreal() << " + " << c.getNImg() << "i)" << endl;

    c = 5 + c1;
    
    cout << "Sum of 5 and (3 + 4i) is (" << c.getNreal() << " + " << c.getNImg() << "i)" << endl;

}

