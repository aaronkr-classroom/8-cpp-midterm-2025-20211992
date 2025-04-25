#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <string>
#include <vector>

// �л� ������ ���� ����ü ����
struct Student {
    std::string name;           // �л� �̸�
    std::vector<int> scores;    // ���� ������
};


// ���� �Է� �Լ�
void inputScores(std::vector<int>& scores);

// ��� ���� ��� �Լ�
double calculateAverage(const std::vector<int>& scores);

#endif