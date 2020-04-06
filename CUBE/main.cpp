#include <iostream>
#include "Cube.h"


using std::cout;

int main() {
        Cube c;
        c.setLength(3.48);
        double volume = c.getVolume();
        cout << "Volume is " << volume << std::endl;

        return 0;
}