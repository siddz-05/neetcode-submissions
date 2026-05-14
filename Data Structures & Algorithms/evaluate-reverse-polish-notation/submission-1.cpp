class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="/" && tokens[i]!="*"){
                st.push(stoi(tokens[i]));
            }
            else{
                int x1=st.top();st.pop();
                int x2=st.top();st.pop();
                
                if(tokens[i]=="+") st.push(x2+x1);
                else if(tokens[i]=="-") st.push(x2-x1);
                else if(tokens[i]=="/") st.push(x2/x1);
                else st.push(x2*x1);
            }

        }

        return st.top();

        
    }
};
