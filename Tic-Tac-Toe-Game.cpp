// Tic-Tac-Toe Game (2 Players)
// Simple 3x3 grid game console par implement karo.

#include <iostream>
using namespace std;

class Node {
public:
    char value;
    Node* next;

    Node(char val) {
        value = val;
        next = nullptr;
    }
};

class TicTacToe {
private:
    Node* head;

public:
    TicTacToe() {
        head = new Node('1');
        Node* temp = head;
        for (char c = '2'; c <= '9'; c++) {
            temp->next = new Node(c);
            temp = temp->next;
        }
    }

    void displayBoard() {
        Node* temp = head;
        for (int i = 0; i < 3; i++) {
            cout << " ";
            for (int j = 0; j < 3; j++) {
                cout << temp->value;
                if (j < 2) cout << " | ";
                temp = temp->next;
            }
            cout << endl;
            if (i < 2) cout << "---|---|---\n";
        }
    }

    Node* getNode(int pos) {
        Node* temp = head;
        for (int i = 1; i < pos; i++) {
            temp = temp->next;
        }
        return temp;
    }

    bool makeMove(int pos, char mark) {
        Node* cell = getNode(pos);
        if (cell->value == 'X' || cell->value == 'O') {
            return false;
        }
        cell->value = mark;
        return true;
    }

    bool checkWin(char m) {
        int winCombos[8][3] = {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, // Rows
            {1, 4, 7}, {2, 5, 8}, {3, 6, 9}, // Columns
            {1, 5, 9}, {3, 5, 7}             // Diagonals
        };

        for (int i = 0; i < 8; i++) {
            if (getNode(winCombos[i][0])->value == m &&
                getNode(winCombos[i][1])->value == m &&
                getNode(winCombos[i][2])->value == m) {
                return true;
            }
        }
        return false;
    }

    bool isFull() {
        for (int i = 1; i <= 9; i++) {
            char v = getNode(i)->value;
            if (v != 'X' && v != 'O') return false;
        }
        return true;
    }
};

int main() {
    TicTacToe game;
    int player = 1;
    char mark = 'X';

    while (true) {
        game.displayBoard();
        int move;
        cout << "Player " << player << " (" << mark << "), enter position (1-9): ";
        cin >> move;

        if (move < 1 || move > 9) {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        if (!game.makeMove(move, mark)) {
            cout << "Cell already taken! Try again.\n";
            continue;
        }

        if (game.checkWin(mark)) {
            game.displayBoard();
            cout << "Player " << player << " wins! 🎉\n";
            break;
        }

        if (game.isFull()) {
            game.displayBoard();
            cout << "It's a draw! 🤝\n";
            break;
        }

        // Switch player
        player = (player == 1) ? 2 : 1;
        mark = (mark == 'X') ? 'O' : 'X';
    }

    return 0;
}

