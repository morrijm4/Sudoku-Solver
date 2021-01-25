#include "include/Sudoku.h"
#include <iostream>
#include <string>

int main() {
    std::string ans, filename;
    Sudoku puzzle;
    Sudoku solution;

    std::cout << std::endl << "Enter puzzle text file (assumes file is in \"txt\" folder).";
    std::cout << std::endl << "Pressing <Enter> will run the file \"sudoku-test1.txt\".";
    std::cout << std::endl;
    std::getline(std::cin, filename);

    if (filename.empty()) {
        filename = "sudoku-test1.txt";
    }

    puzzle.loadFromFile("../txt/" + filename);
    solution.loadFromFile("../txt/sudoku-test1-solution.txt");

    std::cout << "\nPuzzle:\n\n";
    std::cout << puzzle;

    std::cout << std::endl;
    std::cout << "Solution:\n\n";

    clock_t startTime = clock();

    if (puzzle.solve()) {
        std::cout << puzzle << std::endl; // Print solved puzzle.
    } else {
        std::cout << "No Solution" << std::endl; // Indicate there is no solution.
    }

    if (puzzle.equals(solution)) {
        std::cout << "Solver works! This is the solution!" << std::endl;
    } else {
        std::cout << "Not the correct solution. Try again." << std::endl;
    }

    clock_t endTime = clock();

    std::cout << "Time used: " << (endTime - startTime) / (double)CLOCKS_PER_SEC << " seconds."
              << std::endl;
}
