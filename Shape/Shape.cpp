
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
#include <vector>
#include "fix.h"


using namespace std;







int main() {
    vector<Shape*> shapes;

    Circle* c = new Circle(1.0f);
    c->SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    shapes.push_back(c);
    shapes.push_back(r);

    for (int i = 0; i < shapes.size(); i++)
    {
        cout << "Area: " << shapes[i]->Area() << endl;
        // TODO: If shape is a circle, print radius
        std::cout << c->GetRadius() << endl;
    }

    // FIXME: Getting memory leak! Delete all shapes.
    delete c;
    delete r;

    return 0;
}
