#include "MyLib.h"
#include <iostream>

namespace MyLib {
    void say_hello() {
#ifdef SPECIAL_FLAG_ENABLED
        std::cout << "Hello from MyLib (Special Build)!" << std::endl;
#else
        std::cout << "Hello from MyLib!" << std::endl;
#endif
    }
}
