#include <stdio.h>
#include "uravnenie.h"
using namespace std;
    uravnenie::uravnenie(double d, double e, double f){
        a=d;
        b=e;
        c=f;
    }
    void uravnenie::print(const char *f){
        ofstream fout(f, ios::app);
        fout <<a <<"xˆ2+" <<b <<"x+" <<c;
    }
    double uravnenie::discrim(){
        return b*b-4*a*c;
    }
