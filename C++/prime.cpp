#include<iostream>
using namespace std; 

int main()
{  int count =0;
    cout<<"the program to find the number of prime numbers betweeen 200 to 300 using for loop "; 
    for(int i =200;i<=500;i++)
    {
        if(i%2!=0)
        {
        count++; 
        cout<<i<<endl;
        }
        
    }
    cout<<"number of prime number between 200 to 500 is "<<count<<endl; 

}
