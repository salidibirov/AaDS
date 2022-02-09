#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <limits>
#include <tuple>
#include <iomanip>
#include <queue>
#include <deque>
#include <bitset>
#include <cassert>
#include <cmath>
#include <memory>
#include <set>
#include <map>
#include <exception>
#include <sstream>
#include <utility>

using namespace std;

typedef long long ll;
typedef long double ld;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // H/W English 95-96 Ex 5, 6, 7, 8, 2 Garagylya
    // 100-102 Ex 10-17

    vector<int> v = {8, 7, 6, 5, 4, 3, 2, 1};
    //Сортировка вставками
    for (int i = 1; i < 5; ++i) {
        int j = i;
        while (j > 0 && v[j] < v[j - 1]) {
            swap(v[j], v[j - 1]);
            j--;
        }
    }

    for (const auto& i : v) {
        cout << i << ' ';
    }

    return 0;
}






















	