/*
Title: Chapter 5 Excercise 18 - PopulationBarChart
File Name: Chp5Exc18_Kason_Steiner.cpp
Programmer: Kason Steiner
Date: 11/2024
Write a program that produces a bar chart showing the population growth of Prairieville, a small town in the Midwest, at 20-year intervals during the past 100 years. The program should read in the population figures (rounded to the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, and 2000 from a file. For each year, it should display the date and a bar consisting of one asterisk for each 1,000 people. The data can be found in the People.txt file.
*/  
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {

     int population;
     vector <int> year = {1900,1920,1940,1960,1980,2000};
     ifstream inFile;
     inFile.open("People.txt");

          cout << "PRAIRIEVILLE POPULATION GROWTH \n";
          cout << "(each * represents 1,000 people)\n";
     
     for (int i = 0; i < 6; i++){
          cout << year[i] << ": ";
          inFile >> population; //pulls population from file
          int astericks = population / 1000; //calculates astericks needed per 1000
               for (int j = 0; j < astericks; j++ )
                cout << '*'; //outputs asterick for every 1000
          cout << endl;
     }

  

     inFile.close();
return 0;
}