﻿// lab02.cpp : Defines the entry point for the console application.
// test

#include "stdafx.h"
#include "Bellman.h"
#include <iostream>


int main()
{
	std::vector<edge> matrix = { {0, 1, 3}, {0, 4, 9}, {0, 5, 4}, {0, 2, 7}, {1, 3, 8}, {4, 3, 3}, {2, 8, 8}, {3, 9, 8},
								 {4, 6, 4}, {4, 7, 7}, {5, 7, 10}, {5, 8, 6}, {6, 9, 9}, {7, 9, 6}, {8, 9, 5} };

	std::vector<NUM> res;
	Bellman work;
	res = work.getter(std::move(matrix), 10);
	int a

	for (NUM i = 0; i < res.size() - 1; ++i) {
		std::cout << res[i] << " ";
	}
	std::cout << "\nLength: " << res[res.size() - 1] << std::endl;
    return 0;
}

