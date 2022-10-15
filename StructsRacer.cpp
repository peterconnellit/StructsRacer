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
	string driverName;
	int skillLevel;
};

struct Driver
{
	string driverName;
	int driverAge;
	int skillLevel;
};

int main()
{
	//declare new racers
	Racer team1;
	team1.teamName = "Red";
	team1.distance = 0;
	team1.driverName = "Bob";
	team1.skillLevel = 10;


	Racer team2;
	team2.teamName = "Blue";
	team2.distance = 0;
	team2.driverName = "Fred";
	team2.skillLevel = 5;

	Racer team3;
	team3.teamName = "Yellow";
	team3.distance = 0;
	team3.driverName = "Bill";
	team3.skillLevel = 1;

	//max hours of race
	const int MAX_HOURS = 5;

	srand(time(NULL));

	//for loop runs 5 times, creating rand number for each racers distance to store in distance variable, then add to next iteration
	for (int i = 0; i < MAX_HOURS; i++) {
		team1.distance = (rand() % 10 + team1.skillLevel) + team1.distance;
		cout <<"The " << team1.teamName << " driven by " << team1.driverName << " has driven " << team1.distance << " miles" << endl;

		team2.distance = (rand() % 10 + team2.skillLevel) + team2.distance;
		cout << "The " << team2.teamName << " driven by " << team2.driverName << " has driven " << team2.distance << " miles" << endl;

		team3.distance = (rand() % 10 + team3.skillLevel) + team3.distance;
		cout << "The " << team3.teamName << " driven by " << team3.driverName << " has driven " << team3.distance << " miles" << endl<<"\n";
	}

	cout << team1.teamName << "'s finished at: " << team1.distance << endl;
	cout << team2.teamName << "'s finished at: " << team2.distance << endl;
	cout << team3.teamName << "'s finished at: " << team3.distance << endl << "\n";

	//array to store total distance variables for each racer
	int totalDistances[3] = { team1.distance, team2.distance, team3.distance };

	//sort array
	int n = sizeof(totalDistances) / sizeof(totalDistances[0]);
	sort(totalDistances, totalDistances + n);	

	//winner and loser from sorted array
	int winner = totalDistances[2];
	int loser = totalDistances[0];

	cout << "Farthest distance travelled: " << winner << endl;
	cout << "Least distance travelled: " << loser << endl;

	
		
	

	//still needs output to say the winner is...red or blue or yellow
	//cout << winner << teamName << endl;
}