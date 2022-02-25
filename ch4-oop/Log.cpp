//
// Created by 李科君 on 2022/1/18.
//

#include "Log.h"

Level level(std::string s) {
    if (s == "info")
        return info;
    if (s == "warning")
        return warning;
    if (s == "error")
        return error;
    if (s == "fatal")
        return fatal;

    return info;
}

void Log::set_level(std::string s) {
    current = level(s);
}

Log &Log::operator<<(Level l) {
    indicator = l;
    return *this;
}

Log &Log::operator<<(const char *s) {
    if (indicator >= current)
        std::cout << s;

    return *this;
}

Log &Log::operator<<(std::ostream &(*f)(std::ostream &)) {
    if (indicator >= current)
        f(std::cout);

    return *this;
}
