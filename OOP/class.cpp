#include <iostream>

class A{
public:
    A(){
        std::cout << " A ";
    }
    ~A(){
        std::cout << " ~A ";
    }
};

class A1{
public:
    A1(){
        std::cout << " A1 ";
    }
    ~A1(){
        std::cout << " ~A1 ";
    }
};

class B{
public:
    B(){
        std::cout << " B ";
    }
    ~B(){
        std::cout << " ~B ";
    }

private:
    A a;
};

class C: public B{
public:
    C(){
        std::cout << " C ";
    }
    ~C(){
        std::cout << " ~C ";
    }
private:
    A1 a1;
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    C c;
    // A  B  A1  C  ~C  ~A1  ~B  ~A
    return 0;
}
