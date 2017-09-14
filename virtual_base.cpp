#include <iostream>

class grandmother {
public:
    grandmother() {
        std::cout << "grandmother (default)" << std::endl;
    }
    grandmother(int attr) {
        std::cout << "grandmother: " << attr << std::endl;
    }
};

class mother: virtual public grandmother {
public:
    mother(int attr) : grandmother(attr) {
        std::cout << "mother: " << attr << std::endl;
    }
};

class daughter: virtual public mother {
public:
    daughter(int attr) : mother(attr) {
        std::cout << "daughter: " << attr << std::endl;
    }
};

int main() {
  daughter x(0);
}
