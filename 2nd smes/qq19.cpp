#include <iostream>
using namespace std;
int main()
{
 double sale , bonous;
cin>> sale;
 if(sale>20000)
 bonous=0.10;
 else if(sale>10000 && sale<=20000)
 bonous=0.50;
 else
 bonous=0; 
}
