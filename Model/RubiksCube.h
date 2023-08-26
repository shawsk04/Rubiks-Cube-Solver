#include "bits/stdc++.h"
using namespace std;


//A base class for all Rubik's Cube Model


#ifndef RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H
#define RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H


class RubiksCube {
public:
    enum class FACE {
        UP,
        LEFT,
        FRONT,
        RIGHT,
        BACK,
        DOWN
    };

    enum class COLOR {
        WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
    };

    enum class MOVE {
        L, LPRIME, L2,
        R, RPRIME, R2,
        U, UPRIME, U2,
        D, DPRIME, D2,
        F, FPRIME, F2,
        B, BPRIME, B2
    };


    //Returns the color of the cell at (row, col) in face.

    virtual COLOR getColor(FACE face, unsigned row, unsigned col) const = 0;

    char getColorLetter(COLOR color) const;

    virtual bool isSolved() const = 0;

    //Returns the move in the string format.
    string getMove(MOVE ind) const;



    //Print the Rubik Cube in Planar format.

    void print() const;



    //Randomly shuffle the cube.

    RubiksCube& randomShuffleCube(unsigned int times);

    // Rotational moves on Rubik Cube

    RubiksCube& move(MOVE ind);
    RubiksCube& invert(MOVE ind);

    virtual RubiksCube& u() = 0;
    virtual RubiksCube& uPrime() = 0;
    virtual RubiksCube& u2() = 0;

    virtual RubiksCube& l() = 0;
    virtual RubiksCube& lPrime() = 0;
    virtual RubiksCube& l2() = 0;

    virtual RubiksCube& f() = 0;
    virtual RubiksCube& fPrime() = 0;
    virtual RubiksCube& f2() = 0;

    virtual RubiksCube& r() = 0;
    virtual RubiksCube& rPrime() = 0;
    virtual RubiksCube& r2() = 0;

    virtual RubiksCube& b() = 0;
    virtual RubiksCube& bPrime() = 0;
    virtual RubiksCube& b2() = 0;

    virtual RubiksCube& d() = 0;
    virtual RubiksCube& dPrime() = 0;
    virtual RubiksCube& d2() = 0;
};

#endif