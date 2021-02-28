#include <iostream>
 #include <fstream>
  using namespace std;
   int main()
    {
	  ofstream outFileNum;
	  outFileNum.open("Numbers.txt");
	    cout<<"Writing number from 1 to 25 in"   
           <<" file Number.txt."<<endl;
	  int c = 1; 
	    while(c <= 25)
		  {
		     outFileNum<<c<<endl;  
			  c++;  
			  } 
			   outFileNum.close(); 
			    cout<<"Numbers are written to file."; 
			 } 
