/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ComplexNum.h
 * Author: Eagleye
 *
 * Created on August 27, 2018, 12:40 AM
 */

#ifndef COMPLEXNUM_H
#define COMPLEXNUM_H

class ComplexNum {
private:
    int nReal;
    int nImg;

public:
    ComplexNum();

    ComplexNum(int, int);

    int getNreal() const {
        return nReal;
    }

    int getNImg() const {
        return nImg;
    }

    // C = C1 + C2 -> C = C1.operator+(C2); süper açıklama

    ComplexNum operator+(const ComplexNum&);

    void operator++();

    void operator++(int);

    friend ComplexNum operator+(int, const ComplexNum&);

};

#endif /* COMPLEXNUM_H */

