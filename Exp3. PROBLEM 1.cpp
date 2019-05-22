#include<iostream>

using namespace std;

int main ()

{
    int arr[10], n, i, max, min, sum, average;
    
    
    cout << "Please Enter the number of element that the array will take : ";
    cin >> n;
    cout << "Please Enter each elements of the array : ";
    
    
    for (i = 0; i < n; i++)
        cin >> arr[i];
        
        
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    
    sum = 0;
    for (i = 0; i < n; i++)
    {
    	sum = sum + arr[i];
    	average = sum / n;
	}
	
    cout << "Based on the given elements..." "\n" << endl;
    cout << "The Largest integer is : " << max << "\n" << endl;
    cout << "The Smallest integer is : " << min << "\n" << endl;
    cout << "The Total or Sum of the integers is:  " << sum << "\n" << endl;
    cout << "The Average of the integers is:  " << average << "\n" << endl;
    
    
    return 0;
}
