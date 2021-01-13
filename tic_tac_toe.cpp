#include <iostream>

using namespace std;

int main() 
{
    int x, y, moves;
    char gameboard[3][3] = {{'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}};
    bool won = false;

    while (won != true)
    {
        cout << "Player 1 (X): Where do you want to place your token: row column (1, 2, 3; separated by a space)" << endl;
        cin >> x >> y;
        x = x - 1;
        y = y - 1;
        moves = moves + 1;

        if (gameboard[x][y] != '.') 
        {
            cout << "Invalid input. A token has already been placed there. Lose a turn." << endl;
            moves = moves - 1;
            continue;
        }

        if (gameboard[x][y] == '.')
        {
            gameboard[x][y] = 'X';
        }

        for (int i = 0; i <=2; ++i)
        {
            for (int j = 0; j <= 2; ++j)
            {
                cout << gameboard[i][j] << " ";
            }
            cout << endl;
        }

        for (int a = 0; a <= 2; ++a)
        {
            if (gameboard[a][0] == gameboard[a][1] && gameboard[a][1] == gameboard[a][2] && gameboard[a][0] != '.' && gameboard[a][1] != '.' && gameboard[a][2] != '.')
            {
                cout << "Player 1 has won!";
                won = true;
                return 0;
            } 

            if (gameboard[0][a] == gameboard[1][a] && gameboard[1][a] == gameboard[2][a] && gameboard[0][a] != '.' && gameboard[1][a] != '.' && gameboard[2][a] != '.')
            {
                cout << "Player 1 has won!";
                won = true;
                return 0;
            }

            if (gameboard[0][0] == gameboard[1][1] && gameboard[1][1] == gameboard[2][2] && gameboard[0][0] != '.' && gameboard[1][1] != '.' && gameboard[2][2] != '.')
            {
                cout << "Player 1 has won!";
                won = true;
                return 0;
            }

            if (gameboard[0][2] == gameboard[1][1] && gameboard[2][0] == gameboard[1][1] && gameboard[0][2] != '.' && gameboard[1][1] != '.' && gameboard[2][0] != '.')
            {
                cout << "Player 1 has won!";
                won = true;
                return 0;
            }
        }

        if (moves == 9 && won == false)
        {
            cout << "Player 1 & Player 2 have tied!";
            return 0;
        }
        

        cout << "Player 2 (O): Where do you want to place your token: row column (1, 2, 3; separated by a space)" << endl;
        cin >> x >> y;
        x = x - 1;
        y = y - 1;
        moves = moves + 1;

        if (gameboard[x][y] != '.') 
        {
            cout << "Invalid input. A token has already been placed there. Lose a turn." << endl;
            moves = moves - 1;
            continue;
        }

        if (gameboard[x][y] == '.')
        {
            gameboard[x][y] = 'O';
        }

        for (int i = 0; i <=2; ++i)
        {
            for (int j = 0; j <= 2; ++j)
            {
                cout << gameboard[i][j] << " ";
            }
            cout << endl;
        }

        for (int b = 0; b <= 2; ++b)
        {
            if (gameboard[b][0] == gameboard[b][1] && gameboard[b][1] == gameboard[b][2] && gameboard[b][0] != '.' && gameboard[b][1] != '.' && gameboard[b][2] != '.')
            {
                cout << "Player 2 has won!";
                won = true;
                return 0;
            } 

            if (gameboard[0][b] == gameboard[1][b] && gameboard[1][b] == gameboard[2][b] && gameboard[0][b] != '.' && gameboard[1][b] != '.' && gameboard[2][b] != '.')
            {
                cout << "Player 2 has won!";
                won = true;
                return 0;
            }

            if (gameboard[0][0] == gameboard[1][1] && gameboard[1][1] == gameboard[2][2] && gameboard[0][0] != '.' && gameboard[1][1] != '.' && gameboard[2][2] != '.')
            {
                cout << "Player 2 has won!";
                won = true;
                return 0;
            }

            if (gameboard[0][2] == gameboard[1][1] && gameboard[2][0] == gameboard[1][1] && gameboard[0][2] != '.' && gameboard[1][1] != '.' && gameboard[2][0] != '.')
            {
                cout << "Player 2 has won!";
                won = true;
                return 0;
            }
        }
    }
}