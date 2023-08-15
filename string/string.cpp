#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
// int main(){
    // string str;
    // cin>>str;
    // cout<<str;
    // string str1(5,'n');
    // cout<<str1<<endl;
    // str="vivek";
    // cout<<str<<endl;

    //input sentence
    // getline(cin, str);
    // cout<<str<<endl;

    //apend string
    // string s1="fam";
    // string s2="ily";
    // s1.append(s2);
    // cout<<s1+s2<<endl;//if not use

    //acces the elemnt
    // cout<<s1[1]<<endl;

    //clear the string 
    // string abc="sdfsdf werwe sdf dsrwer wefsdfvsd";
    // abc.clear();
    // cout<<abc<<endl;

    //compare the string
    // string s1="abc";
    // string s2="abc";
    // if(s2.compare(s1)==0){
    //     cout<<"string is same"<<endl;
    // }
    // cout<<s2.compare(s1)<<endl;

    //check either string is empty or  not
    // str = "asdfsdf lkasdmf ";
    // cout<<str<<endl;
    // str.clear();
    // if(str.empty()){
    //     cout<<"string is empty"<<endl;
    // }

    //erase function
//    string s1= "nincompoop";
//    s1.erase(3,3);
//    cout<<s1<<endl;

//find function
//  cout<<s1.find("com")<<endl;

//insert function
// s1.insert(2, "lol");
// cout<<s1<<endl;

//lenth
// cout<<s1.length()<<endl;

//looping
// for(int i=0; i<s1.length(); i++){
//     cout<<s1[i]<<endl;
// }

//substring function
// string s= s1.substr(6,4);
// cout<<s<<endl;

//string to integer 
// str = "1234";
// int x=stoi(str);
// cout<<x+2<<endl;
// cout<<to_string(x)+ "2"<<endl;//integer to string

//sorting the string 
// string s1="sdklgfndlsknfgj";
// sort(s1.begin(), s1.end());
// cout<<s1<<endl;
//     return 0;
// }


//sring quetions
int main(){
    string str="sadfsfsdgfds";
    // //to upper case
    // for(int i=0; i<str.size(); i++){
    //     if(str[i]>='a' && str[i]<='z'){
    //         str[i] -=32;
    //     }
    // }
    // cout<<str<<endl;

    // //to lower case\

    // for (int i=0; i<str.size(); i++){
    //     if(str[i]>='A' && str[i]<='Z'){
    //         str[i] +=32;
    //     }
    // }
    // cout<<str;

    //using inbuilt function
    // transform(str.begin(), str.end(), str.begin(), ::toupper);
    // cout<<str<<endl;
    // transform(str.begin(), str.end(), str.begin(), ::tolower);
    // cout<<str;

    //form maximum number from string
    // string s= "24489092734";
    // sort(s.begin(), s.end(), greater<int>());
    // cout<<s;

    //maximun frequently char
string s="asdfalsdaweaweqzsdawesdaxsxsdqszdwqs";
int freq[26];

for (int i=0; i<26; i++)
  freq[i]=0;

for(int i=0; i<s.size(); i++)
freq[s[i]-'a']++;  

char ans='a';
int maxF= 0;

for(int i=0; i<26; i++){
    if(freq[i]>maxF){
        maxF=freq[i];
        ans=i+'a';
    }
}
cout<<maxF<<" "<<ans;
}