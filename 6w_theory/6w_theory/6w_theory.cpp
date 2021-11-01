#include <iostream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
using namespace std;

// 1번

int main (){
	
	srand((unsigned)time(NULL));

	static int score = 0;
	static int timeScore = 0;
	static int time = 0;
	static int winOrlose = 1;
	double tElapsed;

	cout << "스피드 구구단을 시작합니다. \n" << "시작하려면 아무 버튼이나 누르세요.";
	getchar();
	system("cls");

	clock_t t0 = clock();
	for (int i = 1; i <= 10; i++) {
		
		int ran1 = rand() % 8 + 2;
		int ran2 = rand() % 8 + 2;
		int result;
		int mul = ran1 * ran2;

		cout << "문제 " << i << "번 : " << ran1 << " * " << ran2 << " = ";
		cin >> result;

		if (result == mul) score++;

		if (result != mul) {
			winOrlose = 0;
			cout << "틀렸습니다. " << endl;
		}
	}
	clock_t t1 = clock();
	tElapsed = (double)(t1 - t0) / CLOCKS_PER_SEC;

	if (tElapsed <= 10)	timeScore = timeScore + 3;
	else if (tElapsed <= 15) timeScore = timeScore + 2;
	else if (tElapsed <= 20) timeScore = timeScore + 1;
	else timeScore = 0;

	cout << "\n" << "걸린 시간 : " << tElapsed << endl;
	cout << "보너스 시간 점수 : " << timeScore << endl;
	cout << "최종점수 : " << score + timeScore;
	

}


// 2번

//unsigned int rollDice(); // rolls dice, calculates and displays sum
//
//int main()
//{
//    // enumeration with constants that represent the game status
//    enum Status { CONTINUE, WON, LOST }; // all caps in constants
//
//    // randomize random number generator using current time
//    srand(static_cast<unsigned int>(time(0)));
//
//    unsigned int myPoint = 0; // point if no win or loss on first roll
//    Status gameStatus = CONTINUE; // can contain CONTINUE, WON or LOST
//    unsigned int sumOfDice = rollDice(); // first roll of the dice
//
//    // determine game status and point (if needed) based on first roll
//    switch (sumOfDice)
//    {
//    case 7: // win with 7 on first roll
//    case 11: // win with 11 on first roll           
//        gameStatus = WON;
//        break;
//    case 2: // lose with 2 on first roll
//    case 3: // lose with 3 on first roll
//    case 12: // lose with 12 on first roll             
//        gameStatus = LOST;
//        break;
//    default: // did not win or lose, so remember point
//        gameStatus = CONTINUE; // game is not over
//        myPoint = sumOfDice; // remember the point
//        cout << "Point is " << myPoint << endl;
//        break; // optional at end of switch  
//    } // end switch 
//
//    // while game is not complete
//    while (CONTINUE == gameStatus) // not WON or LOST
//    {
//        sumOfDice = rollDice(); // roll dice again
//
//        // determine game status
//        if (sumOfDice == myPoint) // win by making point
//            gameStatus = WON;
//        else
//            if (sumOfDice == 7) // lose by rolling 7 before point
//                gameStatus = LOST;
//    } // end while 
//
//    // display won or lost message
//    if (WON == gameStatus)
//        cout << "Player wins" << endl;
//    else
//        cout << "Player loses" << endl;
//} // end main
//
//// roll dice, calculate sum and display results
//unsigned int rollDice()
//{
//    // pick random die values
//    unsigned int die1 = 1 + rand() % 6; // first die roll
//    unsigned int die2 = 1 + rand() % 6; // second die roll
//
//    unsigned int sum = die1 + die2; // compute sum of die values
//
//    // display results of this roll
//    cout << "Player rolled " << die1 << " + " << die2
//        << " = " << sum << endl;
//    return sum; // return sum of dice
//} // end function rollDice
//
//
///**************************************************************************
// * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
// * Pearson Education, Inc. All Rights Reserved.                           *
// *                                                                        *
// * DISCLAIMER: The authors and publisher of this book have used their     *
// * best efforts in preparing the book. These efforts include the          *
// * development, research, and testing of the theories and programs        *
// * to determine their effectiveness. The authors and publisher make       *
// * no warranty of any kind, expressed or implied, with regard to these    *
// * programs or to the documentation contained in these books. The authors *
// * and publisher shall not be liable in any event for incidental or       *
// * consequential damages in connection with, or arising out of, the       *
// * furnishing, performance, or use of these programs.                     *
// **************************************************************************/