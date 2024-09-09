class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int solve(int x,int y,char op){
        if(op=='+')return x+y;
        else if(op=='-')return x-y;
        else if(op=='*')return x*y;
        else if(op=='/')return x/y;
        
        
    }
    
    
    int evaluatePostfix(string S)
    {
        stack<int>st;
        for(int i=0;i<S.size();i++){
            if(isdigit(S[i])){
                st.push(S[i]-'0');
                
            }else{
                int v1=st.top();
                st.pop();
                int v2=st.top();
                st.pop();
                st.push(solve(v2,v1,S[i]));
                
            }
            
            
        }
        return st.top();
    }
};
