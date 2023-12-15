// Datei: main.cpp

#define CATCH_CONFIG_RUNNER
#include "gip_mini_catch_v_2_3.h"

#include <string>

#include "MyCanvas.h"

int main()
{
    // Aufruf der Unit Tests ...
    Catch::Session().run();

    const std::string txt = "GIP-INF";

    MyCanvas canvas{11, 3};

    for (size_t pos = 0; pos < txt.length(); pos++)
        canvas.set( pos + 2 , 1 , txt.at(pos) );

    canvas.print();

    system("PAUSE");
    return 0;
}
