// O(nloglog n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sevie(int n){
  bool* arr=new bool[n+1];
  for(int i=0;i<=n;i++){
    arr[i]=true;
  }
  arr[0]=false;
  arr[1]=false;

  for(int i=2;i*i<=n;i++){
    if(arr[i]==true){
      for(int j=i*i;j<=n;j+=i){
        arr[j]=false;
      }
    }
  }
   for(int i=0;i<=n;i++){
     if(arr[i]==true){
       cout<<i<<" ";
     }
  }  

  return;
}
int main(){
  int n;
  cin>>n;
  
  sevie(n);
  

  
  
  
}
