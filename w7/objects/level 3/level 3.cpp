
#include <iostream>
using namespace std;


class Quiz
{
public:
    float score;
    float totalQuestions;
    

    void showResults()
    {
        if ((score / totalQuestions) >= 0.5)
        {
            cout << "Pass";
        }
        else
        {
            cout << "Fail";
        }
    }


};

int main()
{
    Quiz quiz1;
    cout << "Input quiz score: ";
    cin >> quiz1.score;

    quiz1.totalQuestions = 100;

    quiz1.showResults();

    

}
