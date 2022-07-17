#include <iostream>
#include <vector>

using namespace std;  

#define MAX 1000  

class Queue  {
  int back;  
public:    
  int a[MAX]; //Maximum size of Stack  
  Queue(); 
  bool enqueue(int x);  
  int dequeue();  
  bool isEmpty();  
  bool isFull();
  void print();
  void bulkEnqueue(vector<int>arr);
};

Queue::Queue(){ 
  back = -1;
}

bool Queue::enqueue(int x)  {  
  if (back >= (MAX-1))  {  
    cout << "Queue Overflow";  
    return false;  
  }  
  else {    
    a[++back] = x;    
    return true;   
  }  
}

int Queue::dequeue()  {   
  if (back < 0)   {    
    cout << "Queue Underflow";    
    return 0;   
  }   
  else  {    
    int x = a[0];    
    for (int i=1; i<=back; i++){     
      a[i-1]=a[i];   
    }   
    back--;   
    return x;   
  }  
}

bool Queue::isEmpty()  {   
  return (back < 0);  
}

bool Queue::isFull(){
  return back == MAX - 1;
}

void Queue::print(){     
  cout << "Content of queue: ";     
  for(int i = 0;i<=back;++i){
    cout << a[i] << " ";
  }   
  cout << endl; 
}

void Queue::bulkEnqueue(vector<int> arr){
  int i = 0;
  while(!isFull() && i < arr.size()){
    enqueue(arr[i++]);
  }
}

int main()  {   
  Queue q;   
  q.enqueue(10);   
  q.print();  
  q.enqueue(20);   
  q.print();  
  q.enqueue(30);   
  q.print();            
  q.dequeue();  
  q.print();
  vector<int>numbers = {1,2,3,4,5,6};
  q.bulkEnqueue(numbers);
  q.print();
  return 0;  
} 