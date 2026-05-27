#include <iostream>
using namespace std;

int main()
{
    string password = "7788";//預設密碼
	string input;            //使用者輸入密碼變數 
    int count = 0;           //計數器 :紀錄輸入的次數
	
    while (count < 3) {
	    cout << "請輸入密碼\n";
        cin >> input;	
	    count++;                 //計數器+1 
	    if (input == password){  //判斷預設密碼跟輸入密碼相同
		    cout << "登入成功\n"; 
	        break;	
		}else {
		    cout << "密碼錯誤\n";  
	    } 
    }
    if (count ==3) {             // 檢查計數器諾嘗試(3次  
	    cout << "已經嘗試三次"; 
	}
    return 0;
) 
