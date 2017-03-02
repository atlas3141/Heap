class Heap{
 private:
  int* data;
  int size;
  int count;
 public:
  Heap();
  ~Heap();
  void print(int i=0, int indent=0);
  void add(int newInt);
  void remove(int deleteInt);
};
  
  
