#include<bits/stdc++.h>

using namespace std;
void printt(int a){

for (int  i = 0; i <a; i++)
{
    
for (int j=0;j<(a-i-1);j++){
   cout<<" ";
}

// for (int l = 0; l <= i; l++)
// {
//    cout<<"*";
// }

// for (int l = 1; l <= i; l++)
// {
//    cout<<"*";
// }

 
// Alternate loop which can replace above two fpr loops
 
  for (int  m=  0;m < 2*i+1; m++)
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