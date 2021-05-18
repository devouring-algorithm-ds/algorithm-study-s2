#include <iostream> 
using namespace std;

#include "CDList.hpp"

int main(void) {
  int op=1, data, idx;

  CDList<int> list;

  while(op>=0) {
    cout << "1. pushBack          2. pushFront" << endl;
    cout << "3. popBack           4. popFront" << endl;
    cout << "5. insertAt          6. removeAt" << endl;
    cout << "0. print" << endl;
    cout << "> (-1 to quit) ";
    cin >> op;

    switch(op) {
      case 1: {
        cout << "data: ";
        cin >> data;
        list.pushBack(data);
        list.print();
        break;
      }
      case 2: {
        cout << "data: ";
        cin >> data;
        list.pushFront(data);
        list.print();
        break;
      }
      case 3: {
        cout << "Popped: " << list.popBack() << endl;
        list.print();
        break;
      }
      case 4: {
        cout << "Popped: " << list.popFront() << endl;
        list.print();
        break;
      }
      case 5: {
        cout << "Insert [DATA] at which [INDEX]? (0-based):  ";
        cin >> data >> idx;
        list.insertAt(idx, data);
        list.print();
        break;
      }
      case 6: {
        cout << "remove data at which [INDEX]? (0-based): ";
        cin >> idx;
        list.removeAt(idx);
        list.print();
        break;
      }
      case 0: 
        list.print();
        break;
      case -1:
      default: 
        op = -1;
    }
    cout << endl;
    cin.clear();
    cin.ignore(4096, '\n');
  }

  return 0;
}
