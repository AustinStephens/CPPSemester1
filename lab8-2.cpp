// This was the midterm project for my C++ class.
// This program simulates a volley ball match between 2 given teams.
// Follows the rules of olympic volleyball. First team to 2 matches win, 2 sets to win a match, 21 points to win a set. Every 7 points the teams switch sides.
// If 1-1, overtime is player, first to 15 points wins (must win by 2), switching sides every 5 points.

// NOTE: My professor made us make our programs to look EXACTLY like hers did. So thats why there are a lot of setw's, endlines, and extra spaces in the output.

#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;

int main() 
{
	char name1[20];
	char name2[20];
	bool ab;
	bool flag = true;
	char flagChar;
	char point;
	
	do
	{
		name1[20] = {0};
		name2[20] = {0};
		int matchA = 0;
		int matchB = 0;
		int scoreA = 0;
		int scoreB = 0;
		
		cout << "          Rio Olympics Beach Volley Ball Game Tracker" << endl << endl;
		cout << "Enter the Name of Team A: ";
		cin.getline(name1, 20);
		cout << "Enter the Name of Team B: ";
		cin.getline(name2, 20);
		cout << "Let the Games begin ! Best 2 of 3 sets win" << endl << endl;

		while ((matchA + matchB) < 2)
		{
			scoreA = 0;
			scoreB = 0;
			
			cout << "Current Status              Set " << matchA + matchB + 1 << endl
				 << "Team A" << setw(28) << name1 << " | Team B" << setw(28) << name2 << endl
				 << setw(34) << scoreA << " | " << setw(34) << scoreB << endl;
			
			while ((scoreA < 21 && scoreB < 21) || abs(scoreA - scoreB) < 2)
			{	
				do
				{
					cout << "Which team score point (A or B) ?";
					cin.get(point);
					switch (point)
					{
						default:  ab = false;
								  break;
						case 'a':            // passes through to the case 'A'
						case 'A': scoreA++;
								  ab = true;	  
								  break;
						case 'b':
						case 'B': scoreB++;
								  ab = true;
								  break;	
					}
				} while (!ab);
					
					 
				if ((scoreA + scoreB) % 14 <= 6)
				{		
					// could do a method extraction here. One function that would display team a first and another to display team b
					cout << "Current Status              Set " << matchA + matchB + 1 << endl
						 << "Team A" << setw(28) << name1 << " | Team B" << setw(28) << name2 << endl
						 << setw(34) << scoreA << " | " << setw(34) << scoreB << endl;	
				}
				else
				{
					cout << "Current Status              Set " << matchA + matchB + 1 << endl
					 	 << "Team B" << setw(28) << name2 << " | Team A" << setw(28) << name1 << endl
					 	 << setw(34) << scoreB << " | " << setw(34) << scoreA << endl;
				}
				
				if ((scoreA + scoreB) % 7 == 0 && ((scoreA < 21 && scoreB < 21) || abs(scoreA - scoreB) < 2)) // the second part of the condition makes sure that the game isnt over before outputting switch sides.
				{
					cout << "           Switch Sides !!!" << endl;
				}
			}
			
			if (scoreA > scoreB)
			{
				cout << "+++++++++ Set to Team A " << name1 << " +++++++++" << endl;
				matchA++;
			}
			else 
			{
				cout << "+++++++++ Set to Team B " << name2 << " +++++++++" << endl;
				matchB++;
			}
			
			cout << "Team A " << name1 << " at set count " << matchA << " to Team B " << name2 << " at set count " << matchB << endl;
		}
		
		//check for tiebreaker
		
		if (matchA == 2 || matchB == 2) // looking back it would probably be better to do matchA == 1 && matchB == 1
		{
			cout << "Match over Team " << (matchA > matchB ? "A ": "B ") << (matchA > matchB ? name1 : name2) << " wins !!!" << endl;
		}
		else
		{
			cout << "Tie Breaker Required" << endl;
			scoreA = 0;
			scoreB = 0;
			
			cout << "Current Status              Set 3" << endl
				 << "Team A" << setw(28) << name1 << " | Team B" << setw(28) << name2 << endl
				 << setw(34) << scoreA << " | " << setw(34) << scoreB << endl;
			
			while ((scoreA < 15 && scoreB < 15) || abs(scoreA - scoreB) < 2)
			{
				do
				{
					cout << "Which team score point (A or B) ?";
					cin >> point;
					switch (point)
					{
						case 'a':
						case 'A': scoreA++;
								  ab = true;	  
								  break;
						case 'b':
						case 'B': scoreB++;
								  ab = true;
								  break;
						default: ab = false;
								 break;
					}
				} while (!ab);
						
				if ((scoreA + scoreB) % 10 <= 4)
				{		
					cout << "Current Status              Set 3" << endl
						 << "Team A" << setw(28) << name1 << " | Team B" << setw(28) << name2 << endl
						 << setw(34) << scoreA << " | " << setw(34) << scoreB << endl;
				}
				else
				{
					cout << "Current Status              Set 3" << endl
					 	 << "Team B" << setw(28) << name2 << " | Team A" << setw(28) << name1 << endl
					 	 << setw(34) << scoreB << " | " << setw(34) << scoreA << endl;
				}
				
				if ((scoreA + scoreB) % 5 == 0 && ((scoreA < 15 && scoreB < 15) || abs(scoreA - scoreB) < 2))
				{
					cout << "           Switch Sides !!!" << endl;
				}
			}
			
			cout << "Tie breaker and game to Team " << (scoreA > scoreB ? "A ": "B ") << (scoreA > scoreB ? name1 : name2) << " wins!!!" << endl;
			
		}
		
		cout << "Will there be another Beach Volleyball Match (Y/N)?";
		cin >> flagChar;
		cin.ignore();
		cout << endl;
		
	}while(flagChar != 'n' && flag != 'N');
	
	return 0;
}
