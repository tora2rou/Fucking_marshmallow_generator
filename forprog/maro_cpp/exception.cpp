#include "exception.hpp"

// コンストラクタの実装
Error::Error(const std::string& msg) : std::runtime_error("[ERROR] " + msg) {}