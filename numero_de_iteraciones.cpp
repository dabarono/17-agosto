#include<iostream>
#include<cmath>
//#include<fstream>

double es(double x, int n){
  double f=1;
  int i;
  double a_0=1;
  for(i=0;i<n;i=i+1){
    a_0=a_0*(-x)/(i+1);
    f=f+a_0;
  }
  return f;
}

int main(void){
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  //ofstream exp("exp.txt");
  double x=1;
  int l=1;
  for(x;x<=100;x=x+1){
  while(fabs(es(x,l+1)-es(x,l))>0.000001){
  l=l+1;                                      
  }
  std::cout<<l<<" "<<x<<" "<<es(x,l)<<" "<<exp(-x)<<" "<<fabs(exp(-x)-es(x,l))/exp(-x) <<std::endl;
  //std::exp<<l<<" "<<x<<" "<<es(x,l)<<" "<<exp(-x)<<" "<<fabs(exp(-x)-es(x,l))/exp(-x) <<std::endl;
  }
  system("PAUSE");
  //exp.close();
}
