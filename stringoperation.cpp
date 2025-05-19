#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){ 
    string str="nitish kr";
    // string name = str.substr(0,8);
    // cout<<name<<endl;
    int len = str.length();
    cout<<len<<endl;
    // string h= str.replace(5,6,"n");
    // cout<<h<<endl;
    // reverse(str.begin(),str.end());
    // cout<<str;
    str.insert(9," singh");
    cout<<str;
    return 0;
}