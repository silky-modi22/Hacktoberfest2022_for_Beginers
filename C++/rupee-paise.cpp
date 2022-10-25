#include<iostream>
using namespace std; 

  int main()
  {
       float r1,p1,r2,p2,r3=0,p3=0;
      cout<<"hey enter ur hostel other bills in ruppees and paisa to get the final amount\n";
      cout<<" enter the rupees of  bill 1\n";
       cin>>r1;
      cout<< "enter the paisa of bill 1\n";
      
      cin>>p1;
       cout<<" enter the rupees of  bill 2\n";
        cin>>r2;
      cout<< "enter the paisa of bill 2\n";
      
      cin>>p2;
      if((p3=p1+p2)>99)
       {
          p3=p3-100;
          r3++;
            r3+=r1+r2;
       }
       else
       {
            r3+=r1+r2;
            p3=p1+p2;
       }
       
       cout<< "total sum =" <<r3 <<"ruppes"<<p3<<"paisa"<<endl;

       return 0; 

  }
