#include<iostream>
#include<vector>

using namespace std;

// NOT WORKING ??

int ans = 0;

bool isSafe(vector<vector<char>>& grid, int row, int col) {
    for(int i=0; i<8; i++) {
        if(grid[i][col] == 'Q' || grid[i][col] == '*') return false;
        if(row-i >= 0 && col - i >= 0 && (grid[row-i][col-i] == 'Q' || grid[row-i][col-i] == '*')) return false;
        if(row-i >= 0 && col + i < 8 && (grid[row-i][col+i] == 'Q' || grid[row-i][col+i] == '*')) return false;
    }

    return true;
}

void solve(vector<vector<char>>& grid, int row) {
    if(row >= 8) {
        // cout<<ans;
        ans++;
        return;
    }

    for(int col=0; col<8; col++) {
        if(isSafe(grid, row, col)) {
            grid[row][col] = 'Q';
            solve(grid, row+1);
            grid[row][col] = '.';
        }
    }
}

int main() {
    int n = 8;
    vector<vector<char>> grid(n, vector<char>(n));

    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            cin >> grid[i][j];
        }
    }

    solve(grid, 0);
}