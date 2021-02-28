#include<iostream>
#include<conio.h>
using namespace std;
class Employee         // Here we are constructing a main class Employee
{
   char emp_name[30];   // Here we declare three variables in main and only class
   int emp_number;
   float basic, da, it, gross_salary, net_salary;
   public:                                    // in public memeber we are displaying cout statements and taking data from user through cin statements
   void read_emp_details(int count){
	 cout<<"\n\n** Enter Employee "<<count<<" Details **";
	 cout<<"\nEmployee Number: ";
	 cin>>emp_number;
	 cout<<"Employee Name: ";
	 cin>>emp_name;
	 cout<<"Basic Salary: ";
	 cin>>basic;
	 cout<<"\n---- Employee "<<count<<" Datails are saved ----\n\n";
   }
   float find_net_salary(){        // here we declare a variable and show some basic formula according to the question requirment 
      da = basic * 0.52;             // we are intiliazing the values in da 
      gross_salary = basic + da;
      it = gross_salary * 0.30;
      net_salary = (basic + da) - it;
      return net_salary;
   }
   void display_emp_details(int count){                    // as the same procedure is happeing here in empolyes details according to the statement
      cout<<"\n\n** Employee "<<count<<" Details **\n";
      cout<<"\nEmployee Number	: "<<emp_number;
      cout<<"\nEmployee Name	: "<<emp_name;
      cout<<"\nNet Salary: "<<net_salary;
      cout<<"\n--------------------------\n";
   }
};
int main(){            // from here main function is starting 
   Employee emp[100];       // we are declaring variabkes in main funtion
   int number_of_emp, count;
   //clrscr();
   cout<<"\nPlease enter the number of Employees (Max. 100): ";   // the cout statement will display on the output screen and preseting on screen 
   cin>>number_of_emp;
   for(count=0; count< number_of_emp; count++){      //here we making some for loop here for making conditions 
      emp[count].read_emp_details(count+1);
   }
   for(count=0; count < number_of_emp; count++){
      emp[count].find_net_salary();
   }
   for(count=0; count < number_of_emp; count++){
      emp[count].display_emp_details(count+1);
   }
   cout<<"\nPress any key to close!!!";
   getch();
   return 0;
}
