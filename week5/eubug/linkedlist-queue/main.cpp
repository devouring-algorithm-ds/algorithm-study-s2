#include <iostream>
using namespace std;

#include "queue.hpp"

int main() {
  Queue queue(1);

  for(int i=2; i<10; ++i)
    queue.enqueue(i), queue.print();

  cout << endl;

  while(!queue.isEmpty()) {
    cout << "Front: " << queue.getFront() << endl;
    cout << "Back: " << queue.getBack() << endl;
    cout << "Dequeued:  " << queue.dequeue() << endl;
    queue.print();
  }

  cout << "Front: " << queue.getFront() << endl;
  cout << "Back: " << queue.getBack() << endl;
  cout << "Dequeued:  " << queue.dequeue() << endl;
  queue.print();

  cout << endl << "Enqueu" << endl;;
  queue.enqueue(17);
  cout << "Front: " << queue.getFront() << endl;
  cout << "Back: " << queue.getBack() << endl;
  cout << "Dequeued:  " << queue.dequeue() << endl;
  queue.print();

  return 0;
}
