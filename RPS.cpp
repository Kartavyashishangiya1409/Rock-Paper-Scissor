// Rock Paper Scissor

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    char Player1, Player2;
    string again;

    cout << endl;
    cout << "Rules :-" << endl;
    cout << "Rock Beats Scissor" << endl;
    cout << "Paper Beats Rock" << endl;
    cout << "Scissor Beats Paper" << endl << endl;
    cout << "Note :- If two outcomes are same, then it will be a tie." << endl;
    
    do
    {
        cout << endl << "Player-1 Please select rock-(r), paper-(p) or scissor-(s)" << endl;

        cout << "Player-1 = ";
        cin >> Player1;
        cin.clear();           
        cin.ignore(1000, '\n');

        srand(static_cast<unsigned>(time(0)));

        int randomNumber = (rand() % 3) + 1;

        cout << endl << "Player-2 Please select rock-(r), paper-(p) or scissor-(s)" << endl;
        
        if (randomNumber == 1)
        {
            Player2 = 'r';
            cout << "Player2 = " << Player2 << endl;
        }
        if (randomNumber == 2)
        {
            Player2 = 'p';
            cout << "Player2 = " << Player2 << endl;
        }
        if (randomNumber == 3)
        {
            Player2 = 's';
            cout << "Player2 = " << Player2 << endl;
        }

        cout << endl;

        if (Player1 == 'r' && Player2 == 'r')
        {
            cout << "Tie...!" << endl;
        }
        if (Player1 == 'r' && Player2 == 'p')
        {
            cout << "Player-2 Wins...!" << endl;
        }
        if (Player1 == 'r' && Player2 == 's')
        {
            cout << "Player-1 Wins...!" << endl;
        }

        if (Player1 == 'p' && Player2 == 'r')
        {
            cout << "Player-1 Wins...!" << endl;
        }
        if (Player1 == 'p' && Player2 == 'p')
        {
            cout << "Tie...!" << endl;
        }
        if (Player1 == 'p' && Player2 == 's')
        {
            cout << "Player-2 Wins...!" << endl;
        }

        if (Player1 == 's' && Player2 == 'r')
        {
            cout << "Player-2 Wins...!" << endl;
        }
        if (Player1 == 's' && Player2 == 'p')
        {
            cout << "Player-1 Wins...!" << endl;
        }
        if (Player1 == 's' && Player2 == 's')
        {
            cout << "Tie...!" << endl;
        }

        if ((Player1 != 'r' && Player1 != 'p' && Player1 != 's') ||
            (Player2 != 'r' && Player2 != 'p' && Player2 != 's'))
        {
            cout << "Invalid input! Please enter 'r', 'p', or 's'." << endl;
        }

        cout << endl << "Do you want to play again? (yes or no) --> ";
        cin >> again;
        cin.clear();           
        cin.ignore(1000, '\n'); 

    } while (again == "yes" || again == "Yes" || again == "YES");

    cout << endl;
    cout << "OK,\nNO Problem...!" << endl << endl;
}