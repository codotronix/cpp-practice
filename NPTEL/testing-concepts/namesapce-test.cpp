#include <iostream>
using namespace std;

namespace ns1 {
    int x = 10;
}
namespace ns2 {
    int x = 9;
}

int main() {
    using namespace ns1;
    using namespace ns2;
    cout << x << endl;  // no ambiguity please
    return 0;
}