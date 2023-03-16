#include<bits/stdc++.h>
using namespace std;

int main(){
    // string s("hello");
    // // cin>>s;

    // // cout<<s[1]<<endl;
    // s.push_back('\0');
    // if('\0' == ' ') 
    // int s = bool('\0' == '\0');
    // cout<<s<<endl;


    
    // s.append("hey buddy");
    // // cout<<s[0]<<s[1]<<s[2]<<endl;
    // // cout<<s[2]<<endl;
    // cout<<s<<endl;
    // for(int i = 0; s[i] != '\0'; ++i)
    //     cout << s[i];



    //stack over flow code

    // std::string S("Hey");
    // // S.push_back('\0');
    // S.append("Jude");


    // for(int i = 0; S[i] != '\0'; ++i)
    //     std::cout << S[i];

// Only "Hey" is printed!

    // if(s[1] == v[5])
    // {
    //     cout<<"string are equal"<<endl;
    // }
    // else
    //  cout<<"string are not equal"<<endl;
    // if(s[1] == "a"){
    //     s[1] = "b";
    // }

    // cout<<s[1];
    string s = "hellohello";
    // s.pop_back();
    cout<<s<<endl;
    cout<<s.size()<<endl;

    for(int i=0; i<=s.length() + 8 ; i++)
    {
        s.pop_back();
    }

    cout<<endl<<s;



}