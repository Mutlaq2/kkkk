#include <iostream>
#include<cmath>
using namespace std;

void trig_func(double angle) {
    double s = sin(angle);
    double c = cos(angle);
    cout<<"angle :"<<angle<<'\n';
    cout<<"sin :"<<s<<'\n';
    cout<<"cos :"<<c<<'\n';
}
int main ()
{
      double angle= 45;  
    trig_func(angle);
  return 0;  
}