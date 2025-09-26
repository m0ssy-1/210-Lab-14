#include <iostream>
using namespace std;

class Color {
    private:
    int red;
    int blue;
    int green;

    public:
    Color(): red(0), blue(0), green(0), {}

    Color(int r, int b, int g): red(r), blue(b), green(g) {}

    void setRed(int r) {red = r;}
    void setBlue(int b) {blue = b;}
    void setGreen(in g) {green = g;}
    
}

void print() const {
    cout << 
}


int main() {

    //creates objects
    Color c1();     //red
    Color c2();     //blue
    Color c3();     //green
    Color c4();     //black/default

// vlues set
    c1.setRed(128);
    c2.setBlue(192);
    c3.setGreen(64);

    //prints ccolors
    cout << "something" << endl;
    c1.print();
    c2.print();
    c3.print();
    c4.print();

    return 0;
}