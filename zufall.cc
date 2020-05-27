#include<cmath>




int main() {


  double zufall(){
    static int I = 1;
    int a = 5;
    int c = 3;
    int m = 16;

    I = (a*I+c)mod(m);

    double z = I/m;

    return z;
  }

  for()

}
