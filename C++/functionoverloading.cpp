#include<iostream>
using namespace std;

class funover
{
    public: 
    int area( int r)
    {
        return (3.14*r*r); 
    }

    int area(int l, int b )
    {
        return l*b; 
    }

    int area (int b, int h ,int a)
    {
        return a*b*h;
    }
}; 


int main() 
{
    funover obj;
    int choice ,done=0;
    int area,r,l,b,a; 
     cout<<"select the geometric object for which you want to find the area "; 
     cout<<"1) circel\n 2)rectangle\n 3) triangle \n"; 
     cin>>choice; 

     while(!done)
     {
     switch(choice)
     {
        case 1 : cout<<"entrer the radius of the circle\n "; 
                  cin>>r; 
        
                   area = obj.area( r );
                   cout<<"area of the circle is "<<area<<endl;
                   break; 
         case 2: cout<<" enter the lenght and breadth of the rectangle\n\n"; 
                   cin>>l; 
                   cin>>b; 
                   area = obj.area(l,b);
                   cout<<"the area of the rectangle is : "<<area<<endl; 
           case 3 : cout <<" enter the 3 sides of the triangle to get the area\n "; 
                    cin>>a>>b>>l; 
                    area = obj.area(a,b,l); 
                    cout<<"the area triangle is :"<<area<<endl; 
                    break ;
          case 4: done =0; 
                   break; 
        default : cout<<"invalid entry"; 
                   break; 
     }
}
return 0; 
}
