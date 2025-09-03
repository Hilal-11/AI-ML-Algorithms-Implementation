#include<iostream>
#include<vector>
using namespace std;


bool isSafe(int row , int col , int board[9][9] , int value) {
    for(int i = 0; i < 9; i++) {
        // row 
        if(board[row][i] == value) {
            return false;
        }
        //cols
        if(board[col][i] == value) {
            return false;
        }
        // 3*3 matrix 
        if(board[3*(row/3)+i/3][3*(col/3)+i%3] == value) {
            return false;
        }
    }
    return true;
}

bool sudokuSover(int board[9][9]) {
    int n = 9;
    for(int row = 0; row < 9; row++) {
        for(int col = 0; col < n; col++){


            if(board[row][col] == 0){
                for(int value = 1; value <= 9; value++){
                    if(isSafe(row , col, board , value)) {
                        board[row][col] = value;t 
                        // recursive call
                        bool moveTowardsSolution = sudokuSover(board);

                        if(moveTowardsSolution) {
                            return true;
                        }else{
                            //backtract
                            board[row][col] = 0;
                        }
                    }
                } 
            }
            return false;
        }
    }
    return true
}

int main()
{
    int sudoko[9][9] = { {5, 3, 0, 0, 7, 0, 0, 0, 0},
                         {6, 0, 0, 1, 9, 5, 0, 0, 0},
                         {0, 9, 8, 0, 0, 0, 0, 6, 0},
                         {8, 0, 0, 0, 6, 0, 0, 0, 3},
                         {4, 0, 0, 8, 0, 3, 0, 0, 1},
                         {7, 0, 0, 0, 2, 0, 0, 0, 6},
                         {0, 6, 0, 0, 0, 0, 2, 8, 0},
                         {0, 0, 0, 4, 1, 9, 0, 0, 5},
                         {0, 0, 0, 0, 8, 0, 0, 7, 9} }; 
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout<<sudoko[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}