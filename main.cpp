
// By Pujaa (shawpujaa)



#include <bits/stdc++.h>
//#include "Model/RubiksCube3dRep.cpp"
//#include "Model/RubiksCube1dRep.cpp"
#include "Model/RubiksCubeBitBoardRep.cpp"
//#include "Solver/DFSSolver.h"
//#include "Solver/BFSSolver.h"
//#include "Solver/IDDFSSolver.h"
#include "Solver/IDAstarSolver.h"
#include "PatternDatabases/CornerPatternDatabase.h"
#include "PatternDatabases/CornerDBMaker.h"

using namespace std;

int main() {
    // RubiksCubeBitboardRep cube1;
    // cube1.print();

    // vector<GenericRubiksCube::MOVE> moves = cube1.randomShuffleCube(4);

    // for(auto it : moves)
    // cout<<cube1.getMove(it)<<" ";

    // cout<<"\n";
    // cube1.print();
      

//    RubiksCube3dRep object3DArray;
//    RubiksCube1dRep object1dArray;
//    RubiksCubeBitBoardRep objectBitboard;
//
//    object3DArray.print();
//
//    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    objectBitboard.u();
//    object3DArray.u();
//    object1dArray.u();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.l();
//    object3DArray.l();
//    object1dArray.l();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.f();
//    object3DArray.f();
//    object1dArray.f();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.r();
//    object3DArray.r();
//    object1dArray.r();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.b();
//    object3DArray.b();
//    object1dArray.b();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.d();
//    object3DArray.d();
//    object1dArray.d();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    objectBitboard.dPrime();
//    object3DArray.dPrime();
//    object1dArray.dPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.bPrime();
//    object3DArray.bPrime();
//    object1dArray.bPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.rPrime();
//    object3DArray.rPrime();
//    object1dArray.rPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.fPrime();
//    object3DArray.fPrime();
//    object1dArray.fPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.lPrime();
//    object3DArray.lPrime();
//    object1dArray.lPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.uPrime();
//    object3DArray.uPrime();
//    object1dArray.uPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";

    // Create two Cubes ------------------------------------------------------------------------------------------

//    RubiksCube3dRep cube1;
//    RubiksCube3dRep cube2;

//    RubiksCube1dRep cube1;
//    RubiksCube1dRep cube2;

//    RubiksCubeBitBoardRep cube1;
//    RubiksCubeBitBoardRep cube2;


//  Equality and assignment of cubes --------------------------------------------------------------------------

//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";
//
//    cube1.randomShuffleCube(1);
//
//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";
//
//    cube2 = cube1;
//
//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";


//  Unordered_map of Cubes  ------------------------------------------------------------------------------------


//    unordered_map<RubiksCube3dRep, bool, Hash3d> mp1;

//    unordered_map<RubiksCube1dRep, bool, Hash1d> mp1;

//    unordered_map<RubiksCubeBitBoardRep, bool, HashBitboard> mp1;
//
//    mp1[cube1] = true;
//    cube2.randomShuffleCube(8);
//    if (mp1[cube1]) cout << "Cube1 is present\n";
//    else cout << "Cube1 is not present\n";
//
//    if (mp1[cube2]) cout << "Cube2 is present\n";
//    else cout << "Cube2 is not present\n";
//

// DFS Solver Testing __________________________________________________________________________________________
    // RubiksCube3dRep cube; 
    // cube.print();


    // vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(7);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";
    // cube.print();

    // DFSSolver<RubiksCube3dRep, Hash3d> dfsSolver(cube, 8);
    // vector<GenericRubiksCube::MOVE> solve_moves = dfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";
    // dfsSolver.rubiksCube.print();


//BFS Solver -----------------------------------------------------------------------------------------------------
//    RubiksCubeBitBoardRep cube;
//    cube.print();

//    vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(4);
//    for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();

//    BFSSolver<RubiksCubeBitBoardRep, HashBitboard> bfsSolver(cube);
//    vector<GenericRubiksCube::MOVE> solve_moves = bfsSolver.solve();

//    for(auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    bfsSolver.rubiksCube.print();

// IDDFS Solver ----------------------------------------------------------------------------------------------------
//    RubiksCube1dRep cube;
//    cube.print();

//    vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
//    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();

//    IDDFSSolver<RubiksCube1dRep, Hash1d> iddfsSolver(cube, 7);
//    vector<GenericRubiksCube::MOVE> solve_moves = iddfsSolver.solve();

//    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    iddfsSolver.rubiksCube.print();

// IDA* SOLVER ---------------------------------------------------------------------------------------------------
//    RubiksCubeBitBoardRep cube;
//    cube.print();

//    vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(5);
//    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();

//    IDAstarSolver<RubiksCubeBitBoardRep, HashBitboard> idAstarSolver(cube);
//    vector<GenericRubiksCube::MOVE> solve_moves = idAstarSolver.solve();
//    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    idAstarSolver.rubiksCube.print();

// CornerPatternDatabase Testing ---------------------------------------------------------------------------------

//    CornerPatternDatabase cornerDB;
//    RubiksCubeBitboard cube;
//    cube.print();
//
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";
//
//    cornerDB.setNumMoves(cube, 5);
//
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";
//
//    cube.randomShuffleCube(1);
//    cube.print();
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";
//
//    cornerDB.setNumMoves(cube, 6);
//
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";


// CornerDBMaker Testing --------------------------------------------------------------------------
    string fileName = "D:\\VS_CODE\\PROJECTS\\RubiksCubeSolver\\Databases\\cornerDepth.txt";

//    Code to create Corner Database
//    CornerDBMaker dbMaker(fileName, 0x99);
//    dbMaker.bfsAndStore();

    RubiksCubeBitBoardRep cube;
    auto shuffleMoves = cube.randomShuffleCube(13);
    cube.print();
    for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";

    IDAstarSolver<RubiksCubeBitBoardRep, HashBitboard> idaStarSolver(cube, fileName);
    auto moves = idaStarSolver.solve();

    idaStarSolver.rubiksCube.print();
    for (auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";


    return 0;
}



