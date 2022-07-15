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
// Driver program to test above functions  
int main()  {   
  Stack s;   
  s.push(10);  //Line 1  
  s.push(20);  //Line 2  
  s.push(30);  //Line 3  
  cout<<s.pop() << " Popped from stack\n";  //Line 4   
  return 0;  
} 