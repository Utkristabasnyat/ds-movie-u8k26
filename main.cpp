#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Movie
{
private:
    string title;
    int yearReleased;
    string screenWriter;

public:
    void setTitle(string t)
    {
        title = t;
    }

    void setYearReleased(int y)
    {
        yearReleased = y;
    }

    void setScreenWriter(string s)
    {
        screenWriter = s;
    }

    string getTitle()
    {
        return title;
    }

    int getYearReleased()
    {
        return yearReleased;
    }

    string getScreenWriter()
    {
        return screenWriter;
    }

    void print()
    {
        cout << "Movie: " << title << endl;
        cout << "    Year released: " << yearReleased << endl;
        cout << "    Screenwriter: " << screenWriter << endl;
    }
};

int main()
{
    vector<Movie> movies;
    ifstream inputFile("input.txt");

    if (!inputFile)
    {
        cout << "Error opening input file." << endl;
        return 1;
    }

    string title;
    string yearText;
    string screenWriter;

    while (getline(inputFile, title))
    {
        getline(inputFile, yearText);
        getline(inputFile, screenWriter);

        Movie tempMovie;

        tempMovie.setTitle(title);
        tempMovie.setYearReleased(stoi(yearText));
        tempMovie.setScreenWriter(screenWriter);

        movies.push_back(tempMovie);
    }

    inputFile.close();

    cout << "Movies read: " << movies.size() << endl;

    return 0;
}