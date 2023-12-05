#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string : ";
    getline(cin,str);
    int len=str.size();
    int x=0;
    for(int i=0;i<len;i++){
        x*=10;
        x+=str[i]-48;
    }
    cout<<x;
}