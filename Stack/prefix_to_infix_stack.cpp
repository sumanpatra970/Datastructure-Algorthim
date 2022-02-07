////program to convert prefix to infix using stack
#include <bits/stdc++.h> 
using namespace std; 
bool isOperand(char x) 
{ 
   return (x >= 'a' && x <= 'z') || 
          (x >= 'A' && x <= 'Z'); 
} 
   
string getInfix(string exp) 
{ 
    stack<string> s; 
  
    for (int i=4; i>=0 ; i--) 
    {  
        if (isOperand(exp[i])) 
        { 
           string op(1, exp[i]); 
           s.push(op); 
        }  
        else
        { 
            string op1 = s.top(); 
            s.pop(); 
            string op2 = s.top(); 
            s.pop(); 
            s.push("(" + op1 + exp[i] + 
                   op2 + ")"); 
        } 
    } 
  
    return s.top(); 
} 
int main() 
{ 
    string exp = "+*abc"; 
    cout<<"prefix is "<<exp<<endl;
    cout << "infix is "<<getInfix(exp); 
    return 0; 
} 
