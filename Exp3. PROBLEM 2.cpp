#include <iostream>

using namespace std;

int main()
{

int provinceA[7],provinceB[7],provinceC[7],i;

    cout << "Enter all temperature for a week of Province A, Province B, and then Province C. \n";


    for (i=1;i<8;i++)
       { 
          cout<<"Province A, Day "<<i<<": ";
        cin>>provinceA[i];
       }

    for (i=1;i<8;i++)
	   {
        cout<<"Province B, Day "<<i<<": ";
        cin>>provinceB[i];
       }

    for (i=1;i<8;i++)
	   {
        cout<<"Province C, Day "<<i<<": ";
        cin>>provinceC[i];
       }

    cout << "\n\nDisplaying Values:\n" "\n";

    for (i=1;i<8;i++)
       {
       cout<<"Province A, Day "<<i<<": ";
       cout<<provinceA[i]<<endl;
       }

    for (i=1;i<8;i++)
	   {
       cout<<"Province B, Day "<<i<<": ";
       cout<<provinceB[i]<<endl;
       }

    for (i=1;i<8;i++)
	   {
        cout<<"Province C, Day "<<i<<": ";
       cout<<provinceC[i]<<endl;
       }

return 0;

}
