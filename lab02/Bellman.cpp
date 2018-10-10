#include "stdafx.h"
#include "Bellman.h"

Bellman::Bellman()
{
}

Bellman::~Bellman()
{
}

std::vector<NUM> Bellman::getter(const std::vector<edge> && matrix, const int N)
{
	return worker(std::move(matrix), N);
}

std::vector<NUM> Bellman::worker(const std::vector<edge> && matrix, const int N)
{
	const NUM INF = INT_MAX / 2;
	std::vector<NUM> res(N, INF);
	res[N - 1] = 0;
	std::vector<NUM> p(N, -1);
	for (;;) {
		bool flag = false;
		for (NUM i = matrix.size() - 1; i >= 0 ; --i)	{
			if (res[matrix[i].a] > res[matrix[i].b] + matrix[i].cost) {
				res[matrix[i].a] = res[matrix[i].b] + matrix[i].cost;
				p[matrix[i].a] = matrix[i].b;
				flag = true;
			}
		}
		if (!flag) break;
	}

	std::vector<NUM> path;
	for (NUM cur = 0; cur != -1; cur = p[cur]) {
		path.emplace_back(cur + 1);
	}
	path.emplace_back(res[0]);
	return path;
}
