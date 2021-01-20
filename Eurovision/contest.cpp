#include "contest.h"

contest::contest()
{

}

contest::contest(string name, string candidate_names[], int number)
{
    this->_name = name;
    this->_candidatesnumber = number;
    this->_candidates = new Candidate[_candidatesnumber];

    for(int i = 0; i<this->_candidatesnumber; i++){
        _candidates[i].name = candidate_names[i];
        _candidates[i].points = 0;
    }
}

bool contest::voteFor(string name, int points)
{
    cout << "\t- "<< points << " points go to... "<<name<<"!"<<endl;
    for(int i = 0; i<_candidatesnumber; i++){
        if(_candidates[i].name == name){
            _candidates[i].points = points;
            return true;
        }
    }
    return false;
}

contest &contest::operator +=(const contest &C)
{
    for(int i = 0; i<_candidatesnumber; i++){
        string currentName = _candidates[i].name;

        for(int j = 0; i<C._candidatesnumber; i++){
            if(C._candidates[j].name == currentName){
                _candidates[i].points += C._candidates[j].points;
                break;
            }
        }
    }
    return *this;
}
ostream& operator<<(ostream& os, const contest &c){
    os << c._name << " Results:" << endl;
    os << "Name\tVotes:"<<endl;
    string winner;
    int winnerpoints = 0;
    for(int i = 0; i < c._candidatesnumber; i++){
        os<< c._candidates[i].name<<"\t"<<c._candidates[i].points<<endl;
        if(c._candidates[i].points > winnerpoints){
            winnerpoints = c._candidates[i].points;
            winner = c._candidates[i].name;
        }

    }

    os << "The winner, with a total of " << winnerpoints << " points is... "<< winner << "! Congratulations!!"<<endl;
    return os;
}

