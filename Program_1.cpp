/*Q1. Given an array of non-negative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. 
(Time Complexity = O(n), where n is the size of input) */

    
#include<iostream>
using namespace std; 
int main() {
int t;
cout<<"Enter the number of test cases: ";
cin>>t;
while(t != 0) { 
int n, key = -1, i;
cout<<"Enter the size of array: "; 
cin>>n;
int arr[n]; 
cout<<"Enter the elements: ";
for(int i=0 ; i<n ; i++) 
   cin>>arr[i]; 
cout<<"Enter the key: "; 
cin>>key;
for(i=0 ; i<n ; i++) {
if(key == arr[i]) 
{
  cout<<"Element found!"<<endl; break; 
} 
} 
if(i== n) {
cout<<"Element not found!"<<endl;
cout<<"Total number of comparison: "<<i<<endl; 
} 
else{ cout<<"Tot al numbe r of comparison: "<<i+1<<en dl; 
}
t--; 
} 
return 0; 
} 



