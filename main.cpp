#include <iostream>
#include <string>
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
    Movie movie1;

    movie1.setTitle("Best Movie of 2019");
    movie1.setYearReleased(2019);
    movie1.setScreenWriter("TestScreenWriter1");

    movie1.print();

    return 0;
}