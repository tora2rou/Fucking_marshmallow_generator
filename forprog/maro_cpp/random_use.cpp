#include "random_def.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <random>

char Random::choice(std::vector<char>& vec){
    // 既に初期化された乱数生成エンジンを使用
    std::uniform_int_distribution<> dis(0, vec.size() - 1);
    return vec[dis(gen)];
}

int Random::randint(int start,int end){
    std::uniform_int_distribution<> distrib(start, end);
    return distrib(gen);
}