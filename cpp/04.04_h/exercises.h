#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <map>
using std::cout, std::cin;
using std::string, std::fstream, std::ofstream, std::ifstream, std::stringstream, std::vector, std::map;

void readFile(const string &filename);
int countWords(const string &filename);
void copyFile(const string &filename1, const string &filename2);
void mergeFiles(const string &filename1, const string &filename2, const string &filename3);
int findTheBiggestNumber(const string &filename);
void removeComments(const string &filename1, const string &filename2);
void getStats(const string &filename1);