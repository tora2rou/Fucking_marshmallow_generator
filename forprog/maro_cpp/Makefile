# コンパイラとコンパイラオプションの定義
CXX = g++
CXXFLAGS = -Wall -std=c++11

# 実行ファイル名
TARGET = maro_gen

# 依存するオブジェクトファイル
OBJS = main.o maro.o random_use.o exception.o

# デフォルトのターゲット: all
all: $(TARGET)

# 実行ファイルを生成するルール
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 各オブジェクトファイルを生成するルール
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $<

maro.o: maro.cpp
	$(CXX) $(CXXFLAGS) -c $<

random_use.o: random_use.cpp
	$(CXX) $(CXXFLAGS) -c $<

exception.o:exception.cpp
	$(CXX) $(CXXFLAGS) -c $<

# クリーンアップのルール
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)