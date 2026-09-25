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
};

int main()
{
    Movie movie1;

    movie1.setTitle("Best Movie of 2019");
    movie1.setYearReleased(2019);
    movie1.setScreenWriter("TestScreenWriter1");

    cout << movie1.getTitle() << endl;
    cout << movie1.getYearReleased() << endl;
    cout << movie1.getScreenWriter() << endl;

    return 0;
}