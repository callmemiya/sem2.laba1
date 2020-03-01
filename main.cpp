#include <iostream>
#include <fstream>
#include "uravnenie.h"
using namespace std;
int main() {
    int n;
    double a=0.0,b=0.0,c=0.0;
    cout <<"Counts of equations:";
    ifstream fin("Input.txt");
    if (!fin){
         cout << endl<< "Error, file not found"<< endl;
         return 1;
    }
    fin>>n;
    cout <<n <<endl;
    double dis;
    uravnenie **rav;
    rav=new uravnenie*[n];
    for (int i=0;i<n;i++){
        cout <<"Equation №" <<(i+1) <<":\n" <<"arguments:" <<endl <<"a:";
        fin>>a;
        cout <<a <<"  b:";
        fin>>b;
        cout <<b <<"  c:";
        fin>>c;
        cout <<c;
        cout <<endl;
        rav[i]=new uravnenie(a,b,c);
    }
    fin.close();
    ofstream fout("Output.txt",ios::app);
    for (int j=0;j<n;j++){
        dis=rav[j]->discrim();
        if (dis>=0){
            
            rav[j]->print("Output.txt");
            fout <<endl;
        }
    }
    fout.close();
    for (int i=0;i<n;i++) delete rav[i];
    delete[] rav;
    return 0;
}
