// #include<bits./stdc++.h>

// using namespace std;

// int postfixEval(string s){
//     stack<int> st;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();

//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1+op2);
//                 break;
//             case '-':
//                 st.push(op1-op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
            
            
//             }
//         }
//     }
//     return st.top();
// }


// int main(){
//     cout<<postfixEval("46+2/5*7+")<<endl;
//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <int> st;

   char s[]="231*+9-" ;

    for(int i=0;i<7;i++){

        if (isdigit(s[i])){
            st.push((int)s[i]);

        }
        else{
            float val1,val2;
            val1=st.top();
            st.pop();
            val2=st.top();
            st.pop();
           switch (s[i])
            {
             case '+': st.push( val2 + val1); break;
             case '-': st.push(val2 - val1); break;
             case '*': st.push( val2 * val1); break;
             case '/': st.push( val2/val1);   break;

            }
        }

    }int m=st.top();
    cout<<m;
    return 0;
}


