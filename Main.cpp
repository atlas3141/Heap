#include <iostream>
#include <fstream>
#include "Heap.h"

using namespace std;

void toLower(char* a){ //converts words to lower
  while(*a){
    *a = tolower(*a);
    a++;
  }
}
void configureInput(ifstream &stream, bool &isFile){

  char input[128];
  isFile = false;

  cout << "Read from File or Input text?" << endl;
  cin.getline(input,128);
  toLower(input);

  if(input[0] == 'f'){
    cout << "What file?" << endl;
    cin.getline(input,128);
    stream.open(input);
    if(stream.is_open()){
      isFile = true;
    }
    else{
      cout << "Could not open file" << endl;
      cout << "Enter by command line" << endl;
    }
  }
  else{
    cout << "Enter by command line" << endl;
  }
}
void addNumbers(istream &from, Heap* heap){
 int  
}
void deleteNumbers(istream &from, Heap* heap){

}


int main(){
  Heap heap;
  char input[128];
  bool running = true;


  while(running){
   
    cin.getline(input, 128);
    toLower(input);
    
    if(input[0] == 'a') {
      ifstream stream;
      bool isFile;
      configureInput(stream, isFile);
      addNumbers(isFile ? stream : cin, &heap);      
      if(isFile) stream.close();
      
      
    }
    else if(input[0] == 'r' ||
	    input[0] == 'd'){
      ifstream stream;
      bool isFile;
      configureInput(stream, isFile);
      deleteNumbers(isFile ? stream : cin, &heap);
      
      
      if(isFile) stream.close();
    } 
    else if(input[0] == 'p'){
      heap.print();
    } 
    else if(input[0] == 'q'){
      running = false;
    }
    else{
      cout << "I don't understand" << endl;
      cout << "The possible commands are:\nAdd\nDelete\nPrint\nQuit" << endl;
    }
  }

}
