#include<bits/stdc++.h>
using namespace std;

int main()
{


 int i, size;

 cout<<"=======================================\n";
 cout<<"Enter The Size of The Array ";
 cout<<"\n=======================================\n";

 cin>>size;

    int array[size];
    int *ptr;

 cout<<"=======================================\n";
 cout << "Enter The Elements Of An array";
 cout<<"\n=======================================\n";

 for (i = 0; i < size; i++) 
 {
        cin>>array[i];    
 }

 cout<<"=======================================\n";
 cout << "Displaying An Address Using An Arrays";    
 cout<<"\n=======================================\n\n";
 for (i = 0; i < size; i++) 
 {
        cout << "Address Of " << array[i]<<" Using Array is ===> " << &array[i]<<endl;    
 }

    cout<<"\n=======================================\n";
 cout << "Displaying An Address Using Pointers";
 cout<<"\n=======================================\n";
    for (i = 0; i < size; i++) 
 {
  ptr = &array[i]; 
        cout << "Address Of " << array[i] << " Using Pointers is ===> "<<ptr<<endl;
 }
 cout<<"\n========================================\n";
    return 0;
}
