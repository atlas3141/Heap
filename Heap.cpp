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
  return (i+1)/2;
}
void Heap::bubbleDown(int i){

}
void Heap::bubbleUp(int i){
  if(i != 0){
    if(data[i] > parent(i)){
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
  cout << newInt << endl;
  data[count] = newInt;
  bubbleUp(count);
  count++;
}
int Heap::pop(){
  
}
int Heap::getCount(){
  return count;
}
