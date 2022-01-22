#include <iostream>
#include <vector>
using namespace std;
int arr[10][10] = { 0 };
bool row[10][10] = {false}, col[10][10] = { false }, block[10][10] = { false };
int check_block(int i, int j) {
	return (i / 3) * 3 + j / 3 + 1;
}
bool sudoku(int cnt) {
	if (cnt == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
		return true;
	}

	int x = cnt / 9 , y = cnt % 9;

	if (arr[x][y] != 0) return sudoku(cnt + 1);

	for (int i = 1; i <= 9; i++) {
		if (!row[x][i] && !col[y][i] && !block[check_block(x, y)][i]) {
			row[x][i] = true;
			col[y][i] = true;
			block[check_block(x, y)][i] = true;
			arr[x][y] = i;

			if (sudoku(cnt + 1)) return true;

			row[x][i] = false;
			col[y][i] = false;
			block[check_block(x, y)][i] = false;
			arr[x][y] = 0;
		}
	}
	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] != 0) {
				row[i][arr[i][j]] = true;
				col[j][arr[i][j]] = true;
				block[check_block(i, j)][arr[i][j]] = true;
			}
		}
	}

	sudoku(0);
}