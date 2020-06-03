#include<cmath>
#include<iostream>
#include <iomanip>

double zufall(int old,int a, int c, int m){
    static int I;
    I = (a*old+c)%(m);


    return I;
  }


int main() {
  using namespace std;

  float r = 689;
  float ry = 312;
  float x = r;
  float y = ry;
  float treffer = 0;
  float zaehler = 100000;
  float a = 205;
  float c = 29573;
  float m = 139968;
  
  for(int N = 0; N < zaehler; N++){
    
    r = zufall(r, a, c, m);
    ry = zufall(ry, a, c, m);
    float zy = ry/m;
    float z = r/m;

    float rad = sqrt((z*z)+(zy*zy));
    if(rad < 1){
      treffer++;
    }

    //cout <<"X: "<< z <<" Y: " << zy << " Radius: " << rad << endl;
  }

  float pi = 4*(treffer/zaehler);
  float p = M_PI/4;
  float var = p*(1-p)*zaehler;
  float sig = 4*sqrt(var)/zaehler;
  float exp = p*zaehler;
  
  cout << "a: " << a << endl;
  cout << "c: " << c << endl;
  cout << "m: " << m << endl;
  cout << "X0: " << x << endl;
  cout << "Y0: " << y << endl;
  cout << "N: " << zaehler << endl;
  cout << "Erwartungswert: " << exp << endl;
  cout << "Varianz: " << var << endl;
  cout << "N_in: " << treffer << endl;
  cout << "Pi: " << pi << endl;
  cout << "Sigma: " << sig << endl;
  cout <<"a="<<a<<" c="<<c<<" m="<<m<<" X0="<<x<<" Y0="<<y<<" "<<zaehler<<" "<<exp<<" "<<var<<" "<<treffer<<" "<<pi<<" "<<sig<< endl;

  
}
