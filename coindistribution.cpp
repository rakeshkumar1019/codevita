#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arrvalue(int i,int j){
 //storing dinomination * 10 table
  int** arr=new int*[10];
  for(int i=0;i<10;i++){
    arr[i]=new int[10];
  }
  //inserting value in table
  arr[0][0]=0;
  arr[0][1]=0;
  arr[0][2]=1;

  arr[1][0]=0;
  arr[1][1]=0;
  arr[1][2]=2;

  arr[2][0]=0;
  arr[2][1]=1;
  arr[2][2]=1;

  arr[3][0]=0;
  arr[3][1]=1;
  arr[3][2]=2;

  arr[4][0]=0;
  arr[4][1]=2;
  arr[4][2]=1;

  arr[5][0]=0;
  arr[5][1]=2;
  arr[5][2]=2;

  arr[6][0]=0;
  arr[6][1]=3;
  arr[6][2]=1;

  arr[7][0]=0;
  arr[7][1]=3;
  arr[7][2]=2;

  arr[8][0]=1;
  arr[8][1]=1;
  arr[8][2]=2;

  arr[9][0]=1;
  arr[9][1]=2;
  arr[9][2]=1;
  return arr[i][j];
}

int main(){
  int dinomination[3]={1,2,5};
  
  int n;
  cin>>n;


      //doing n-5 
      int temp=n-5;
      int temp_five=temp/5;
      int index=5+(temp%5);
      //we know the remaing no must be 5
      cout<<arrvalue(index-1,0)+temp_five<<" "<<arrvalue(index-1,1)<<" "<<arrvalue(index-1,2)<<endl;



} 

