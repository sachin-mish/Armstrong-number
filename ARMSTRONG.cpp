// TO FIND ARMSTRONG NUMBER 
#include <iostream>

#include<math.h>

using namespace std;

int main() {
  
 int n;

   cin>>n;

   int sum=0;

   int original=n;
 
  while(n>0){
     
 int lastnumber=n%10;

      sum+=pow(lastnumber,3);
  
    n=n/10;
  
 }
   if(sum==original){

cout<<"Armstrong number"<<endl;

}

else{

cout<<"Not a Armstrong number";
 
}
 
return 0;

}