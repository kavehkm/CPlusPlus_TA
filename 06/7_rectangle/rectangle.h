#ifndef H_RECT
#define H_RECT


class Rectangle {
    private:
        double length;
        double height;
    public:
        Rectangle (double length, double height);
        Rectangle ();
        Rectangle (const Rectangle &rectangle);
        ~Rectangle ();
        double getLenght () const;
        double getHeight () const;
        double getArea () const;
        double getPerimeter () const;
};


#endif