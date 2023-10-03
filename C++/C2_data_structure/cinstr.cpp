#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    std::vector<std::string> words; // 创建一个存储字符串的vector
    std::string word;

    cout << "请输入单词（以空格分隔，按回车键结束输入）：" << endl;

    while (std::cin >> word && word!="") {
        words.push_back(word); // 将输入的单词添加到vector中
    }

    // 遍历并输出vector中的单词
    for (auto  w : words) {
        cout << w << " ";
    }

    return 0;
}

