// Datei: MyCanvas.h

//#pragma once

#include "gip_mini_catch_heap_delete.h"
#include <iostream>
#include <string>
using namespace std;

class MyCanvas{

private:
    unsigned int size_x, size_y;
    char* canvas_array_ptr;
public:

    int get_size_x() const {return size_x;}
    int get_size_y() const {return size_y;}

    char* get_canvas_array_ptr() const {return canvas_array_ptr;}

    void set_x(unsigned int x){size_x = x;}
    void set_y(unsigned int y){size_x = y;}

    void set_canvas_array_ptr(char* ptr){canvas_array_ptr = ptr;}

    MyCanvas(unsigned int x, unsigned int y);
    MyCanvas(const MyCanvas &other);

    MyCanvas& operator=(const MyCanvas& other);

    void set(unsigned int x, unsigned int y, char c);
    char get(unsigned int x, unsigned int y) const;

    string to_string() const;
    void print() const;

    void init();
    ~MyCanvas();

};
// In dieser Headerdatei:
// Deklaration der Klasse MyCanvas
// Zu Uebungszwecken dieses Mal ausnahmsweise alle (!) Methodenruempfe
// in der .cpp Datei definieren.
// Auch fuer die Methoden mit kurzen Ruempfen 
// (kurze Konstruktoren, Setter, Getter, ...),
// die man normalerweise komplett in der Headerdatei 
// definieren wuerde ...

