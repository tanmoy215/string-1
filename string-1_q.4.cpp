#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string str;
   cout<<"enter a string : ";
   getline(cin,str);
   int n = str.size()/2;
   reverse(str.begin()+n,str.end());
   cout<<str;
}