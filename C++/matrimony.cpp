#include<iostream> 
#include<iomanip>
#define MAX 50
using namespace std; 


 
 class bride
 {  
    
private:
    char name[MAX];
    char age[MAX]; 
    char salary[MAX];
    char caste[MAX];
  
public:
    void getdata()
    {
        cout<<"enter the bride NAME \n age\n salary\n caste\n"; 
        cin>>name; 
        cin>>age; 
        cin>>salary; 
        cin>>caste;


    }
    void print()
    {
        cout<<"your bride name is : "<<name; 
        cout<<"AGE IS :"<<age; 
        cout<<"SALARY :"<<salary; 
        cout<<"CASTE IS :"<<caste; 
    }


 };


class groom
 {   private :
    char name[MAX];
    char age[MAX]; 
    char salary[MAX];
    char caste[MAX];


public:
    void getdata()
    {
        cout<<"enter the groom NAME \n age\n salary\n caste\n"; 
        cin>>name; 
        cin>>age; 
        cin>>salary; 
        cin>>caste;


    }
    void print()
    {
        cout<<"your groom name is : "<<name; 
        cout<<"AGE IS :"<<age; 
        cout<<"SALARY :"<<salary; 
        cout<<"CASTE IS :"<<caste; 
    }
 };

    int main()
    {
        bride b[4]; 
        groom g[4]; 
      int n; 
      cout<<"hello , every one WELCOME to the place where you can find LOVE <3 OF YOUR LIFE\n\n"; 
 cout<<"JAY 'S MATRIMONY.COM\n\n";

           cout<<"enter how many bride and groom MATCHES your wanna pair\n\n"; 
           cin>>n; 
             for(int i =0; i<n; i++)
             {
                b[i].getdata(); 
                g[i].getdata(); 
             }

             cout<<"your entered pair of bride and grrom on server side is "; 
             for(int i =0; i<n; i++)
             {
                b[i].print(); 
                g[i].print(); 

             }

     
     
     
      for(int i =0; i<n;i++)
     {
        for(int j=0;j<n;j++)
        {

        
        if((b[i].salary+g[j].salary)>100000 && b[i].caste==g[j].caste)
        {
            printf("you have matched up with groom/bride")
            g[i].print();
            b[i].print();
        }
        }

     }
             return 0; 
    }
