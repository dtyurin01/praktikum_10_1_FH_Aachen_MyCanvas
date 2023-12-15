//
// Created by dtyur on 15.12.2023.
//
#include <iostream>
#include "MyCanvas.h"
using namespace std;

MyCanvas::MyCanvas(unsigned int x, unsigned int y): size_x{x}, size_y{y} {
    canvas_array_ptr = new char[size_x * size_y];
    init();
}
void MyCanvas::init(){
    for (unsigned int i = 0; i < size_x * size_y; ++i) {
        canvas_array_ptr[i] = '.';
    }
}
MyCanvas::MyCanvas(const MyCanvas &other):size_x(other.size_x), size_y(other.size_y) {
    canvas_array_ptr = new char[size_x*size_y];
    for (unsigned int i = 0; i < size_x * size_y; ++i) {
        canvas_array_ptr[i] = other.canvas_array_ptr[i];
    }
}
MyCanvas&MyCanvas::operator=(const MyCanvas &other) {
    if(this != &other){
        delete[] canvas_array_ptr;
        size_x = other.size_x;
        size_y = other.size_y;
        canvas_array_ptr = new char [size_x*size_y];
        for (unsigned int i = 0; i < size_x * size_y; ++i) {
            canvas_array_ptr[i] = other.canvas_array_ptr[i];
        }
    }
    return *this;
}
void MyCanvas::set(unsigned int x, unsigned int y, char c){
    if(x < size_x && y < size_y){
        canvas_array_ptr[y*size_x+x] = c;
    }else{
        cout<<"Ungueltige Position";
    }
}
char MyCanvas::get(unsigned int x, unsigned int y) const {
    if(x < size_x && y < size_y){
        return canvas_array_ptr[y*size_x+x];
    }else{
        cout<<"Ungueltige Position";
    }
}
string MyCanvas::to_string() const {
    string result;
    for (unsigned int y = 0; y < size_y; ++y) {
        for (unsigned int x = 0; x < size_x; ++x) {
            result += get(x,y);
        }
        result += '\n';
    }
    return result;
}

void MyCanvas::print() const {
    cout<<to_string()<<endl;
}
MyCanvas::~MyCanvas() {
    delete[] canvas_array_ptr;
}

