#include<iostream>

 using namespace std;
bool checksorted(int arr[],int size){

 for (int  i = 0; i <size-1; i++)
 {

     if (arr[i]>arr[i+1])
     {
       return false;
     }
     
 

 }
 
return true;


}
 int main(){
 
   int arr[6]={11,4,2,3,4,3};
   int brr[4]={1,2,3,4};
  
   
if(checksorted(arr,6))
cout<<"yes the array is Sorted";
else
cout<<"NO the array is not sorted ";





    return 0;
 }