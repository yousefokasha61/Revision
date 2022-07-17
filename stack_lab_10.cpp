#include <iostream>  
using namespace std;  
#define MAX 1000  
class Stack  {  
int top;  
public:    
  int a[MAX]; //Maximum size of Stack  
  Stack(); 
  bool push(int x);  
  int pop();  
  bool isEmpty();
  bool isFull();
};
Stack::Stack(){ 
  top = -1;     
} 
bool Stack::push(int x)  {  
  if (top >= (MAX-1))  {    
    cout << "Stack Overflow";    
    return false;   
  }   
  else  {    
    a[++top] = x;    
    cout<<x <<" pushed into stack\n";    
    return true;   
  }  
}   
int Stack::pop()  {   
  if (top < 0)   {    
    cout << "Stack Underflow";   
    return 0;   
  }   
  else  {    
    int x = a[top--];    
    return x;   
    }  
  }   
bool Stack::isEmpty()  {   
  return (top < 0);  
}
bool Stack::isFull(){
  return top == MAX - 1;
}

int evaluatePostorderExpression(string expr){
  Stack st;
  for(int i = 0;i<expr.length();++i){
    if(isdigit(expr[i])){
      st.push(expr[i] - '0');
    }
    else{
      int val1 = st.pop();
      int val2 = st.pop();
      switch(expr[i]){
        case '+': st.push(val2 + val1); break; 
          case '-': st.push(val2 - val1); break; 
          case '*': st.push(val2 * val1); break; 
          case '/': st.push(val2/val1); break; 
      }
    }
  }
  return st.pop();
}



// Driver program to test above functions  
int main()  {   
  cout << evaluatePostorderExpression("23+7*") << endl;
  return 0;  
} 