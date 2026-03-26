
 #include <iostream>
 using namespace std;
 
 int main() {
 
     int X ,Y ; 
     cin>> X ;
     cin>> Y ;
  if (X>0 and Y>0)
  {
    cout<< "1st Quadrant" <<endl;
  }else if (X<0 and Y>0 )
  {
     cout<< "2nd Quadrant" <<endl;
  }else if (X<0 and Y<0)
  {
     cout<< "3rd Quadrant" <<endl;
  }else if (X>0 and Y<0)
  {
     cout<< "4th Quadrant" <<endl;
  }else if (X=0 and Y!=0  )
  {
     cout<< "Y axis" <<endl;
  }else if (Y= 0 and X!=0)
  {
     cout<< "X axis" <<endl;
  }else{
     cout<< "Origin" <<endl;
  }
  
  
  
  
  
  
     return 0;
 }