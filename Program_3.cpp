/*Q3. Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not . For an array arr[n], search at the indexes arr[0], arr[2], arr[4],�.,arr[2k] and so on. Once the interval (arr[2k] < key <arr[2k+1]) is found, perform a linear search operation from the index 2k to find the element key. 
(Complexity < O(n), n = no. of elements to be scanned for searching.)*/ 

#include<iostream>
using namespace std; 
void js(int arr[],int n,intkey) {
int i=0; int j=2; int comp=0; 
while(arr[j]<=key &&j<n) {
comp++; i=j; j=j+2;
if(j>n-1) {
j=n; 
} 
} 
for(int k=i;k<j;k++) {
int count =0;
count++; 
if(arr[k]==key) {
cout<<"Key is present !\n"<<(comp+count)<<endl; 
} 
else{
cout<<"Key is not present !\n"<<(comp+count)<<endl;
break; 
} 
} 
}
int main() {
int t,n,arr[100],key;
cout<<"Enter test cases: ";
cin>>t;
while(t--) {
cout<<"\nEnter the no. of element in the array: "; 
cin>>n; 
cout<<"\nEnter the elements in the array: "; 
for(int i=0;i<n;i++) {
cin>>arr[i]; 
}
cout<<"Enter the value which you want to search: ";
cin>>key;
js(arr,n,key); 
}
return 0; 
} 
