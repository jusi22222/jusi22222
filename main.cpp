   // Lab_02.cpp
   // Онопчук Максим
   // Лабораторна робота No 2.1
   // Лінійні програми.
   // Варіант 13
   #include <iostream>
   #include <cmath>
using namespace std;
int main() {
       double a;
       double b;
       double z1;
       double z2;
cout<<"a=";cin >>a;
cout<<"b=";cin >>b;
z1 = (sin(a)+cos(2*b-a))/(cos(a)-sin(2*b-a));
z2 =(1+sin(2*b))/(cos(2*b)) ;
       cout << endl;
       cout << "z1 = " << z1 << endl;
       cout << "z2 = " << z2 << endl;
return 0;
}
