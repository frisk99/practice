#include <iostream>
#include <vector>
void printVectorSize(const std::vector<int>& v) {
    std::cout << "The size of vector is: " << v.size() << std::endl;
}

int main() {
    printVectorSize(std::vector<int>{1, 2, 3, 4, 5}); // 临时向量是右值
    int test = 1;
    int && t =1;
    int    &t1 =1;
    // 获取临时字符串的长度
    std::cout << "Temporary string size: " << std::string("temporary").size() << std::endl;

    // 使用右值引用
    int&& rval_ref = 10; // 10是一个右值
    rval_ref = 20; // 可以修改通过右值引用绑定的右值
    std::cout << "rval_ref: " << rval_ref << std::endl;

    return 0;
}

