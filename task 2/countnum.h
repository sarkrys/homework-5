#pragma once
class Counter {
public:
	Counter() : num(1) {}
	Counter(int initialNum) : num(initialNum) {}
	void setNum(int value);
	void increment();
	void decrement();
	void printValue();
private:
	int num;
};