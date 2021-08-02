#include <bits/stdc++.h>
using namespace std;
int main() {
  string strS,strT; 
  cin>>strS>>strT;
  map<char,int> vowels;
  vowels['A']=1;
  vowels['E']=1;
  vowels['I']=1;
  vowels['O']=1;
  vowels['U']=1;
  int i=strS.size(),j=strT.size();
  i--;
  j--;
  for(;i>=0;i--) {
     if(vowels.find(strS[i])!=vowels.end()) {
         break;
     }
  }
  for(;j>=0;j--) {
      if(strT[j]==strS[i]) {
          break;
      }
  }
  if(strT.size()==j) {
      cout<<"NO"<<endl;
  }
  else {
      while(i<strS.size()&&j<strT.size()&&strS[i]==strT[j]) {
        i++;
        j++;
     }
    if(i==strS.size()&&j==strT.size()) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
  }
  
}