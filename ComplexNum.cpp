/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ComplexNum.cpp
 * Author: Eagleye
 * 
 * Created on August 27, 2018, 12:40 AM
 */

#include "ComplexNum.h"

ComplexNum::ComplexNum() {
}

ComplexNum::ComplexNum(int r, int i) {
    nReal = r;
    nImg = i;
}

ComplexNum ComplexNum::operator+(const ComplexNum& cn) {
    ComplexNum newCn;


    newCn.nReal = nReal + cn.nReal;
    newCn.nImg = nImg + cn.nImg;

    return newCn;
}

void ComplexNum::operator++() {
    ++nReal;
    ++nImg;
}

void ComplexNum::operator++(int x) { // (int x burada dummy parametre)
    nReal++;
    nImg++;
}

ComplexNum operator+(int x, const ComplexNum& cn) {
    ComplexNum sum;
    sum.nReal = x + cn.nReal;
    sum.nImg = cn.nImg;
    return sum;
}



