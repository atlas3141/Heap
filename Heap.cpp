#include "Heap.h"
#include <iostream>


using namespace std;

int leftChild(int i){
  return 2*i+1;
}
int rightChild(int i){
  return 2*i+2;
}
int parent(int i){
  return (i-1)/2;
}
void Heap::bubbleDown(int i){
  int swapIndex = -1;
  if (leftChild(i) <= count-1 &&
      rightChild(i) <= count-1){

    swapIndex = (data[rightChild(i)] > data[leftChild(i)]) ? rightChild(i) : leftChild(i);
  }
  else if(leftChild(i) <= count-1){
    swapIndex = leftChild(i);
  }
  if(data[swapIndex] > data[i] && i != -1){
    int temp = data[i];
    data[i] = data[swapIndex];
    data[swapIndex] = temp;
    bubbleDown(swapIndex);
  }
}
void Heap::bubbleUp(int i){
  if(i != 0){
    if(data[i] > data[parent(i)]){
      int temp = data[i];
      data[i] = data[parent(i)];
      data[parent(i)] = temp;
      bubbleUp(parent(i));
    }
  }
}
Heap::Heap(){
  size = 128;
  count = 0;
  data = new int[size];

}
Heap::~Heap(){
}
void Heap::print(int i, int indent){
  for(int j = 0; j < count; j++){
    cout << data[j] << " ";
  }
  cout << endl;
}
void Heap::add(int newInt){

  data[count] = newInt;
  bubbleUp(count);
  count++;
}
int Heap::pop(){
  int toReturn = data[0];
  data[0] = data[count-1];
  bubbleDown(0);
  count--;
  return toReturn;
}
int Heap::getCount(){
  return count;
}
