/* Author: Sonu Kumar Shaw (shawsk04) */

#include <bits/stdc++.h>
// #include "Model/RubiksCube3dArray.cpp"
// #include "Model/RubiksCube1dArray.cpp"
// #include "Model/RubiksCubeBitboard.cpp"
#include "Solver/DFSSolver.h"
#include "Solver/BFSSolver.h"
#include "Solver/IDDFSSolver.h"
#include "Solver/IDAstarSolver.h"
// #include "PatternDatabases/CornerPatternDatabase.h"
#include "PatternDatabases/CornerDBMaker.h"

using namespace std;

int main()
{

    // RubiksCube3dArray object3DArray;
    // RubiksCube1dArray object1dArray;
    // RubiksCubeBitboard objectBitboard;

    // object3DArray.print();

    // if (object3DArray.isSolved()) cout << "SOLVED\n";
    // else cout << "NOT SOLVED\n\n";

    // if (object1dArray.isSolved()) cout << "SOLVED\n\n";
    // else cout << "NOT SOLVED\n\n";

    //  if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
    // else cout << "NOT SOLVED\n\n";

    // object.f();
    // object.b();
    // object.d();
    // object.l();
    // object.u();
    // object.r();
    // object.print();

    // if (object.isSolved()) cout << "Solved\n";
    // else cout << "Not Solved\n";

    // object.rPrime();
    // object.uPrime();
    // object.lPrime();
    // object.dPrime();
    // object.bPrime();
    // object.fPrime();
    // object.print();

    // if (object.isSolved()) cout << "Solved\n";
    // else cout << "Not Solved\n";

    // object.randomShuffleCube(4);
    // object.print();
    // if (object.isSolved()) cout << "Solved\n";
    // else cout << "Not Solved\n";

    // Random Shuffle Testing---------------------------------------------------------------------
    // RubiksCubeBitboard cube;
    // cube.print();
    // vector<RubiksCube::MOVE> moves = cube.randomShuffleCube(10);
    // for (auto move : moves)
    // {
    //     cout << cube.getMove(move) << " ";
    // }
    // cube.print();

    // Creating two cubes------------------------------------------------------------------
    // RubiksCube3dArray cube1;
    // RubiksCube3dArray cube2;

    // RubiksCube1dArray cube1;
    // RubiksCube1dArray cube2;

    // RubiksCubeBitboard cube1;
    // RubiksCubeBitboard cube2;

    // Equality and assignment of cubes---------------------------------------------------------

    // if (cube1 == cube2)
    //     cout
    //         << "Is equal\n";
    // else
    //     cout << "Not Equal\n";

    // cube1.randomShuffleCube(1);

    // if (cube1 == cube2)
    //     cout << "Is equal\n";
    // else
    //     cout << "Not Equal\n";

    // cube2 = cube1;

    // if (cube1 == cube2)
    //     cout << "Is equal\n";
    // else
    //     cout << "Not Equal\n";

    // Unordered_map of Cubes-------------------------------------------------------------

    // unordered_map<RubiksCube3dArray, bool, Hash3d> mp1;

    // unordered_map<RubiksCube1dArray, bool, Hash1d> mp1;

    // unordered_map<RubiksCubeBitboard, bool, HashBitboard> mp1;

    // mp1[cube1] = true;
    // cube2.randomShuffleCube(8);

    // if (mp1[cube1])
    //     cout << "Cube1 is present\n";
    // else
    //     cout << "Cube1 is not present\n";

    // if (mp1[cube2])
    //     cout << "Cube2 is present\n";
    // else
    //     cout << "Cube2 is not present\n";


// TESTING DFS SOLVER ----------------------------------------------------------------------------------------

    // RubiksCube3dArray cube;
    // cube.print();

    // vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(5);

    // cout << "MOVES FOR SHUFFLING:";
    // for (auto move : shuffle_moves)
    //     cout << cube.getMove(move) << " ";
    // cout << "\n";

    // cube.print();

    // DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 6);

    // vector<RubiksCube::MOVE> solve_moves = dfsSolver.solve();

    // cout << "MOVES FOR SOLVING:";
    // for (auto move : solve_moves)
    //     cout << cube.getMove(move) << " ";
    // cout << "\n";

    // dfsSolver.rubiksCube.print();



// TESTING BFS SOLVER ----------------------------------------------------------------------------------------
    
    // RubiksCubeBitboard cube;
    // cube.print();

    // vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(4);

    // cout << "MOVES FOR SHUFFLING:";
    // for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // cube.print();

    // BFSSolver<RubiksCubeBitboard, HashBitboard> bfsSolver(cube);
    // vector<RubiksCube::MOVE> solve_moves = bfsSolver.solve();

    // cout << "MOVES FOR SOLVING:";
    // for(auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // bfsSolver.rubiksCube.print();


// TESTING IDDFS SOLVER ----------------------------------------------------------------------------------------

    // RubiksCubeBitboard cube;
    // cube.print();

    // vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(9);

    // cout << "MOVES FOR SHUFFLING:";
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // cube.print();

    // IDDFSSolver<RubiksCubeBitboard, HashBitboard> iddfsSolver(cube, 10);
    // vector<RubiksCube::MOVE> solve_moves = iddfsSolver.solve();

    // cout << "MOVES FOR SOLVING:";
    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // iddfsSolver.rubiksCube.print();



// TESTING IDA* SOLVER ----------------------------------------------------------------------------------------

    // RubiksCubeBitboard cube;
    // cube.print();

    // vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(7);

    // cout << "MOVES FOR SHUFFLING:";
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // cube.print();

    // IDAstarSolver<RubiksCubeBitboard, HashBitboard> idAstarSolver(cube);
    // vector<RubiksCube::MOVE> solve_moves = idAstarSolver.solve();

    // cout << "MOVES FOR SOLVING:";
    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // idAstarSolver.rubiksCube.print();


// CornerPatternDatabase Testing ---------------------------------------------------------------------------------

//    CornerPatternDatabase cornerDB;
//    RubiksCubeBitboard cube;
//    cube.print();

//    cout << (int)cornerDB.getNumMoves(cube) << "\n";

//    cornerDB.setNumMoves(cube, 5);

//    cout << (int)cornerDB.getNumMoves(cube) << "\n";

//    cube.randomShuffleCube(1);
//    cube.print();
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";

//    cornerDB.setNumMoves(cube, 6);

//    cout << (int)cornerDB.getNumMoves(cube) << "\n";


// CornerDBMaker Testing --------------------------------------------------------------------------
    string fileName = "E:\\Clg\\Projects\\Rubiks-Cube-Solver\\Databases\\cornerDepth5V1.txt";

//    Code to create Corner Database
//    CornerDBMaker dbMaker(fileName, 0x77);
//    dbMaker.bfsAndStore();

    RubiksCubeBitboard cube;
    cout << "INITIAL STATE:" << "\n";
    cube.print();

    auto shuffleMoves = cube.randomShuffleCube(14);

    cout << "MOVES FOR SHUFFLING: ";
    for(auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";
    
    cout << "SHUFFLED STATE:" << "\n";
    cube.print();

    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idaStarSolver(cube, fileName);
    auto moves = idaStarSolver.solve();

    cout << "MOVES FOR SOLVING: ";
    for(auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";

    cout << "FINAL STATE:" << "\n";
    idaStarSolver.rubiksCube.print();


    return 0;
}