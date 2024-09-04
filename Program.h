#ifndef PROGRAM_H
#define PROGRAM_H
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#pragma once

class Program
{
public:
    void Menu();
    void DegerGir();
    void Tablo();
    void DersProgrami();
private:
    int dersSayisi;
    int *dersSaatleri;
    //int toplamDersSaati = 0;
    string *dersAdlari;
    string dersProgrami[8][5] = 
    {
        {"X" , "X" , "X" , "X" , "X"},
        {"X" , "X" , "X" , "X" , "X"},
        {"X" , "X" , "X" , "X" , "X"},
        {"X" , "X" , "X" , "X" , "X"},
        {"X" , "X" , "X" , "X" , "X"},
        {"X" , "X" , "X" , "X" , "X"},
        {"X" , "X" , "X" , "X" , "X"},
        {"X" , "X" , "X" , "X" , "X"},
    };

};
#endif