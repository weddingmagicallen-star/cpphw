#include <iostream>
using namespace std;

int main() {
    float cat[6] = {3.2, 3.5, 3.8, 3.1, 3.3, 3.6};
    float total = 0;
    for(int i = 0; i < 6; i++) {
        total = total +    cat[i]    ;                       
    }
    cout << "平均體重 = " <<   total/6   << " 公斤 " << endl;  
    return 0;
}
