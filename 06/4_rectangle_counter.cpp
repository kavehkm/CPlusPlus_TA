#include <iostream>
#include <cassert>
using namespace std;


class Rectangle {
    private:
        double length;
        double height;
        static int count;
    public:
        Rectangle (double length, double height);
        Rectangle (const Rectangle &rect);
        Rectangle ();
        ~Rectangle ();
        // member functions
        void print () const;
        double getArea () const;
        double getPerimeter () const;
        static int getCount ();
};

// initialize counter
int Rectangle :: count = 0;


Rectangle :: Rectangle (double length, double height)
:length(length), height(height) {
    if (length <= 0 || height <= 0) {
        assert(false);
    }
    count++;
}

Rectangle :: Rectangle (const Rectangle &rect)
:length(rect.length), height(rect.height) {
    count++;
}

Rectangle :: Rectangle ()
:length(0.0), height(0.0) {
    count++;
}

Rectangle :: ~Rectangle () {
    count--;
}

void Rectangle :: print () const {
    cout << "A rectangle of " << length << " by " << height << endl;
}

double Rectangle :: getArea () const {
    return length * height;
}

double Rectangle :: getPerimeter () const {
    return 2 * (length + height);
}

int Rectangle :: getCount () {
    return count;
}


int main () {
    // create rectangles
    Rectangle rect1(3.2, 1.2);
    Rectangle rect2(1.5, 2.1);
    Rectangle rect3;
    Rectangle rect4 (rect1);
    Rectangle rect5 (rect2);

    cout << "Count of objects: " << rect5.getCount() << endl;
    cout << "Count of objects: " << Rectangle :: getCount() << endl;
    return 0;
}