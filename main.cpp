#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
#include "Model/RubiksCubeBitboard.cpp"

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
    // vector<RubiksCube::MOVE> moves = cube.randomShuffleCube(5);
    // for (auto move : moves)
    // {
    //     cout << cube.getMove(move) << " ";
    // }
    // cube.print();


// Creating two cubes------------------------------------------------------------------
    // RubiksCube3dArray cube1;
    // RubiksCube3dArray cube2;

    RubiksCube1dArray cube1;
    RubiksCube1dArray cube2;

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

    unordered_map<RubiksCube1dArray, bool, Hash1d> mp1;

    // unordered_map<RubiksCubeBitboard, bool, HashBitboard> mp1;

    mp1[cube1] = true;
    cube2.randomShuffleCube(8);

    if (mp1[cube1])
        cout << "Cube1 is present\n";
    else
        cout << "Cube1 is not present\n";

    if (mp1[cube2])
        cout << "Cube2 is present\n";
    else
        cout << "Cube2 is not present\n";


    return 0;
}