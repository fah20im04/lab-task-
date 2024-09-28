#include<stdio.h>
 int main(){
     char ch;
      scanf("%c",&ch);
     int a,b;
    scanf("%d%d",&a,&b);
   switch(ch){
   case '+':
       printf("%d\n",a+b);
       break;
   case '-':
       printf("%d\n",a-b);
       break;
   case '*':
       printf("%d\n",a*b);
       break;
   case '/':
       printf("%d\n",a/b);
       break;
   default:
       printf("What is it \n");
    }
              return 0;
 }
