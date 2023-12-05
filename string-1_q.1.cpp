#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string str;
  cout<<"enter a string : ";
  cin>>str;
  int i=0;
  while(str[i]!='\0'){
    if(i%2!=0){
        str[i]='#';
    }
    i++;
  }
  cout<<"Final ans is : "<<str;
}