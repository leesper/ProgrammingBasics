//
// score.h: 统计全年级学生考试成绩的分数段分布情况
//

#ifndef SCORE_H
#define SCORE_H


class Score {
public:
    Score(int *scores, int len);
    int operator[] (int k);

private:
    int *scores;
    int len;
};


#endif //SCORE_H
