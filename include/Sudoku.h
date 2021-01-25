//
// Created by Matthew Morrison on 1/25/21.
//

#ifndef SUDOKU_SOLVER_SUDOKU_H
#define SUDOKU_SOLVER_SUDOKU_H

#include <iostream>
#include <string>

const int SIZE = 9; // Size of the row and column of the sudoku puzzle
const int NO_VALUE = 0; // Null value for the grid

class Sudoku {

private:
    int grid[SIZE][SIZE] {}; // 2D array that represents the puzzle

    /**
     * Returns true if num is a valid input to the sudoku puzzle
     *
     * @param row   Integer value for the left bracket of the 2D array grid
     * @param col   Integer value for the right bracket of the 2D array grid
     * @param num   Integer value which the validity is tested
     * @return      A boolean value where it is true if num can be inserted onto the grid
     */
    bool isValidElement(int row, int col, int num);

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
    bool isValidBox(int sRow, int sCol, int row, int col, int num);

    /**
     * Returns true if num is a valid input to the given row
     *
     * @param row   Integer value for the left bracket of the 2D array grid
     * @param col   Integer value for the right bracket of the 2D array grid
     * @param num   Integer value which the validity is tested
     * @return      A boolean value where it is true if num can be inserted onto the row
     */
    bool isValidRow(int row, int col, int num);

    /**
     * Returns true if num is a valid input to the given column
     *
     * @param row   Integer value for the left bracket of the 2D array grid
     * @param col   Integer value for the right bracket of the 2D array grid
     * @param num   Integer value which the validity is tested
     * @return      A boolean value where it is true if num can be inserted onto the column
     */
    bool isValidCol(int row, int col, int num);

    /**
     * Helper method that recursively solves the sudoku puzzle
     *
     * @param row   integer value for the first row where the solver will start
     * @param col   integer value for the first column where the solver will start
     * @return      Returns a boolean value for if the puzzle is solvable, true is possible
     */
    bool solvePuzzle(int row, int col);

public:
    /**
     * Constructor - creates an empty sudoku puzzle
     */
    Sudoku();

    /**
     * inputs data from a text file into the Sudoku object
     *
     * @param file  text file with numbers arranged in a 9 x 9 grid
     */
    void loadFromFile(const std::string& file);

    /**
     * solves the sudoku puzzle
     *
     * @return  boolean value of whether or not the puzzle is solvable, true if possible
     */
    bool solve();

    /**
     * Determines if two puzzles are equivalent
     *
     * @param   other Sudoku object
     * @return  boolean value of whether the two puzzles are the same, true if equal
     */
    bool equals(const Sudoku& other) const;

    /**
     * friend function that prints the sudoku puzzle to the given ostream
     *
     * @param out       ostream of where the puzzle will be printed
     * @param puzzle    Sudoku object that will be printed
     * @return          ostream with the puzzle inserted
     */
    friend std::ostream& operator<<(std::ostream& out, const Sudoku& puzzle);
};



#endif //SUDOKU_SOLVER_SUDOKU_H
