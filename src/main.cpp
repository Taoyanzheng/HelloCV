#include <iostream>
#include "unitlib.h"

using namespace std;

int main() {
    int choice;
    double value;

    cout << "========== 单位转换器 ==========" << endl;
    cout << "1. 摄氏度 转 华氏度" << endl;
    cout << "2. 米 转 英尺" << endl;
    cout << "3. 千克 转 磅" << endl;
    cout << "================================" << endl;

    // 用户自主选择
    cout << "请选择转换类型 (输入 1-3): ";
    cin >> choice;

    cout << "请输入要转换的数值: ";
    cin >> value;

    // 根据选择调用库函数
    switch(choice) {
        case 1:
            cout << value << " 摄氏度 = " << celsiusToFahrenheit(value) << " 华氏度" << endl;
            break;
        case 2:
            cout << value << " 米 = " << metersToFeet(value) << " 英尺" << endl;
            break;
        case 3:
            cout << value << " 千克 = " << kgToPounds(value) << " 磅" << endl;
            break;
        default:
            cout << "输入无效，程序退出。" << endl;
    }

    return 0;
}
