#include <exception> //Why is this here? 

#include <iostream>

#include "Q2.h"

using namespace std;

//Part A

Rectangle::Rectangle() { 
    height = 0; 
    width = 0; 
    x_coordinate = 0;
    y_coordinate = 0; 
}

Rectangle::Rectangle(unsigned int h, unsigned int w, int x, int y) {
    this->height = h;
    this->width = w;
    this->x_coordinate = x;
    this->y_coordinate = y;
}

unsigned int Rectangle::getHeight() {
    return this->height;
}

unsigned int Rectangle::getWidth() {
    return this->width;
}

int Rectangle::getX() {
    return this->x_coordinate;
}

int Rectangle::getY() {
    return this->y_coordinate;
}

void Rectangle::setHeight(unsigned int h) {
    this->height = h;
}

void Rectangle::setWidth(unsigned int w) {
    this->width = w;
}

void Rectangle::setX(int x) {
    this->x_coordinate = x;
}

void Rectangle::setY(int y) {
    this->y_coordinate = y;
}

//Part B

int Rectangle::getPerimeter() {
    return (2*height) + (2*width);
}

int Rectangle::getArea() {
    return height*width;
}

//Part C

bool Rectangle::checkOverlap(Rectangle &r2) {
    // Case 1.1 - 1.4
    if (r2.getX() > this-> x_coordinate && r2.getX() < (this->x_coordinate + this->width)) {
        if (((r2.getY() + r2.getHeight()) < (this->y_coordinate + this-> height)) && ((r2.getY() + r2.getHeight()) > this->y_coordinate)) {
            cout << "Rectangles r1 and r2 overlap" << endl;
            return true;
        }
        else if ((this->y_coordinate < r2.getY()) && (r2.getY() < (this->y_coordinate + this->height))) {
            cout << "Rectangles r1 and r2 overlap" << endl;
            return true;
        } else {
            cout << "No overlap between r1 and r2" << endl;
            return false; 
        }
    }

    if (r2.getX() == this->x_coordinate) {
        if ((r2.getY() < (this->y_coordinate + this->height)) && (r2.getY() > this->y_coordinate)) {
            cout << "Rectangles r1 and r2 overlap" << endl;
            return true; 
        } else if ((r2.getX() + r2.getHeight() < this->x_coordinate + this->height) && (r2.getX() + r2.getHeight() > this->y_coordinate)) {
            cout << "Rectangles r1 and r2 overlap" << endl;
            return true; 
        } else if (r2.getY() == this->y_coordinate) {
            cout << "Rectangles r1 and r2 overlap" << endl;
            return true; 
        } else {
            cout << "No overlap between r1 and r2" << endl;
            return false; 
        }
    }

    if (r2.getY() == this->y_coordinate) {
        if (r2.getX() < (this->x_coordinate + this->width) && r2.getX() > this->x_coordinate) {
            cout << "Rectangles r1 and r2 overlap" << endl;
            return true; 
        } else if ((r2.getX() + r2.getWidth()) < (this->x_coordinate + this->width)) {
            cout << "Rectangles r1 and r2 overlap" << endl;
            return true; 
        } else {
            cout << "No overlap between r1 and r2" << endl;
            return false; 
        }
    }

    //All initial if statements false meaning there is no overlap. 

    cout << "No overlap between r1 and r2" << endl;
    return false; 

}