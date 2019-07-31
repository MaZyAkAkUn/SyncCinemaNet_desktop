#include <iostream>
#include "inc/BaseClass.h"
using namespace std;

int main(){
    BaseClass feref;
    cout<<feref.fe<<endl;
    feref.funt();
    cout<<"Hello World!"<<endl;
}