#include<iostream>
using namespace std;

int main()
{
    //initialization of an ARRAY:-
    int a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //User Input Initialization of an array:-    
    int n; //n is the number of elements in the array
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    //Printing an array:-
    for(int i = 0; i < n; i++)
        cout << a[i] <<",";

    return 0;
}