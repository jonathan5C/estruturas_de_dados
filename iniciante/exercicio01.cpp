#include <iostream>
#include <vector>
#include <numeric>

long long sumElements(const std::vector<int>& dataArray) {
    return std::accumulate(dataArray.begin(), dataArray.end(), 0LL);
}

int main() {
    std::vector<int> inputData = {1, 2, 3, 4, 5};
    
    long long resultSum = sumElements(inputData);

    std::cout << "Input Array: {";
    for (size_t i = 0; i < inputData.size(); ++i) {
        std::cout << inputData[i] << (i < inputData.size() - 1 ? ", " : "");
    }
    std::cout << "}" << std::endl;

    std::cout << "Expected Return: 15" << std::endl;
    std::cout << "Calculated Sum: " << resultSum << std::endl;

    return 0;
}