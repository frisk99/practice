#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    std::vector<std::string> words; // ����һ���洢�ַ�����vector
    std::string word;

    cout << "�����뵥�ʣ��Կո�ָ������س����������룩��" << endl;

    while (std::cin >> word && word!="") {
        words.push_back(word); // ������ĵ�����ӵ�vector��
    }

    // ���������vector�еĵ���
    for (auto  w : words) {
        cout << w << " ";
    }

    return 0;
}

