#include <algorithm>
#include <iostream>
#include <vector>
int count_sheep(std::vector<bool> v) {
return std::count(v.cbegin(),v.cend(),true);
}
int main() {
std::vector<bool> vv;
vv.push_back(true);
vv.push_back(true);
vv.push_back(true);
std::cout << count_sheep(vv) << "\n";
}

