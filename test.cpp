#include <iostream>
#include <vector>
int main()
{
    std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
    std::vector<int> nums;
    nums.push_back(0); nums.push_back(0); nums.push_back(1);
    for (int i : nums)
    {
        std::cout << i << '\n';
    }
    return 0;
}