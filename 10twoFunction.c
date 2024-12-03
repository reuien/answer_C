#include <stdio.h>
#include <math.h>
//一元二次方程
int main(){
  double a=0,b=0,c=0;
  scanf("%d %d %d",&a,&b,&c);
  double judge=b*b-4*a*c;
  double x1 = ((-b)+sqrt(judge))/(2*a);
  double x2 = ((-b)-sqrt(judge))/(2*a);
  printf("%.2lf,%.2lf",x1,x2);
  return 0;
}
