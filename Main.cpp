#include <iostream>
#include <fstream>

using namespace std;

void strToLower(char* a){ //converts words to lower
  while(*a){
    *a = tolower(*a);
    a++;
  }
}

int main(){
  Heap heap;
  char input[128];
  bool running = true;


  while(running){
   
    cin.getline(input, 128);
    tolower(input);

    if(input[i] == 'n' {
      ifstream stream;
      bool isFile;
      configureInput(stream, isFile);
      
      if(isFile) stream.close();


    } else if(strcmp(inputBuffer, "r") == 0 ||
	      strcmp(inputBuffer, "remove") == 0){
      std::ifstream stream;
      bool isFile;
      configureInput(stream, isFile);
      removeNumbers(isFile ? stream : std::cin, &heap);
      if(isFile) stream.close();
      } else if(strcmp(inputBuffer, "p") == 0 ||
	      strcmp(inputBuffer, "print") == 0){
	heap.print();
      } else if(strcmp(inputBuffer, "q") == 0 ||
	      strcmp(inputBuffer, "quit") == 0){
	running = false;
      }else{
	cout << "I don't understand" << endl;
	cout << "The possible commands are:\nAdd\nDelete\nPrint\nQuit" << endl;
      }
  


}
