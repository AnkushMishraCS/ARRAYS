#include<bits/stdc++.h>

using namespace std;
void printt(int a){

for (int  i = 0; i <a; i++)
{
    
for (int j=0;j<(a-i-1);j++){
   cout<<" ";
}

 
 
  for (int  m=  0;m < 2*i+1; m++)
  {
   cout<<"*";
  }
  








 
cout<<endl;

}

for (int  i = 0; i <a; i++)
{
    
for (int j=0;j<i;j++){
   cout<<" ";
}

 

  for (int  m= (a-i)*2-1;m >0; m--)
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