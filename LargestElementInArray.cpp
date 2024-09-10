#include<iostream>
using namespace std;



int main(){

  int arr[]={1,2,23,4};

  int size=sizeof(arr)/sizeof(int);

   int max=-555;

   for (int i = 0; i <size ; i++)
   {
    if(arr[i]>max){


max=arr[i];

    }
   }
   
cout<<"The largest element in the array  is "<< max;



    return 0;
}