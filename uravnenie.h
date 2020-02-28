#ifndef uravnenie_h
#define uravnenie_h
#include <iostream>
using namespace std;
class uravnenie{
    double a,b,c;
public:
    uravnenie();
    uravnenie(double d, double e, double f);
    void print(const char *f);
    double discrim();
};
#endif /*uravnenie_h*/
