#pragma once
#include "team.h";

struct TeamProvider
{
	void addTeam(Team const *team, const string &filename = "teamdata.csv") const;
	void readTeamData(vector<Team> &teamdata, const string &filename = "teamdata.csv") const; 
	void printTeam(Team const *team) const;
};

