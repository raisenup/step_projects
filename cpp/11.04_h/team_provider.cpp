#include "team_provider.h"

void TeamProvider::addTeam(Team const *team, const string &filename) const
{
	std::fstream file(filename, std::ios::app);

	file << team->getName() << ',' << team->getWins() << ',' << team->getLosses() << '\n';
	file.close();
}

void TeamProvider::readTeamData(vector<Team> &teamdata, const string &filename) const
{
	std::ifstream file(filename);

	if (!file.is_open())
	{
		cout << "While opening file error occured...\n";
		return;
	}

	string line;
	while (getline(file, line))
	{
		stringstream ss(line);

		string name;
		int wins;
		int losses;

		getline(ss, name, ',');
		ss >> wins;
		ss.ignore();
		ss >> losses;
		ss.ignore();

		teamdata.emplace_back(name, wins, losses);
	}
	file.close();

}

void TeamProvider::printTeam(Team const *team) const
{
	cout << "Name   : " << team->getName() << '\n';
	cout << "Wins   : " << team->getWins() << '\n';
	cout << "Losses : " << team->getLosses() << "\n\n";
}



