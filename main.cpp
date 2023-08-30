#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
// #include "Model/RubiksCube1dArray.cpp"
// #include "Model/RubiksCubeBitboard.cpp"

using namespace std;

int main() {
    RubiksCube3dArray object3DArray;
    // RubiksCube1dArray object1dArray;
    // RubiksCubeBitboard objectBitboard;

    object3DArray.print();

    if (object3DArray.isSolved()) cout << "SOLVED\n";
    else cout << "NOT SOLVED\n\n";

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

    return 0;
}