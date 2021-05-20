#include <iostream>

#include <windows.h>

using namespace std;

char a[3][3];
int col, lin;

void afisare(char a[3][3], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << " " << a[i][j] << " ";
		}
		cout << endl;
	}
}

void joc(int r) {

	if (r % 2 != 0) {
		cout << endl << "Player no. 1 is X, it's your turn!" << endl;
	}
	else {
		cout << endl << "Player no. 2 is O, it's your turn!" << endl;
	}

	Sleep(2000);

	cout << "Where will your first move be?" << endl;
	cout << "[ line , column ]" << endl;
	cout << " line = ";

	cin >> lin;
	cout << "[ " << lin << " , column ]" << endl;
	cout << " column  = ";
	cin >> col;
	cout << "[ " << lin << " , " << col << "]" << endl << endl;
	if (r % 2 != 0) {
		a[lin][col] = 'X';
	}
	else {
		a[lin][col] = 'O';
	}

	afisare(a, 3, 3);

}

void castigator() {
	int r = 0;
	bool t = 1;
	while (t) {

		r++;
		joc(r);

		if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') {
			t = 0;
			cout << endl << "Congratulations Player no. 1!" << endl;
		}
		if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') {
			t = 0;
			cout << endl << "Congratulations Player no. 2!" << endl;
		}
		if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') {
			t = 0;
			cout << endl << "Congratulations Player no. 1!" << endl;
		}
		if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') {
			t = 0;
			cout << endl << "Congratulations Player no. 2!" << endl;
		}
		if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') {
			t = 0;
			cout << endl << "Congratulations Player no. 1!" << endl;
		}
		if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') {
			t = 0;
			cout << endl << "Congratulations Player no. 2!" << endl;
		}
		if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') {
			t = 0;
			cout << endl << "Congratulations Player no. 1!" << endl;
		}
		if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') {
			t = 0;
			cout << endl << "Congratulations Player no. 2!" << endl;
		}
		if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') {
			t = 0;
			cout << endl << "Congratulations Player no. 1!" << endl;
		}
		if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') {
			t = 0;
			cout << endl << "Congratulations Player no. 2!" << endl;
		}
		if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') {
			t = 0;
			cout << endl << "Congratulations Player no. 1!" << endl;
		}
		if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') {
			t = 0;
			cout << endl << "Congratulations Player no. 2!" << endl;
		}
		if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') {
			t = 0;
			cout << endl << "Congratulations Player no. 1!" << endl;
		}
		if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') {
			t = 0;
			cout << endl << "Congratulations Player no. 2!" << endl;
		}
		if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X') {
			t = 0;
			cout << endl << "Congratulations Player no. 1!" << endl;
		}
		if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O') {
			t = 0;
			cout << endl << "Congratulations Player no. 2!" << endl;
		}
	}
}

int main() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = '?';
		}
	}

	cout << endl << "---------------------------------" << endl;
	cout << "Project made by Emanuel Butoi" << endl;
	cout << "---------------------------------" << endl << endl;


	afisare(a, 3, 3);

	castigator();

}