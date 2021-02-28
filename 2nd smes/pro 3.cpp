// C++ program to find count of multiples of 3 and 5 in {1, 2, 3, ..n} 
#include <iostream> 
using namespace std; 
  
unsigned countOfMultiples(unsigned n) 
{ 
   // Add multiples of 3 and 5.  Since common multples are 
   // counted twice in n/3 + n/15, subtract common multiples 
   return (n/3 + n/5 - n/15); 
} 
  
// Driver program to test above function 
int main() 
{ 
   cout << countOfMultiples(6) << endl; 
   cout << countOfMultiples(16) << endl; 
   return 0; 
} 

