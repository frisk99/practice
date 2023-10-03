#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.resize(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int>::iterator it = v.begin();
    while (it != v.end()) {
        if (*it == 3) {
           it = v.insert(it, 10); //插入在3的前面 
            cout << *it << " ";
            it++;
            //cout<<v.size()<<endl;
            cout << *it << " ";
            it++; // 更新迭代器，跳过新插入的元素
        } else {
            cout << *it << " ";
            ++it; // 更新迭代器
        }
    }
    cout << endl;
    return 0;
}

