#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>

class Random{
	private:
    	std::mt19937 gen; // 乱数生成エンジンをメンバー変数として持つ

	public:
    	// コンストラクタで一度だけ乱数生成器を初期化
    	Random() : gen(std::random_device()()) {}
		char choice(std::vector<char>& vec);
		int randint(int start, int end);
};




