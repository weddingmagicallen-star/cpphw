#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "請輸入年齡:";
    cin >> age;
    
    if(age >= 18) {
	   cout << "你已經成年,可以喝酒\n";
	} 
	if(age < 18){
	   cout << "未成年<不可以喝酒\n"; 
	}
	
    return 0;
