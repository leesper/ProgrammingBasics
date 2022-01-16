//
// score.cpp: 统计全年级学生考试成绩的分数段分布情况
//

#include "score.h"

Score::Score(int *scores, int len) {
    this->scores = scores;
    this->len = len;
}

int Score::operator[](int k) {
    int low = 10 * k + 1;
    int high = 10 * k + 10;

    int count = 0;
    for (int i = 0; i < len; i++) {
        if (scores[i] >= low && scores[i] <= high)
            count ++;
    }
    return count;
}