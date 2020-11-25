#include <iostream>
#include "windows.h"
using namespace std;
char a2[3] = { 'a' , 'b' , 'c' };
char a3[3] = { 'd','e','f' };
char a4[3] = { 'g','h','i' };
char a5[3] = { 'j','k','l' };
char a6[3] = { 'm','n','o' };
char a7[4] = { 'p','q','r','s' };
char a8[3] = { 't','u','v' };
char a9[4] = { 'w','x','y','z' };
char b2[3] = { 'A','B','C' };
char b3[3] = { 'D','E','F' };
char b4[3] = { 'G','H','I' };
char b5[3] = { 'J','K','L' };
char b6[3] = { 'M','N','O' };
char b7[4] = { 'P','Q','R','S' };
char b8[3] = { 'T','U','V' };
char b9[4] = { 'W','X','Y','Z' };
char c2[3] = { 'c' , 'b' , 'a' };
char c3[3] = { 'f','e','d' };
char c4[3] = { 'i','h','g' };
char c5[3] = { 'l','k','j' };
char c6[3] = { 'o','n','m' };
char c7[4] = { 's','r','q','p' };
char c8[3] = { 'v','u','t' };
char c9[4] = { 'z','y','x','w' };
char d2[3] = { 'C' , 'B' , 'A' };
char d3[3] = { 'F','E','D' };
char d4[3] = { 'I','H','G' };
char d5[3] = { 'L','K','J' };
char d6[3] = { 'O','N','M' };
char d7[4] = { 'S','R','Q','P' };
char d8[3] = { 'V','U','T' };
char d9[4] = { 'Z','Y','X','W' };
void Encrypt() {
	char a[50];
	cout << "Encrypt:\nEnter your message:\n";
	cin >> a;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == 'a' || a[i] == 'b' || a[i] == 'c') {
			int b;
			if (a[i] == 'a') b = 1;
			if (a[i] == 'b') b = 2;
			if (a[i] == 'c') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = a2[d];
		}
		if (a[i] == 'A' || a[i] == 'B' || a[i] == 'C') {
			int b;
			if (a[i] == 'A') b = 1;
			if (a[i] == 'B') b = 2;
			if (a[i] == 'C') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = b2[d];
		}
		if (a[i] == 'd' || a[i] == 'e' || a[i] == 'f') {
			int b;
			if (a[i] == 'd') b = 1;
			if (a[i] == 'e') b = 2;
			if (a[i] == 'f') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = a3[d];
		}
		if (a[i] == 'D' || a[i] == 'E' || a[i] == 'F') {
			int b;
			if (a[i] == 'D') b = 1;
			if (a[i] == 'E') b = 2;
			if (a[i] == 'F') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = b3[d];
		}
		if (a[i] == 'g' || a[i] == 'h' || a[i] == 'i') {
			int b;
			if (a[i] == 'g') b = 1;
			if (a[i] == 'h') b = 2;
			if (a[i] == 'i') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = a4[d];

		}
		if (a[i] == 'G' || a[i] == 'H' || a[i] == 'I') {
			int b;
			if (a[i] == 'G') b = 1;
			if (a[i] == 'H') b = 2;
			if (a[i] == 'I') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = b4[d];
		}
		if (a[i] == 'j' || a[i] == 'k' || a[i] == 'l') {
			int b;
			if (a[i] == 'j') b = 1;
			if (a[i] == 'k') b = 2;
			if (a[i] == 'l') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = a5[d];
		}
		if (a[i] == 'J' || a[i] == 'K' || a[i] == 'L') {
			int b;
			if (a[i] == 'J') b = 1;
			if (a[i] == 'K') b = 2;
			if (a[i] == 'L') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = b5[d];
		}
		if (a[i] == 'm' || a[i] == 'n' || a[i] == 'o') {
			int b;
			if (a[i] == 'm') b = 1;
			if (a[i] == 'n') b = 2;
			if (a[i] == 'o') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = a6[d];

		}
		if (a[i] == 'M' || a[i] == 'N' || a[i] == 'O') {
			int b;
			if (a[i] == 'M') b = 1;
			if (a[i] == 'N') b = 2;
			if (a[i] == 'O') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = b6[d];
		}
		if (a[i] == 'p' || a[i] == 'q' || a[i] == 'r' || a[i] == 's') {
			int b;
			if (a[i] == 'p') b = 1;
			if (a[i] == 'q') b = 2;
			if (a[i] == 'r') b = 3;
			if (a[i] == 's') b = 4;
			int d = i + b;
			if (d >= 4)d %= 4;
			a[i] = a7[d];
		}
		if (a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S') {
			int b;
			if (a[i] == 'P') b = 1;
			if (a[i] == 'Q') b = 2;
			if (a[i] == 'R') b = 3;
			if (a[i] == 'S') b = 4;
			int d = i + b;
			if (d >= 4)d %= 4;
			a[i] = b7[d];
		}
		if (a[i] == 't' || a[i] == 'u' || a[i] == 'v') {
			int b;
			if (a[i] == 't') b = 1;
			if (a[i] == 'u') b = 2;
			if (a[i] == 'v') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = a8[d];

		}
		if (a[i] == 'T' || a[i] == 'U' || a[i] == 'V') {
			int b;
			if (a[i] == 'T') b = 1;
			if (a[i] == 'U') b = 2;
			if (a[i] == 'V') b = 3;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = b8[d];
		}
		if (a[i] == 'w' || a[i] == 'x' || a[i] == 'y' || a[i] == 'z') {
			int b;
			if (a[i] == 'w') b = 1;
			if (a[i] == 'x') b = 2;
			if (a[i] == 'y') b = 3;
			if (a[i] == 'z') b = 4;
			int d = i + b;
			if (d >= 4)d %= 4;
			a[i] = a9[d];
		}
		if (a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z') {
			int b;
			if (a[i] == 'W') b = 1;
			if (a[i] == 'X') b = 2;
			if (a[i] == 'Y') b = 3;
			if (a[i] == 'Z') b = 4;
			int d = i + b;
			if (d >= 4)d %= 4;
			a[i] = b9[d];
		}

	}
	cout << "Encrypted Message:" << a << endl;
}
void Decryption() {
	char a[50];
	cout << "Decryption\nEnter your message:\n";
	cin >> a;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == 'a' || a[i] == 'b' || a[i] == 'c') {
			int b;
			if (a[i] == 'a') b = 3;
			if (a[i] == 'b') b = 2;
			if (a[i] == 'c') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = c2[d];
		}
		if (a[i] == 'A' || a[i] == 'B' || a[i] == 'C') {
			int b;
			if (a[i] == 'A') b = 3;
			if (a[i] == 'B') b = 2;
			if (a[i] == 'C') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = d2[d];
		}
		if (a[i] == 'd' || a[i] == 'e' || a[i] == 'f') {
			int b;
			if (a[i] == 'd') b = 3;
			if (a[i] == 'e') b = 2;
			if (a[i] == 'f') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = c3[d];
		}
		if (a[i] == 'D' || a[i] == 'E' || a[i] == 'F') {
			int b;
			if (a[i] == 'D') b = 3;
			if (a[i] == 'E') b = 2;
			if (a[i] == 'F') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = d3[d];
		}
		if (a[i] == 'g' || a[i] == 'h' || a[i] == 'i') {
			int b;
			if (a[i] == 'g') b = 3;
			if (a[i] == 'h') b = 2;
			if (a[i] == 'i') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = c4[d];

		}
		if (a[i] == 'G' || a[i] == 'H' || a[i] == 'I') {
			int b;
			if (a[i] == 'G') b = 3;
			if (a[i] == 'H') b = 2;
			if (a[i] == 'I') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = d4[d];
		}
		if (a[i] == 'j' || a[i] == 'k' || a[i] == 'l') {
			int b;
			if (a[i] == 'j') b = 3;
			if (a[i] == 'k') b = 2;
			if (a[i] == 'l') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = c5[d];
		}
		if (a[i] == 'J' || a[i] == 'K' || a[i] == 'L') {
			int b;
			if (a[i] == 'J') b = 3;
			if (a[i] == 'K') b = 2;
			if (a[i] == 'L') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = d5[d];
		}
		if (a[i] == 'm' || a[i] == 'n' || a[i] == 'o') {
			int b;
			if (a[i] == 'm') b = 3;
			if (a[i] == 'n') b = 2;
			if (a[i] == 'o') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = c6[d];

		}
		if (a[i] == 'M' || a[i] == 'N' || a[i] == 'O') {
			int b;
			if (a[i] == 'M') b = 3;
			if (a[i] == 'N') b = 2;
			if (a[i] == 'O') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = d6[d];
		}
		if (a[i] == 'p' || a[i] == 'q' || a[i] == 'r' || a[i] == 's') {
			int b;
			if (a[i] == 'p') b = 4;
			if (a[i] == 'q') b = 3;
			if (a[i] == 'r') b = 2;
			if (a[i] == 's') b = 1;
			int d = i + b;
			if (d >= 4)d %= 4;
			a[i] = c7[d];
		}
		if (a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S') {
			int b;
			if (a[i] == 'P') b = 4;
			if (a[i] == 'Q') b = 3;
			if (a[i] == 'R') b = 2;
			if (a[i] == 'S') b = 1;
			int d = i + b;
			if (d >= 4)d %= 4;
			a[i] = d7[d];
		}
		if (a[i] == 't' || a[i] == 'u' || a[i] == 'v') {
			int b;
			if (a[i] == 't') b = 3;
			if (a[i] == 'u') b = 2;
			if (a[i] == 'v') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = c8[d];

		}
		if (a[i] == 'T' || a[i] == 'U' || a[i] == 'V') {
			int b;
			if (a[i] == 'T') b = 3;
			if (a[i] == 'U') b = 2;
			if (a[i] == 'V') b = 1;
			int d = i + b;
			if (d >= 3)d %= 3;
			a[i] = d8[d];
		}
		if (a[i] == 'w' || a[i] == 'x' || a[i] == 'y' || a[i] == 'z') {
			int b;
			if (a[i] == 'w') b = 4;
			if (a[i] == 'x') b = 3;
			if (a[i] == 'y') b = 2;
			if (a[i] == 'z') b = 1;
			int d = i + b;
			if (d >= 4)d %= 4;
			a[i] = c9[d];
		}
		if (a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z') {
			int b;
			if (a[i] == 'W') b = 4;
			if (a[i] == 'X') b = 3;
			if (a[i] == 'Y') b = 2;
			if (a[i] == 'Z') b = 1;
			int d = i + b;
			if (d >= 4)d %= 4;
			a[i] = d9[d];
		}

	}
	cout << "Decrypted message:" << a << endl;
}
int main()
{
	system("color 0A");
	while (true) {
		int x;
		cout << "*****************************\n";
		cout << "||What do you want to do?  ||\n";
		cout << "||*************************||  \n||1.Encrypt.               ||\n||2.Decryption.            ||\n||3.Exit                   ||\n*****************************";
		cout << "\nPlease Enter the number of button:";
		cin >> x;
		if (x == 3) {
			system("cls");
			cout << "\n---Made by Reza Chabok Shahroudi---";
			break;
		}
		if (x < 1 or x>2) {
			system("cls");
			cout << "This button Not exist!!!\n";
		}
		if (x == 1) {
			system("cls");
			Encrypt();
		}
		if (x == 2) {
			system("cls");
			Decryption();
		}

	}
}