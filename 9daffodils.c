#include <stdio.h>//水仙花数
int main(){
  int i=100;
  int ones_digit=0;
  int tens_digit=0;
  int hundred_digit=0;
  for(i=100;i<1000;i++){
    ones_digit=i%10;
    hundred_digit=i/100;
    tens_digit=(i/10)%10;
    if((ones_digit*ones_digit*ones_digit)+(tens_digit*tens_digit*tens_digit)+(hundred_digit*hundred_digit*hundred_digit)==i){
     printf("%d ",i);
    }
  }
  return 0;
}
