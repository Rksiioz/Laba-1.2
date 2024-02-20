
#include "Rectangle.h"

void Rectangle::setHeight(int height) {
    Rectangle::height = height;
}

void Rectangle::setWidth(int width) {
    Rectangle::width = width;
}

int Rectangle::getHeight() const {
    return height;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::area() const{
    return (height * width);
}

int Rectangle::perimeter() const{
    return ((height * 2) + (width * 2));
}

bool Rectangle::read() {
    string heightStr, widthStr;

    cout << "Height:"; cin >> heightStr;
    cout << "Width: "; cin >> widthStr;
    cout << endl << endl;

    return this->init(heightStr, widthStr);
}

void Rectangle::display() const{
    cout << "Height: " << Rectangle::getHeight() << endl;
    cout << "Widht: " << Rectangle::getWidth() << endl;
    cout << "Perimeter: " << Rectangle::perimeter() << endl;
    cout << "Area: " << Rectangle::area() << " sm2" << endl;
}

bool Rectangle::_isValidInt(const string &intString) {
    for (size_t i = 0; i < intString.length(); ++i) {
        if (intString[i] < '0' || intString[i] > '9') {
            return false;
        }
    }
    return !intString.empty();
}

bool Rectangle::init(string heightStr, string widthStr){
    if(!this->_isValidInt(heightStr) || !this->_isValidInt(widthStr)){
        return false;
    }

    this->height = stoi(heightStr);

    if(this->height <= 0) {
        return false;
    }

    this->width = stoi(widthStr);

    if(this->width <= 0) {
        return false;
    }

    return true;
}

