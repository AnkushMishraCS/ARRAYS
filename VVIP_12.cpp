#include<bits/stdc++.h>

using namespace std;
void printt(int a){
int start=1;
for (int  i = 0; i <a; i++)
{
     
    
for (int j  = 1; j <=i; j++)
{
    cout<<j;
 
}
for(int j=(a-i-1)*2;j>=1;j--){
    cout<<" ";
}

for (int l = i; l >0;l--)
{
    cout<<l;
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