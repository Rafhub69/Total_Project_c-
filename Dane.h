#pragma once
#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

class data_input
{
public:
    int data();
    float data_float();
    string data_string();
};

class birth
{
public:
    int rok = 0;
    int dzien = 0;
    int miesiac = 0;
};

class wycieczka
{
public:
    string name;
    string surname;
    int gender = 0;
    birth data_urodzenia;
};
