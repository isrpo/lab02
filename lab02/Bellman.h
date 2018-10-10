#pragma once
#include <vector>

typedef int NUM;

struct edge {
	NUM a, b, cost;
};

class Bellman {
public:
	Bellman ();
	~Bellman ();
	std::vector<NUM> getter(const std::vector<edge> && matrix, const int N);

private:
	std::vector<NUM> worker(const std::vector<edge> && matrix, const int N);


};