//
// 主函数示例
//
#include <iostream>
#include "Log.h"
using namespace std;

int main() {
    Log log;
    log << "debug message" << endl;

    log.set_level("error");
    log << level("warning") << "WARNING MESSAGE" << endl;
    log << level("fatal") << "BROKEN" << endl;

    log << "info" << endl;

    return 0;
}