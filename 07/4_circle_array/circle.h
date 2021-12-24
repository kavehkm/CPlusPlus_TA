#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
    private:
        double radius;
    public:
        Circle (double radius);
        Circle (const Circle &circle);
        Circle ();
        ~Circle ();
        double getRadius () const;
        double getArea () const;
        double getPerimeter () const;
};


#endif