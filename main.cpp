#include <iostream>

void wipe(int x) {
	for (int i = 0; i < x; ++i) {
		std::cout << '\n';
	}
}

void draw(int board[9][9]) {
	// main logic
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			switch (board[i][j]) {
				case 1:
					std::cout << "^FU";
					break;
				case 2:
					std::cout << "^KY";
					break;
				case 3:
					std::cout << "^KE";
					break;
				case 4:
					std::cout << "^GI";
					break;
				case 5:
					std::cout << "^KI";
					break;
				case 6:
					std::cout << "^KA";
					break;
				case 7:
					std::cout << "^HI";
					break;
				case 8:
					std::cout << "^OU";
					break;
				case 11:
					std::cout << "^TO";
					break;
				case 12:
					std::cout << "^NY";
					break;
				case 13:
					std::cout << "^NK";
					break;
				case 14:
					std::cout << "^NG";
					break;
				case 16:
					std::cout << "^UM";
					break;
				case 17:
					std::cout << "^RY";
					break;
				case -1:
					std::cout << "vFU";
					break;
				case -2:
					std::cout << "vKY";
					break;
				case -3:
					std::cout << "vKE";
					break;
				case -4:
					std::cout << "vGI";
					break;
				case -5:
					std::cout << "vKI";
					break;
				case -6:
					std::cout << "vKA";
					break;
				case -7:
					std::cout << "vHI";
					break;
				case -8:
					std::cout << "vOU";
					break;
				case -11:
					std::cout << "vTO";
					break;
				case -12:
					std::cout << "vNY";
					break;
				case -13:
					std::cout << "vNK";
					break;
				case -14:
					std::cout << "vNG";
					break;
				case -16:
					std::cout << "vUM";
					break;
				case -17:
					std::cout << "vRY";
					break;
				default:
					std::cout << " * ";
					break;

			}
			std::cout << ' ';
		}
		std::cout << "\n\n";
	}
}

int main() {
	int my_board[9][9] = {
		{0, -6, 0, 0, 0, 0, 0, -7, 0},
		{-2, -3, -4, -5, -8, -5, -4, -3, -2},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{2, 3, 4, 5, 8, 5, 4, 3, 2},
		{0, 6, 0, 0, 0, 0, 0, 7, 0},
	};

	int komadai_sente[7];
	wipe(100);
	draw(my_board);
}
