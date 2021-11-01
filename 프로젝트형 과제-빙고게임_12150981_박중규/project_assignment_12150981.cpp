#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

static int flag = 0;
static int flag_tie = 0;
int temp = 0;

void makeGridBoard(char[5][6]);

void Game(int[5][5], char[5][6]);


int main()
{
	srand((unsigned int)time(NULL));

	clock_t start, end;
	double takingTime;


	int gridBoard[5][5] = { 0 };
	char OXBoard[5][6] = { "     ","     ","     ","     ","     " };

	start = clock();
	Game(gridBoard, OXBoard);
	end = clock();

	takingTime = (double(end - start)) / 1000;

	if (flag_tie == 1) {
		// 무승부가 아닐 때

		if (temp % 2 == 1)
			cout << "사용자가 이겼습니다. 게임 소요시간 전체 " << takingTime << "초입니다." << endl;
		else
			cout << "컴퓨터가 이겼습니다. 게임 소요시간 전체 " << takingTime << "초입니다." << endl;
	}
	else
		// 무승부 일때
		cout << "무승부입니다. 게임 소요시간 전체 " << takingTime << "초입니다." << endl;
}


void makeGridBoard(char OXBoard[5][6])
{
	cout << "----|----|----|----|----" << endl;
	cout << setw(2) << OXBoard[0][0] << setw(3) << "|" << setw(2) << OXBoard[0][1] <<
		setw(3) << "|" << setw(2) << OXBoard[0][2] << setw(3) << "|" << setw(2) << OXBoard[0][3] << setw(3) << "|" << setw(2) << OXBoard[0][4] << endl;
	cout << "----|----|----|----|----" << endl;
	cout << setw(2) << OXBoard[1][0] << setw(3) << "|" << setw(2) << OXBoard[1][1] <<
		setw(3) << "|" << setw(2) << OXBoard[1][2] << setw(3) << "|" << setw(2) << OXBoard[1][3] << setw(3) << "|" << setw(2) << OXBoard[1][4] << endl;
	cout << "----|----|----|----|----" << endl;
	cout << setw(2) << OXBoard[2][0] << setw(3) << "|" << setw(2) << OXBoard[2][1] <<
		setw(3) << "|" << setw(2) << OXBoard[2][2] << setw(3) << "|" << setw(2) << OXBoard[2][3] << setw(3) << "|" << setw(2) << OXBoard[2][4] << endl;
	cout << "----|----|----|----|----" << endl;
	cout << setw(2) << OXBoard[3][0] << setw(3) << "|" << setw(2) << OXBoard[3][1] <<
		setw(3) << "|" << setw(2) << OXBoard[3][2] << setw(3) << "|" << setw(2) << OXBoard[3][3] << setw(3) << "|" << setw(2) << OXBoard[3][4] << endl;
	cout << "----|----|----|----|----" << endl;
	cout << setw(2) << OXBoard[4][0] << setw(3) << "|" << setw(2) << OXBoard[4][1] <<
		setw(3) << "|" << setw(2) << OXBoard[4][2] << setw(3) << "|" << setw(2) << OXBoard[4][3] << setw(3) << "|" << setw(2) << OXBoard[4][4] << endl;
	cout << "----|----|----|----|----" << endl;
}

void Game(int gridBoard[5][5], char OXBoard[5][6])
{
	int xCoordinate;
	int yCoordinate;
	int xComputer;
	int yComputer;

	while (true)
	{
		// 시작

		makeGridBoard(OXBoard);
		flag_tie = 0;
		if (temp == 0)
			cout << "\n빙고게임을 시작하겠습니다.\n\n유저가 먼저 시작합니다.\n원하는 좌표를 입력하세요.\n\n※왼쪽 맨위가 [0,0]이고 오른쪽 맨아래가 [4,4]입니다.\n※승부가 날 때 까지 좌표를 입력해야합니다." << endl;

		//user turn

		while (true)
		{
			cin >> xCoordinate >> yCoordinate;

			if (gridBoard[xCoordinate][yCoordinate] == 1)
				cout << "해당 위치에 둘 수 없습니다." << endl;
			else
			{
				gridBoard[xCoordinate][yCoordinate] = 1;
				OXBoard[xCoordinate][yCoordinate] = 'X';
				temp += 1;
				break;
			}
		}

		// 빙고판단_사용자

		for (int i = 0; i < 5; i++)
		{
			int judgement_row = 0;
			int judgement_column = 0;
			int judgement_diagonal1 = 0;
			int judgement_diagonal2 = 0;

			for (int j = 0; j < 5; j++)
			{

				if (OXBoard[i][j] == 'X')
					judgement_row += 1;
				if (OXBoard[j][i] == 'X')
					judgement_column += 1;
				if (OXBoard[j][j] == 'X')
					judgement_diagonal1 += 1;
				if (OXBoard[j][4 - j] == 'X')
					judgement_diagonal2 += 1;
			}

			if (judgement_row == 5 || judgement_column == 5 || judgement_diagonal1 == 5 || judgement_diagonal2 == 5)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			system("cls");
			makeGridBoard(OXBoard);
			break;
		}

		makeGridBoard(OXBoard);

		// 무승부 판단

		for (int i = 0; i < 5;i++) {
			for (int j = 0; j < 5; j++)
				if (gridBoard[i][j] == 0) {
					flag_tie = 1;
					break;
				}
		}

		if (flag_tie == 0)
		{
			system("cls");
			makeGridBoard(OXBoard);
			break;
		}


		//computer turn

		while (true)
		{
			xComputer = rand() % 5;
			yComputer = rand() % 5;

			if (gridBoard[xComputer][yComputer] == 1)
				continue;
			else
			{
				gridBoard[xComputer][yComputer] = 1;
				OXBoard[xComputer][yComputer] = 'O';
				temp += 1;
				break;
			}
		}

		// 빙고판단_컴퓨터

		for (int i = 0; i < 5; i++)
		{
			int judgement_row = 0;
			int judgement_column = 0;
			int judgement_diagonal1 = 0;
			int judgement_diagonal2 = 0;

			for (int j = 0; j < 5; j++)
			{
				if (OXBoard[i][j] == 'O')
					judgement_row += 1;
				if (OXBoard[j][i] == 'O')
					judgement_column += 1;
				if (OXBoard[j][j] == 'O')
					judgement_diagonal1 += 1;
				if (OXBoard[j][4 - j] == 'O')
					judgement_diagonal2 += 1;
			}

			if (judgement_row == 5 || judgement_column == 5 || judgement_diagonal1 == 5 || judgement_diagonal2 == 5)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1)
		{
			system("cls");
			makeGridBoard(OXBoard);
			break;
		}


		// 콘솔 클리어

		system("cls");
	}
}
