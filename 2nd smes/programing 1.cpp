#include <iostream>
using namespace std;

int main (){
int num, n;
int sum = 0;
int rev = 0;
cout << "Enter any integer: ";
cin >> num;
if (num < 0)
num*=-1;
while (num > 0){
rev *= 10;
rev += (num % 10);
num /= 10;
}
cout << "The digits are: ";
while (rev!=0){
n = rev % 10;
rev /=10;
sum += n;
cout << n << " ";
}
cout << endl << "Sum of digits: " << sum << endl;
}
