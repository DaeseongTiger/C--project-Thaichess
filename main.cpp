
#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;
static const int BOARD_SIZE = 8;
char board[BOARD_SIZE][BOARD_SIZE];

class ChessBoard{
public:
    void  initBoard();
    void  printBoard();
};

class AnyChessMan{
public:
   bool CheckBaseMove(int, int, int, int);
};
class King:public AnyChessMan{
public:
   bool  CheckKing(int ,int ,int, int);
};
class Queen:public AnyChessMan{
public:
  bool  CheckQueen(int, int, int, int);
};
class Rook:public AnyChessMan{
public:
 bool CheckRook(int, int, int, int);
 };
class Knight:public AnyChessMan{
public:
    bool CheckKnight(int, int, int, int);
    };
class Bishop:public AnyChessMan{
public:
    bool CheckBishop(int, int, int, int);
    };
class Pawn:public AnyChessMan{
public:
    bool CheckPawn(int , int, int, int);
    };

class setPlay:public ChessBoard{
public:
    setPlay():currRow(0) ,newRow(0) ,newCol(0) ,currCol(0){}
   void input();
   void outp();
   void Move(/*char, int, int, int, int*/);
   int conCurrValue();
   int conNewValue();
   King k; Queen q; Rook r; Knight n; Bishop b; Pawn p;
private:
   int currRow ,newRow ,newCol ,currCol ;
   char nc,cc;
   char piece;
};

int main()
{

    setPlay p1;
    p1.initBoard();
    cout << "\nWELCOME TO THAI CHESS GAME!!\n" << endl;
    cout << "Enter to continue" << endl;
    getch();
    system("cls");
    while(true){
    p1.printBoard();
    p1.input();
    //p1.outp();
    p1.Move(/*piece ,currRow,currCol,newRow,newCol*/);
   // p1.outp();
    }

    return 0;
}

void ChessBoard::initBoard(){
     for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '-';
            }
        }
    for (int i = 0; i < BOARD_SIZE; i++) {
            board[2][i] = 'P';
            board[5][i] = 'p';
        }
            board[0][0] = 'R';
            board[0][7] = 'R';
            board[7][0] = 'r';
            board[7][7] = 'r';
            board[0][1] = 'N';
            board[0][6] = 'N';
            board[7][1] = 'n';
            board[7][6] = 'n';
            board[0][2] = 'B';
            board[0][5] = 'B';
            board[7][2] = 'b';
            board[7][5] = 'b';
            board[0][3] = 'Q';
            board[7][3] = 'q';
            board[0][4] = 'K';
            board[7][4] = 'k';
}
void ChessBoard::printBoard() {
        cout << "     A B C D E F G H " << endl << "    -----------------" << endl;
        for (int i = 0; i < BOARD_SIZE; i++) {
            cout << " " << i << " | ";
            for (int j = 0; j < BOARD_SIZE; j++) {
                cout << board[i][j] << " ";
            }
            cout <<"|"<< i << endl;
        }
        cout << "    -----------------" <<endl;
        cout << "     A B C D E F G H " << endl <<endl;
    }
bool AnyChessMan::CheckBaseMove(int currRow, int currCol, int newRow, int newCol){
     if((newRow < 0 || newRow >= BOARD_SIZE) || (newCol < 0 || newCol >= BOARD_SIZE))
        return false;
    else
        return true;
}
void setPlay::Move(/*char piece ,int currRow, int currCol, int newRow, int newCol*/){

switch(piece) {
case 'K':
        if(k.CheckKing(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'K';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
       }else {
            cout << "Invalid move" << endl;
            }break;
case 'Q':
        if(q.CheckQueen(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'Q';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
       }else {
            cout << "Invalid move" << endl;
            }break;
case 'R':
        if(r.CheckRook(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'R';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
        }else {
            cout << "Invalid move" << endl;
              }break;
case 'B':
        if(b.CheckBishop(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'B';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
        }else {
            cout << "Invalid move" << endl;
            }break;
case 'N':
        if(n.CheckKnight(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'N';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
        }else {
            cout << "Invalid move" << endl;
        }break;
case 'P':
        if(p.CheckPawn(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'P';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
        }else {
            cout << "Invalid move" << endl;
        }break;
case 'k':
        if(k.CheckKing(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'k';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
       }else {
            cout << "Invalid move" << endl;
            }break;
case 'q':
        if(q.CheckQueen(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'q';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
       }else {
            cout << "Invalid move" << endl;
            }break;
case 'r':
        if(r.CheckRook(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'r';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
        }else {
            cout << "Invalid move" << endl;
              }break;
case 'b':
        if(b.CheckBishop(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'b';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
        }else {
            cout << "Invalid move" << endl;
            }break;
case 'n':
        if(n.CheckKnight(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'n';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
        }else {
            cout << "Invalid move" << endl;
        }
case 'p':
        if(p.CheckPawn(currRow, currCol, newRow, newCol)) {
            board[newRow][newCol] = 'p';
            board[currRow][currCol] = '-';
            cout << "Valid move" << endl;
        }else {
            cout << "Invalid move" << endl;
        }
        default:
            cout << "Invalid piece selected" << endl;
} }
void setPlay::input(){
    cout << "Enter the piece you want to move (K, Q, R, B, N, P): ";
    cin >> piece;

    cout << "Enter the current position of the piece (row(1-8),col(A-H)): ";
    cin >> currRow >> cc;

    cout << "Enter the new position of the piece (row(1-8),col(A-H)): ";
    cin >> newRow >> nc;
    conCurrValue();
    conNewValue();
}
void setPlay::outp(){
    cout << piece;
    cout << currRow<<endl;
    cout <<nc<<endl<<cc<< endl<<newCol<<endl << currCol<<endl;
}

bool  King::CheckKing(int currRow, int currCol, int newRow, int newCol){
        if (newRow < 0 || newRow >= BOARD_SIZE || newCol < 0 || newCol >= BOARD_SIZE)
            return false;
        if (abs(currRow - newRow) == 2 && abs(currCol - newCol) == 1)
            return true;
   else if (abs(currRow - newRow) == 1 && abs(currCol - newCol) == 2)
            return true;
   else {
            return false;
       }
     }

 bool  Queen::CheckQueen(int currRow, int currCol, int newRow, int newCol){
        if (newRow < 0 || newRow >= BOARD_SIZE || newCol < 0 || newCol >= BOARD_SIZE)
            return false;
        if(currCol != newCol && currRow != newRow && abs(currCol - newCol) != abs(currRow - newRow) )
            return false;
        else
            return true;
          }

bool Rook::CheckRook(int currRow, int currCol, int newRow, int newCol) {
        if (newRow < 0 || newRow >= BOARD_SIZE || newCol < 0 || newCol >= BOARD_SIZE) {
            return false;
        }
        if(currCol != newCol && currRow != newRow) {
            return false;
        }
        return true;
    }
bool Bishop::CheckBishop(int currRow, int currCol, int newRow, int newCol) {
        if (newRow < 0 || newRow >= BOARD_SIZE || newCol < 0 || newCol >= BOARD_SIZE) {
            return false;
        }
        if(abs(currCol - newCol) != abs(currRow - newRow)) {
            return false;
        }
        return true;
    }
bool Knight::CheckKnight(int currRow, int currCol, int newRow, int newCol) {
        if (newRow < 0 || newRow >= BOARD_SIZE || newCol < 0 || newCol >= BOARD_SIZE) {
            return false;
        }
        if (abs(currRow - newRow) == 2 && abs(currCol - newCol) == 1) {return true;
} else if (abs(currRow - newRow) == 1 && abs(currCol - newCol) == 2) {
return true;
} else {
return false;
}}

bool Pawn::CheckPawn(int currRow, int currCol, int newRow, int newCol) {
    if (newRow < 0 || newRow >= BOARD_SIZE || newCol < 0 || newCol >= BOARD_SIZE) {
        return false;
    }
    if (abs(currRow - newRow) != 1) {
        return false;
    }
    if (currCol != newCol) {
        if(abs(currCol - newCol) != 1 || board[newRow][newCol] == ' ') {
            return false;
        }
    }
    return true;
}

int setPlay::conCurrValue(){
  if(cc=='A'||cc=='a')
    return currCol = 0;
  else if(cc=='B'||cc=='b')
    return currCol = 1;
  else if(cc=='C'||cc=='c')
    return currCol = 2;
  else if(cc=='D'||cc=='d')
    return currCol = 3;
  else if(cc=='E'||cc=='e')
    return currCol = 4;
  else if(cc=='F'||cc=='f')
    return currCol = 5;
  else if(cc=='G'||cc=='g')
    return currCol = 6;
  else if(cc=='H'||cc=='h')
    return currCol = 7;



}
int setPlay::conNewValue(){
    if(nc=='A'||nc=='a')
    return newCol = 0;
   else if(nc=='B'||nc=='b')
    return newCol = 1;
   else if(nc=='C'||nc=='c')
    return newCol = 2;
   else if(nc=='D'||nc=='d')
    return newCol = 3;
   else if(nc=='E'||nc=='e')
    return newCol = 4;
   else if(nc=='F'||nc=='f')
    return newCol = 5;
   else if(nc=='G'||nc=='g')
    return newCol = 6;
   else if(nc=='H'||nc=='h')
    return newCol = 7;
}
