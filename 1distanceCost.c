#include <stdio.h>
int main(){
    float p,s;
    scanf("%f",&s);
    if(0<s&&s<250){
      p=p;
    }else if(s>=250&&s<500){
      p=0.98*p;
    }else if(s>=500&&s<1000){
      p=0.95*p;
    }else if(s>=1000&&s<2000){
      p=0.92*p;
    }else if(s>=2000){
      p=0.9*p;
    }







}