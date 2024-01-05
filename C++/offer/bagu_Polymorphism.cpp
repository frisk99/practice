#include <iostream>

// ����
class Base {
public:
    virtual void show() {
        std::cout << "Base class" << std::endl;
    }
    // ע�⣺ͨ����Ҫһ������������
    virtual ~Base() {}
};

// ������
class Derived : public Base {
public:
    void show() override { // ���ǻ���ĺ���
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Base* b;       // ����ָ��
    Derived d;     // ���������
    b = &d;        // ָ��ָ��������

    b->show();     // ��� "Derived class"
    // ����ʱ������ָ��ָ��Ķ������͵�����Ӧ��show����

    return 0;
}

