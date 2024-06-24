#include <iostream>
#include <vector>
#include <cmath>
#include <string>

int main() {
    int numInterceptions;
    std::cin >> numInterceptions;
    std::vector<std::string> matches;

    std::vector<std::vector<int>> distances(numInterceptions, std::vector<int>(numInterceptions));

    for (int i = 0; i < numInterceptions; i++) {
        for (int j = 0; j < numInterceptions; j++) {
            std::cin >> distances[i][j];
        }
    }

    // Print out the matrix with rows descriptions and column titles
    std::cout << " ";
    for (char c = 'A'; c < 'A' + numInterceptions; c++) {
        std::cout << " " << c;
    }
    std::cout << std::endl;

    for (int i = 0; i < numInterceptions; i++) {
        std::cout << static_cast<char>('A' + i);
        for (int j = 0; j < numInterceptions; j++) {
            std::cout << " " << distances[i][j];
        }
        std::cout << std::endl;
    }

    // Find and print optimization opportunities
    int totalOpportunities = 0;
    int maxOpportunity = 0;
    std::vector<std::string> maxOpportunityStrings;

    for (int i = 0; i < numInterceptions; i++) {
        for (int j = 0; j < numInterceptions; j++) {
            if (i != j) {
                std::string matchText = std::to_string(i) + std::to_string(j);
                std::string matchReverseText = std::to_string(j) + std::to_string(i);
                if (std::find(matches.begin(), matches.end(), matchText) != matches.end()) {
                    continue;
                }
                else if (std::find(matches.begin(), matches.end(), matchReverseText) != matches.end()) {
                    continue;
                }
                else {
                    matches.push_back(matchText);
                }
                int difference = std::abs(distances[i][j] - distances[j][i]);
                if (difference > 0) {
                    std::cout << static_cast<char>('A' + i) << static_cast<char>('A' + j) << "(" << distances[i][j] << ") - "
                        << static_cast<char>('A' + j) << static_cast<char>('A' + i) << "(" << distances[j][i] << ")" << std::endl;
                    totalOpportunities += difference;

                    if (difference > maxOpportunity) {
                        maxOpportunity = difference;
                        maxOpportunityStrings.clear();
                        maxOpportunityStrings.push_back(std::string(1, static_cast<char>('A' + i)) + std::string(1, static_cast<char>('A' + j))
                            + "-" + std::string(1, static_cast<char>('A' + j)) + std::string(1, static_cast<char>('A' + i)));
                    }
                    else if (difference == maxOpportunity) {
                        maxOpportunityStrings.push_back(std::string(1, static_cast<char>('A' + i)) + std::string(1, static_cast<char>('A' + j))
                            + "-" + std::string(1, static_cast<char>('A' + j)) + std::string(1, static_cast<char>('A' + i)));
                    }
                }
            }
        }
    }

    std::cout << "Total opportunities: " << totalOpportunities << std::endl;

    if (maxOpportunity == 0) {
        std::cout << "Max optimization: none" << std::endl;
    }
    else {
        std::cout << "Max optimization: " << maxOpportunity << ": ";
        for (int i = 0; i < maxOpportunityStrings.size(); i++) {
            std::cout << maxOpportunityStrings[i];
            if (i < maxOpportunityStrings.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}