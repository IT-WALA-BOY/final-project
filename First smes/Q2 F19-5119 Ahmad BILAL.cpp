#include<iostream>
using namespace std;

double getUnitprice(int itemCode);   // here we are initliazing the geet functiom of double type 

int main(){ // From here main function is starting and we are declring two variables 

  double invoice[10][4];              // we are also initliazing the variables from some value 
  int i=0; char more; char date[100];

  cout << "\n\n** Here are the Item prices for your information*** \n\nItem code\tUnitPrice\n\n1\t100\n2\t200\n3\t300\nInvalidCode\t0\n\n";
  
  
  do {            // here we are using some do and if and else statements
 
    cout << "\n\nItem code: ";                       //here are some cout statements that will dispaly on output screen 
    cin >> invoice[i][0];                                                         // these cin statements will take data from user 
    cout << "Quantity : ";
    cin >> invoice[i][1];
    
    invoice[i][2] = getUnitprice(invoice[i][0]); 
    invoice[i][3] = invoice[i][1] * invoice[i][2]; 
    if(invoice[i][0]==1){                                        // here are some if else statements for conditions 
    	cout<<"this is item one it is the description of the item 1";
	}
	else if(invoice[i][0]==2){
			cout<<"this is item two it is the description of the item 2";
	}
	else if(invoice[i][0]==3){
			cout<<"this is item three it is the description of the item 3";
	}
    
    
    cout << "\n\nDo you have any other items to be entered next (y/n) ? ";
    cin >> more;
  
    i++;
  } while(more == 'y');       // in this while statement we are declaring y as equal to... more
    
 
  cout << "\n\n-----------------------------\n\n";
  cout << "Date : " << date << "\n\n";
  
  cout << "ItemCode|Quantity|UnitPrice|TotalPrice\n\n";
  int tot=0;                // this is an integer type variable 
  for(int k=0; k<i; k++)   
    
	{
		for(int l=0; l<4; l++)                 // in these statements we are makinf=g some conditions
		{
		    cout << invoice[k][l]  << "\t";		   
		}
		cout << endl;
		tot = tot + invoice[k][3];
	}
  if(invoice[i][1]>=10 && invoice[i][1]<=99){
                     tot=tot-(tot*0.1);
	}
  if(invoice[i][1]>=100){
                     tot=tot-(tot*0.2);
	}
  cout << "\n\nTotal : " << tot;
  cout << "\n\n-----------------------------\n\n\n";
  
  return 0;
}

double getUnitprice(int itemCode){
  double price;
  switch (itemCode)            // here we making a switch statements and making the following cases according to the requirement
  { 
    case 1: price = 100;
      break; 
    case 2: price = 200;
      break;
    case 3: price = 300;
      break;
    default: price = 0;
      break;
  }
  return price;
}
