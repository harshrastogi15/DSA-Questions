#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isValidString(string s){
 int len = s.length(),countA=0,countB=0,i=0;
 while(i < len){
  if(s[i] == 'a')countA++;
  else break;
  i++;
 }
 while(i < len){
  if(s[i] == 'b')countB++;
  else return false;
  i++;
 }
 if(countA==1 && countB==0) return true;
 else if(countA==2 && countB==1) return true;
 else if(countB==0) return false;
 return true;
}
int main(){
 int t;
 cin>>t;
 while(t--){
  string s;
  cin>>s;
  if(isValidString(s)){
   cout<<"accepted"<<endl;
  }else{
   cout<<"not accepted"<<endl;
  }
 }
 return 0;
}
