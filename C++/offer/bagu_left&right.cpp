#include <iostream>
#include <vector>
void printVectorSize(const std::vector<int>& v) {
    std::cout << "The size of vector is: " << v.size() << std::endl;
}

int main() {
    printVectorSize(std::vector<int>{1, 2, 3, 4, 5}); // ��ʱ��������ֵ
    int test = 1;
    int && t =1;
    int    &t1 =1;
    // ��ȡ��ʱ�ַ����ĳ���
    std::cout << "Temporary string size: " << std::string("temporary").size() << std::endl;

    // ʹ����ֵ����
    int&& rval_ref = 10; // 10��һ����ֵ
    rval_ref = 20; // �����޸�ͨ����ֵ���ð󶨵���ֵ
    std::cout << "rval_ref: " << rval_ref << std::endl;

    return 0;
}

