        #include <iostream>
       #include <conio.h>
		using namespace std;
       struct Book   // here we define the structure of book
       {
            int b_id;        // we intiliaze three variables in book class 
            char b_name[30];
            int price;
       };

       struct Order   // here we define the structure of order
       {
            int order_id; // here we declare two variables in stryctur of order
            Book b[5];
       };

       int main()    // from herer main function is starting
       {
            Order c;
            cout<<"Enter your Order Id: ";    // this statement will display on output screen
            cin>>c.order_id;        // this statement will take data from user
            cout<<"\n";
            cout<<"Enter details of five books\n ";     // this statement will display on output screen
            for (int i=0;i<5;i++)      // here in this statemnet we are making a conditioon
           {
               cout<<"Enter Book Id: ";    // All the"cout" output statements will display on output screen
               cin>>c.b[i].b_id;
               cout<<"\nEnter Book Name: ";
               cin>>c.b[i].b_name;                     // And all the cin statements will takre data from user 
               cout<< " \nEnter Price of the Book: ";
               cin>>c.b[i].price;
          }
          cout<<"\n Order details is as follows: "<<endl;
          cout<<" Order Id: "<<c.order_id<<endl;
          cout<<" Book Id\t Book Name \t Price "<<endl;
         
            for (int i=0; i<5; i++)   // here we are again making a condition 
            {
                   cout<<c.b[i].b_id<<"\t\t"<<c.b[i].b_name<<"\t\t\t\t\t"<<c.b[i].price<<endl;
             }
           return 0;
       }
