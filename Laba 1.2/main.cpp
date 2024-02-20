#include "Rectangle.h"

Rectangle* makeRectangle(){
    Rectangle* result = new Rectangle();

    if (!result->read()) {
        cout << "Entered data is not valid!" << endl;
        delete result;
        return NULL;
    }

    return result;
}

int main() {
    auto a = makeRectangle();

    if(!a){
        return 1;
    }

    a->perimeter();
    a->area();
    a->display();

    delete a;
    return 0;
}
