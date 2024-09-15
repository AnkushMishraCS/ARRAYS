#include<bits/stdc++.h>

using namespace std;
void printt(int a){

for (int  i = 0; i <a; i++)
{
     

 
 
  for (int  m=  0;m <= i; m++)
  {
   cout<<"*";
  }
  
 
 
cout<<endl;

}

for (int i = 0; i < a; i++)
{
    for ( int j = a-i-1; j >0;j--)
    {
        cout<<"*";
    }
cout<<endl;
    
}

}
 

 

 int main(){
int a;
cin>>a;

printt(  a);
 




return 0;

 }