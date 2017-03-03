class Heap{
 private:
  int* data;
  int size;
  int count;
  void bubbleDown(int i);
  void bubbleUp(int i);
 public:
  Heap();
  ~Heap();
  void print(int i=0, int indent=0);
  void add(int newInt);
  int pop();
  int getCount();
};
  
  
