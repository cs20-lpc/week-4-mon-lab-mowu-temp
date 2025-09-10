#include "LinkedList.hpp"
using namespace std;


int main() {
    try {
        LinkedList<int> abc;
        cout << "Check length before adding elements, should be 0: " << abc.getLength() << endl;    
        cout << "Check list isEmpty is true, should be 1: " << abc.isEmpty() << endl; 
        cout << "Adding elements [111,222,333,444]" << endl;
        abc.append(111);
        abc.append(222);
        abc.append(333);
        abc.append(444);

        cout <<  "get list[0], should be 111: " << abc.getElement(0) << endl;
        cout <<  "get list[3], should be 444: " << abc.getElement(3) << endl;

        try {
            cout <<  "get list[-1] should be ERROR: " << abc.getElement(-1) << endl;
        } catch (string e) {
            cout << e << endl;
        }

        try {
            cout <<  "get list[4], should be ERROR: " << abc.getElement(4) << endl;
        } catch (string e) {
            cout << e << endl;
        }

        cout << abc;
        cout << "Clear list" << endl;
        abc.clear();
        try {
            cout <<  "get list[0], should be ERROR: " << abc.getElement(0) << endl;
        } catch (string e) {
            cout << e << endl;
        }

        cout << "Check length after clear, should be 0: " << abc.getLength() << endl;    
        cout << "Check list isEmpty is true, should be 1: " << abc.isEmpty() << endl; 

        cout << "Add elements 5,7" << endl;
        abc.append(5);
        abc.append(7);
        cout << "getLength(), should be 2: "<< abc.getLength() << endl;
        cout << "isEmpty(), should be 0: " << abc.isEmpty() << endl;    
        abc.append(12);
        abc.append(19);
        abc.append(31);

        cout << "Add elements 12,19, 31" << endl;
        cout << "getLength(), should be 5: "<< abc.getLength() << endl;

        cout << abc;
        cout << "replace element 50 at index 3" << endl;
        abc.replace(3,50);
        cout << "replace element 150 at index 4" << endl;
        abc.replace(4,150);
        cout << "replace element 250 at index 0" << endl;
        abc.replace(0,250);

        cout << abc;
        cout << "getLength(), should be 5: "<< abc.getLength() << endl;
        cout << "isEmpty(), should be 0: " << abc.isEmpty() << endl;    
        cout <<  "get list[0], should be 250: " << abc.getElement(0) << endl;
        cout <<  "get list[1], should be 7: " << abc.getElement(1) << endl;
        cout <<  "get list[4], should be 150:" << abc.getElement(4) << endl;

        try {
            cout <<  "get list[5], should be ERROR: " << abc.getElement(5) << endl;
        } catch (string e) {
            cout << e << endl;
        }
    
        cout << "All tests passed :)" << endl;
    } catch (string e) {
        cout << "Uncaught exception: " << e << endl;
    }
    
}

