#include<iostream>
using namespace std;

//forward function declaration
int hidden(int num1, int num2);
int compute(int one, int two);


int main(){
 
 cout<<hidden(30,20)  <<" " << compute(10,hidden(30,20)) << endl;
 
 int x = 2, y = 8;
 cout<<compute(y,x)  <<endl;
 return 0;
}

//calculate the hidden value based on num1 and num2
int hidden(int num1, int num2)
{
 //if num1 more than20 
 //divide num2 by 10 and assign to num1
   if (num1 > 20)
       num1 = num2 / 10;
 else if (num2 > 20)//if num2 more than 20 divide num1 by 20
       num2 = num1 / 20;
       else
      return num1 - num2;
   return num1 * num2;
}
int compute(int one, int two)
{
   int secret = one;
   for (int i = one + 1; i <= two % 2; i++)
      secret = secret + i * i;
   return secret;
}

