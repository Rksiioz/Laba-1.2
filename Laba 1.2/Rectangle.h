#pragma once
#include <iostream>
#include <string>

using namespace std;

class Rectangle{
private:
    int height;
    int width;
    bool _isValidInt(const string& intString);

public:
    int getHeight() const;
    int getWidth() const;
    void setHeight(int height);
    void setWidth(int width);
    int area() const;
    int perimeter()const;
    bool read();
    void display() const;
    bool init(string intString, string intString2);


};
