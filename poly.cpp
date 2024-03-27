#include <iostream>
using namespace std;

class Int {
private:
    int value;

public:
    
    Int(int val = 0) : value(val) {}

    
    int display() const {
        cout << value;
    }

    
    Int operator+(const Int& other) const {
        return Int(value + other.value);
    }

    
    Int operator+(int other) const {
        return Int(value + other);
    }
    
    
};

int main() {
    
    Int a(5);
    Int b(10);
    
    Int c = a + b;
    cout << "Sum: ";
    c.display();  
    cout << endl;

    Int d = a + 7;
    cout << "Sum: ";
    d.display();  
    cout << endl;
    return 0;
}
