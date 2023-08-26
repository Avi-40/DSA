bool isValidParenthesis(string e)
{
    stack<char> s;
    
    for(int i=0;i<e.length();i++){
        char ch=e[i];
        if(ch=='[' || ch=='{' || ch=='(' ){
            s.push(ch);
        }
        
        else if (s.empty()) {
            return false;
        }
        char top = s.top();
        if (ch == ']' && top == '[' || 
            ch == '}' && top == '{' ||
            ch == ')' && top == '('){
                s.pop();
            }
        else{
            return false;
        }
        
            
        
    }
    if(s.empty()){
        return true;
    }
    return false;
    
    
    
}



bool isValidParenthesis(string e)
{
    stack<char> s;
    
    for(int i=0;i<e.length();i++){
        char ch=e[i];
        if(ch=='[' || ch=='{' || ch=='(' ){
            s.push(ch);
        }
        
        else if (!s.empty()) {
            char top = s.top();
            if (ch == ']' && top == '[' || 
              ch == '}' && top == '{' ||
              ch == ')' && top == '('){
                  s.pop();
              }
              
            return false;
        
        }
        else{
            return false;
        }
        
        
    }
    if(s.empty()){
        return true;
    }else{
        return false;
    }
    
    
}