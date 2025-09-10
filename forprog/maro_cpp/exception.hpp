#pragma once

#include <stdexcept> // std::runtime_errorを継承
#include <string>

class Error : public std::runtime_error {
public:
    // コンストラクタでメッセージを受け取る
    explicit Error(const std::string& msg);
};