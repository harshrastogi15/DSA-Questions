#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
   string str;
   int count = 0, flag;
   printf("Enter any str: ");
   cin>>str;
   if ((  str[0] >= 'a' &&   str[0] <= 'z') || (  str[0] >= 'A' &&   str[0] <= 'Z') || (  str[0] == '_')){
      for (int i = 1; i < str.size(); i++){
         if ((  str[i] >= 'a' &&   str[i] <= 'z') || (  str[i] >= 'A' &&   str[i] <= 'Z') || (  str[i] >= '0' &&   str[i] <= '9') || (  str[i] == '-')){
            count++;
         }
      }
      if (count == str.size()){
         flag = 0;
      }
   }
   else{
      flag = 1;
   }
   if (flag == 1)
      cout<<str<< " is not valid identifier\n";
   else
      cout<<str<< " is valid identifier\n";
   return 0;
}