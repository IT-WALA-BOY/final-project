#include<iostream>
using namespace std;

int count = 0; // A global variable

///////////1-Display- Function//////////////
void display(int arr[])
{
if(count==0)
	
cout<<"List is empty\n";

else
	{

for(int i=0; i<count; i++)

cout<<arr[i]<<endl;
	
	}
}

////////2-Add elements-Function////////////
void Addelement(int arr[], int size)
{	int value;  
	if(count<size)
	{
	 for(int i=0; i<size; i++)
	 {
	 cout<<"Enter value  "<<i<<"\t\t";
	 cin>>arr[i];
	 count++;
	}
}
	else
	{
		cout<<"List is full";
	}
}

/////////////////3-Delete-Element-Function//////
void delelement(int arr[])	
{
int i, index;
cout<<"Enter Index of Element to delete";
cin>>index;
i=index;
while(i<=count)
{
arr[i]=arr[i+1];
i=i+1;
}
count=count-1;
}
/////////////////4-Search-Element-Function//////
void search(int arr[])	
{
int j=0, key;
cout<<"Enter key value\t";
cin>>key;
if(count==0)
{cout<<"list is empty";}
else
{

while(j<count)
{
if(arr[j]==key){
break;
}
j=j+1;
cout<<"Element found at   "<<j;
}
}
}
/////////////////5-Get-Size of List-Function//////
int listsize(int arr[])
{
	return count;
}
////////////////6-Get-Copy of List-Function/////
void copyelement(int arr[],int size)
{
int cArr[5];
cout<<"\n\tOriginol list is : ";
for(count=0; count<size; count++)
{
	cout<<arr[count]<<" ";
}	
cout<<"\n\tCopy of list is : ";
for(count=0;count<size;count++)
{
	cArr[count]=arr[count];
	cout<<cArr[count]<<" ";
}
}
///////////////7-Clear-List /////////////////////
int clearlistElements(int arr[])
{
	count=0;
	return count;
}
//////////////////8-Update-list ///////////////
void updatelistElements(int arr[])
{
int update, pos;
cout<<"Enter value";
cin>>update;
cout<<"Enter Position";
cin>>pos;
int j=count;
while( j>=pos)
{
	arr[j+1]=arr[j];
	j=j-1; 
}
arr[pos]=update;
}
////////////////9-Insert-Element////////////
void insert_element_at_any_poisition(int arr[])
{
int newitem, pos;
cout<<"Enter value : ";
cin>>newitem;
cout<<"Enter Position : ";
cin>>pos;
count=count+1;
int j=count;
while( j>=pos) 
{
arr[j+1]=arr[j];
j=j-1; }
arr[pos]=newitem;
}

main() 
{

//////////User Interface/////////////////
    const int size=3;
    int m;  
 	int list[size];
while(true)
{ 		
   cout<<"\n\nEnter a Digit to Perform Required Operation on The List:\n\n";
   cout<<"\nPress 1:\tAdd Elements in the List";
   cout<<"\nPress 2:\tDisplay List Elements";
   cout<<"\nPress 3:\tDelete an Element  in The List";
   cout<<"\nPress 4:\tSearch an Element from The List";
   cout<<"\nPress 5:\tCount Elements in The List";
   cout<<"\nPress 6:\tCopy Elements to other list";
   cout<<"\nPress 7:\tClear All Elements in the LIst";
   cout<<"\nPress 8:\tUpdate the Element at a Given Position";
   cout<<"\nPress 9:\tInsert Element at Given Position";
   cout<<"\n\nYou Pressed:\t";
   
int choice;
cin>>choice;
   switch(choice) {
      case 1 :
  		Addelement(list, size);
        break;
      case 2 :
        cout<<"\nElements are:\n";
      	display(list);
        break;
      case 3 :
         delelement(list);
         break;
      case 4 :
         search(list);
         break;
     case 5 :
     	cout<<"Total no. of elements in the list are:\t ";
        m=listsize(list); 
        cout<<m;
         break;
     case 6 :
	 	copyelement(list,size);
		 break;    
     case 7:
    	clearlistElements(list);
     	break;
     case 8 :
	 		updatelistElements(list);
	 	break;	
	 case 9 :
	 	insert_element_at_any_poisition(list);
		 break;	
	  default :
         cout << "Invalid Choice" << endl;

   }
}
return 0;
}

