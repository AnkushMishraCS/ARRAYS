#include<iostream>
using namespace std;

int main(){

   int arr[]={1,1,2,2,2,3,3,4,4,5,5};
    int size=sizeof(arr)/sizeof(int);
 
    
         int i=0;
        for( int j =1; j < size ; j++)
        {
            if(arr[j]!=arr[i])
            i++;
            arr[i]=arr[j];
        }
        
 size=i+1;

//    printing
for (int i = 0; i <size; i++)
    {
   
cout<<arr[i]<<" ";
    }
    return 0;
}