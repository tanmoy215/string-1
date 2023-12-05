#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
 int count=0;
 string str;
 cout<<"enter string : ";
 cin>>str;
 int i=0;
 while(str[i]!='\0'){
    if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
    }
    else{
        count++;
    }
    
    i++;
 }
 cout<<"final Ans is : "<<count;
}