class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
       for(char ch:s){
        if(ch == '(' || ch =='{' || ch == '['){
        st.push(ch);
       }
       else if(st.empty() == true){
        return false;
       }
       else if(ch == ')' && st.top()=='('){
        st.pop();
       }
       else if(ch == '}' &&   st.top()== '{'){
        st.pop();
       }
       else if(ch == ']' && st.top()== '['){
        st.pop();
       }
       else{
        return false;
       }

       
       }
       return st.empty();
    }
};

// we have chosen stack,because problem itself is lifo in nature 
// use stack, because the problem requires to close the most recent open element or call, LIFO in nature 

/* A stack is generally a container where only TOP is accessible 
operations that we will use are, st.push(X), st.pop(), st.top(), st.empty()*/