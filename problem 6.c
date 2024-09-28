#include<stdio.h>
  int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("Triangle \n");

    }else{
        printf("Sorry it's not a triangle \n");
    }
    return 0;

  }
