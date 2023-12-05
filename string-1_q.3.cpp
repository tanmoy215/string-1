#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter a string : ";
    cin>>str;
     string ctr;
     ctr=str;
     int n = str.size();
     for(int i=0,j=n-1;i<j;i++,j--){
         int temp=str[i];
         str[i]=str[j];
         str[j]=temp;
     }
     if(str==ctr) cout<<"Palindrome";
     else cout<<"Not a palindrome";
}