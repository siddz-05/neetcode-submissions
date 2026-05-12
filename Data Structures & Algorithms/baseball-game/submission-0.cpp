class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int c=0;

        for(int i=0;i<operations.size();i++){
            if(operations[i]!="+" && operations[i]!="C" && operations[i]!="D") st.push(stoi(operations[i]));
            else{
                if(operations[i]=="+"){
                    int top=st.top();
                    st.pop();
                    int top2=st.top();
                    st.push(top);
                    st.push(top+top2);
                }
                else if(operations[i]=="C") st.pop();
                else{
                    st.push(st.top()*2);
                }
            }
        }

        while(!st.empty()){
            c+=st.top();
            st.pop();
        }

        return c;
    }
};