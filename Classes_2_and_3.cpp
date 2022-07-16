#include <iostream>
#include <climits>

using namespace std;

class Counter{
  private:
    int counter;
    int maxValue;
  public:
    Counter(){
      counter = 0;
      maxValue = INT_MAX;
    }
    Counter(int maximum){
      maxValue = maximum;
    }
    void increment(){
      counter++;
    }
    void decrement(){
      counter--;
    }
    void setCount(int value){
      while(value < 0 || value > maxValue){
        cout << "Enter a value within the range: ";
        cin >> value;
      }
      counter = value;
    }
    void setMaxValue(int value){
      while(value < 0 || value > INT_MAX){
        cout << "Enter a value within the range: ";
        cin >> value;
      }
      maxValue = value;
    }
    int getCount(){
      return counter;
    }
    int getMaxValue(){
      return maxValue;
    }
    bool atMax(){
      return counter == maxValue;
    }
    bool atMin(){
      return counter == 0;
    }
    bool lessThan(int value){
      return counter < value;
    }
    bool lessThanC(const Counter& aCounter) const{
      return counter < aCounter.counter;
    }

};

int main() {
  Counter c;
  c.setCount(5);
  cout << c.getCount() << endl;
  cout << c.lessThan(8) << endl;
  Counter c_2;
  c_2.setCount(8);
  cout << c.lessThanC(c_2) << endl;
}