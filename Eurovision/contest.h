#ifndef CONTEST_H
#define CONTEST_H
#include <iostream>
using namespace std;
struct Candidate{
    string name;
    int points;
};
class contest
{
public:
    contest();
    contest(string name, string candidate_names[], int number);
    void showWinner();
    bool voteFor(string name, int points);
    contest &operator +=(const contest &C);
    friend ostream& operator<<(ostream &os, const contest &C);
private:
    string _name;
    Candidate *_candidates;
    int _candidatesnumber;
};



#endif // CONTEST_H
