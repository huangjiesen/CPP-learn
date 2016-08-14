#include <iostream>
using namespace std;

void fun(void);
// static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
static int count = 10;

int main() {
    while (count--) {
        fun();
    }
    return 0;
}

void fun(void) {
    //static 修饰局部变量可以在函数调用之间保持局部变量的值（只初始化一次）。
    static int i = 0;
    i++;
    cout << "i=" << i << ",count=" << count << endl;
}
