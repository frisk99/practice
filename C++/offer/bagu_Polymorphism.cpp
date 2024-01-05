#include <iostream>

// 基类
class Base {
public:
    virtual void show() {
        std::cout << "Base class" << std::endl;
    }
    // 注意：通常需要一个虚析构函数
    virtual ~Base() {}
};

// 派生类
class Derived : public Base {
public:
    void show() override { // 覆盖基类的函数
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Base* b;       // 基类指针
    Derived d;     // 派生类对象
    b = &d;        // 指针指向派生类

    b->show();     // 输出 "Derived class"
    // 运行时，根据指针指向的对象类型调用相应的show函数

    return 0;
}

