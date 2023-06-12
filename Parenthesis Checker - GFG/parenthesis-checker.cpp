//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool comp(char ed, char op){
        if(op=='[' && ed==']')
            return true;
        else if(op=='{' && ed=='}')
            return true;
        else if(op=='(' && ed==')')
            return true;
        else
            return false;
            
    }
    bool ispar(string x)
    {
        stack<char> st;
        for(int i=0; i<x.length(); i++){
            if(x[i]=='['|| x[i]=='{'|| x[i]=='('){ //opening bracket
                st.push(x[i]);
            }
            if(x[i]==']'|| x[i]=='}'|| x[i]==')'){ // if closing bracket is enccountered
                if(!st.empty() && comp(x[i],st.top())){
                    st.pop();
                }
                else
                    return false;
            }
        }
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends