#include <cstdlib>
#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

//new racer struct
struct Racer
{
	string teamName;
	int distance;
};

int main()
{
	//declare new racers
	Racer team1;
	team1.teamName = "Red";
	team1.distance = 0;

	Racer team2;
	team2.teamName = "Blue";
	team2.distance = 0;

	Racer team3;
	team3.teamName = "Yellow";
	team3.distance = 0;

	//max hours of race
	int MAX_HOURS = 5;

	srand(time(0));

	//for loop runs 5 times, crearing rand number for each racers distance to store in distance variable, then add to next iteration
	for (int i = 0; i < MAX_HOURS; i++) {
		team1.distance = (rand() % 10) + team1.distance;
		cout << team1.teamName << "'s distance is: " << team1.distance << endl;

		team2.distance = (rand() % 10) + team2.distance;
		cout << team2.teamName << "'s distance is: " << team2.distance << endl;

		team3.distance = (rand() % 10) + team3.distance;
		cout << team3.teamName << "'s distance is: " << team3.distance << endl << "\n";
	}

	//array to store total distance variables
	int totalDistances[3] = { team1.distance, team2.distance, team3.distance };
	int n = sizeof(totalDistances) / sizeof(totalDistances[0]);

	//sort array
	sort(totalDistances,totalDistances + n);

	//winner and loser from sorted array
	int winner = totalDistances[2];
	int loser = totalDistances[0];

	cout << "Highest distance travelled: " << winner << endl;
	cout << "Least distance travelled: " << loser << endl;


}