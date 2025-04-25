#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <string>
#include <vector>

// 학생 정보를 담을 구조체 정의
struct Student {
    std::string name;           // 학생 이름
    std::vector<int> scores;    // 과제 점수들
};


// 점수 입력 함수
void inputScores(std::vector<int>& scores);

// 평균 점수 계산 함수
double calculateAverage(const std::vector<int>& scores);

#endif