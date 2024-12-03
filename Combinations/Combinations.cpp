// Combinations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void GetCombinations(int n, int start, int k, std::vector<int>& v, std::vector<std::vector<int>>& result)
{
    if (v.size() == static_cast<size_t>(k))
    {
        result.push_back(v);
        return;
    }

    if (start > n)
        return;

    for (int i = start; i <= n; ++i)
    {
        v.push_back(i);
        GetCombinations(n, i+1, k, v, result);
        v.pop_back();
    }
}

std::vector<std::vector<int>> Combinations(int n, int k)
{
    std::vector<std::vector<int>> result;
    std::vector<int> r;

    GetCombinations(n, 1, k, r, result);
    return result;
}

int main()
{
    std::vector<std::vector<int>> result = Combinations(4, 2);
    for (auto& r : result)
    {
        std::cout << r[0];
        for (size_t i = 1; i < r.size(); ++i)
            std::cout << ", " << r[i];
        std::cout << std::endl;
    }
}
