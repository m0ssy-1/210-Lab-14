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

    int getRed() const {return red;}
    int getBlue() const (return blue;)
    int getGreen()const {return green;}

}

void print() const {
    cout << "something" << //a color
    << "something" << //a color
    <<"something" << // a color
}


int main() {

    //creates objects
    Color c1(255, 0, 0);     //red
    Color c2(0, 0, 255);     //blue
    Color c3(0, 255, 0);     //green
    Color c4;     //black/default

// values set
    c4.setRed(128);
    c4.setBlue(192);
    c4.setGreen(64);

    //prints ccolors
    cout << "something" << endl;
    c1.print();
    c2.print();
    c3.print();
    c4.print();

    return 0;
}