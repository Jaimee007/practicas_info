#include <iostream>
#include "contest.h"
//CONTEST EUROVISION
using namespace std;

int main()
{
    string spain_candidates[]{"Sweden", "France", "Cyprus"};
    string france_candidates[]{"Sweden", "Spain", "Cyprus"};
    string sweden_candidates[]{"France", "Spain", "Cyprus"};
    string cyprus_candidates[]{"Sweden", "France", "Spain"};
    string eurovision_candidates[]{"Cyprus", "France", "Spain", "Sweden"};
    cout << "Welcome to Eurovision 2021!"<<endl;

    //Getting votes from spain
    contest spain_voting("Spain", spain_candidates, 3);
    cout << "It is time for Spain to vote!" << endl;
    spain_voting.voteFor("France", 9);
    spain_voting.voteFor("Sweden", 10);
    spain_voting.voteFor("Cyprus", 12);
    // Getting votes from France
    contest france_voting("France", france_candidates, 3);
    cout << endl << "Muchas gracias! Let's go to Paris now!" << endl;
    france_voting.voteFor("Sweden", 9);
    france_voting.voteFor("Spain", 10);
    france_voting.voteFor("Cyprus", 12);
    // Getting votes from Sweden
    contest sweden_voting("Sweden", sweden_candidates, 3);
    cout << endl << "Merci beaucoup! We are going to listen now to our swedish friends..." << endl;
    sweden_voting.voteFor("Spain", 9);
    sweden_voting.voteFor("France", 10);
    sweden_voting.voteFor("Cyprus", 12);
    // Getting votes from Cyprus
    contest cyprus_voting("Cyprus", cyprus_candidates, 3);
    cout << endl << "Tack! Finally, let's travel to Cyprus to get the last votes of the night" << endl;
    cyprus_voting.voteFor("France", 9);
    cyprus_voting.voteFor("Spain", 10);
    cyprus_voting.voteFor("Sweden", 12);
    cout << endl << "Thank you all for your participation. Let's look at the final ranking" << endl;
    // Add all country votes to get final results
    contest final_results("Eurovision 2019", eurovision_candidates, 4);
    final_results+=spain_voting;
    final_results+=france_voting;
    final_results+=sweden_voting;
    final_results+=cyprus_voting;
    cout << final_results << endl;
    //final_results.showWinner();
return 0;
}
