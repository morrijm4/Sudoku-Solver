//
// Created by Matthew Morrison on 1/25/21.
//

#include "../include/Sudoku.h"
#include <fstream>
#include <iostream>

/**
 * Constructor - creates an empty sudoku puzzle
 */
Sudoku::Sudoku()
{
    for (int row = 0; row < SIZE; ++row) {
        for (int col = 0; col < SIZE; ++col) {
            grid[row][col] = NO_VALUE;
        }
    }
}

/**
 * inputs data from a text file into the Sudoku object
 *
 * @param file  text file with numbers arranged in a 9 x 9 grid
 */
void Sudoku::loadFromFile(const std::string& file)
{
    std::ifstream myFile(file);

    if (myFile.is_open()) {
        for (int row = 0; myFile.good() && row < SIZE; ++row) {
            for (int col = 0; col < SIZE; ++col) {
                myFile >> grid[row][col];
            }
        }
    } else {
        std::cout << "ERROR: Could not find file" << std::endl;
    }
    myFile.close();
}

/**
 * solves the sudoku puzzle
 *
 * @return  boolean value of whether or not the puzzle is solvable, true if possible
 */
bool Sudoku::solve()
{
    return solvePuzzle(0, 0);
}

/**
 * Determines if two puzzles are equivalent
 *
 * @param   other Sudoku object
 * @return  boolean value of whether the two puzzles are the same, true if equal
 */
bool Sudoku::equals(const Sudoku& other) const
{
    bool equal = true;
    for (int row = 0; row < SIZE && equal; ++row) {
        for (int col = 0; col < SIZE && equal; ++col) {
            if (grid[row][col] != other.grid[row][col]) {
                equal = false;
            }
        }
    }
    return equal;
}

/**
 * friend function that prints the sudoku puzzle to the given ostream
 *
 * @param out       ostream of where the puzzle will be printed
 * @param puzzle    Sudoku object that will be printed
 * @return          ostream with the puzzle inserted
 */
std::ostream& operator<<(std::ostream& out, const Sudoku& puzzle)
{
    std::string line = "------+-------+------\n";

    for (int row = 0; row < SIZE; ++row) {
        for (int col = 0; col < SIZE; ++col) {
            int num = puzzle.grid[row][col];
            if (num != NO_VALUE) {
                out << std::to_string(num) + " ";
            } else {
                out << "  ";
            }
            if (col == 2 || col == 5) {
                out << "| ";
            } else if (col == 8) {
                out << "\n";
            }
        }
        if (row == 2 || row == 5) {
            out << line;
        }
    }

    return out;
}

/**
 * Returns true if num is a valid input to the sudoku puzzle
 *
 * @param row   Integer value for the left bracket of the 2D array grid
 * @param col   Integer value for the right bracket of the 2D array grid
 * @param num   Integer value which the validity is tested
 * @return      A boolean value where it is true if num can be inserted onto the grid
 */
bool Sudoku::isValidElement(int row, int col, int num)
{
    return isValidRow(row, col, num) && isValidCol(row, col, num)
           && isValidBox(row - (row % 3), col - (col % 3), row, col, num);
}

/**
 * Returns true if num is a valid input to the given box
 *
 * @param sRow  The first row of the box
 * @param sCol  The first column of the box
 * @param row   Integer value for the left bracket of the 2D array grid
 * @param col   Integer value for the right bracket of the 2D array grid
 * @param num   Integer value which the validity is tested
 * @return      A boolean value where it is true if num can be inserted onto the box
 */
bool Sudoku::isValidBox(int sRow, int sCol, int row, int col, int num)
{
    /*
     * Variable Reference:
     *
     * s = start
     * e = end
     * org = original
     */

    int eRow = sRow + 3, eCol = sCol + 3, orgCol = sCol;
    while (sRow < eRow) {
        while (sCol < eCol) {
            if (grid[sRow][sCol] == num && !((sRow == row) && (sCol == col)))
                return false;
            ++sCol;
        }
        sCol = orgCol;
        ++sRow;
    }
    return true;
}

/**
 * Returns true if num is a valid input to the given row
 *
 * @param row   Integer value for the left bracket of the 2D array grid
 * @param col   Integer value for the right bracket of the 2D array grid
 * @param num   Integer value which the validity is tested
 * @return      A boolean value where it is true if num can be inserted onto the row
 */
bool Sudoku::isValidRow(int row, int col, int num)
{
    // check horizontally
    for (int i = 0; i < SIZE; ++i) {
        if (num == grid[row][i] && col != i)
            return false;
    }
    return true;
}

/**
 * Returns true if num is a valid input to the given column
 *
 * @param row   Integer value for the left bracket of the 2D array grid
 * @param col   Integer value for the right bracket of the 2D array grid
 * @param num   Integer value which the validity is tested
 * @return      A boolean value where it is true if num can be inserted onto the column
 */
bool Sudoku::isValidCol(int row, int col, int num)
{
    // check vertically
    for (int i = 0; i < SIZE; ++i) {
        if (num == grid[i][col] && row != i)
            return false;
    }
    return true;
}

/**
 * Helper method that recursively solves the sudoku puzzle
 *
 * @param row   integer value for the first row where the solver will start
 * @param col   integer value for the first column where the solver will start
 * @return      Returns a boolean value for if the puzzle is solvable, true is possible
 */
bool Sudoku::solvePuzzle(int row, int col)
{
    // Returns true if row is outside the bounds of the grid
    // meaning that all values have been determined valid
    if (row >= SIZE) {
        return true;
    }

    // end of row move to the next
    if (col >= SIZE) {
        return solvePuzzle(row + 1, 0);
    }

    // finds the next null element
    if (grid[row][col] != NO_VALUE) {
        return solvePuzzle(row, col + 1);
    }
    // if null element find a value that is valid
    for (int i = 1; i <= SIZE; ++i) {
        if (isValidElement(row, col, i)) {
            grid[row][col] = i;
            if (solvePuzzle(row, col + 1)) {
                return true;
            }
            grid[row][col] = NO_VALUE;
        }
    }
    return false;
}
