#include <iostream>


using namespace std;

int main()

{
   
   int number;
   int i;
   char character[number];
   

   cout << "Please enter your chosen number of elements: ";
   cin >> number; 


   for(i=0; i< number; i++)
     {
     char character[i];
     } 


   cout<< "So Now, Please Enter "<<number<< " characters " << ":" ;
   for (i= 0; i< number; i++)
    {	
	cin >> character[i];
    }


   cout<< "Based on the inputs, your array contains: " ;
   for (i= 0; i<number; i++)
    {
	cout << "'" << character[i] << "'" ",";
    }
   cout << endl;


    cout<< "Then, Its Reverse Order is: ";

    for (; i>=0; --i)
   {
	cout << character[i-1] ;
   }

	
	return 0 ;
}
