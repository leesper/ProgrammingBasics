//
// 设计实现一个名为Log的类，能方便输出调试信息
//

#ifndef LOG_H
#define LOG_H
#include <string>
#include <iostream>

enum Level {info, warning, error, fatal};

Level level(std::string s);

class Log {
public:
    Log(): current(info), indicator(info) {}
    void set_level(std::string s);
    Log& operator<< (Level l);
    Log& operator<< (const char* s);
    Log& operator<< (std::ostream& (*f)(std::ostream&));

private:
    Level current;
    Level indicator;
};


#endif //LOG_H
