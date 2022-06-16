//
// Created by  on 17/06/2022.
//

#include "assignment_calculator.h"

void assignment_calculator() {
    // Greeting
    cout << "Welcome to assignment calculator\n"
         << "Please use it correctly and follow the instructions otherwise it will not work\n";

    // Determining the quotient of assignments
    float assignment_percent{0};
    cout << "Enter the max percent that you can get from assignments (only NUMBER) ->";
    cin >> assignment_percent;
    cout << '\n';

    // Knowing the number of assignments
    int num_of_assignments{0};
    cout << "Enter the number of assignments you have (only NUMBER) ->";
    cin >> num_of_assignments;
    cout << '\n';

    // Storing all assignment scores
    storing:
    cout << "Enter your score from assignments\n";
    vector<float> assignment_scores;
    float temp_score{0};
    float temp_max_score{0};
    vector<float> max_assignment_scores;

    for (int i = 1; i <= num_of_assignments; i++) {
        mini_storing:
        cout << "Enter assignment " << i << " score (only NUMBER) ->";
        cin >> temp_score;

        cout << "Enter the max point you can have from assignment " << i << " (only NUMBER) ->";
        cin >> temp_max_score;
        cout << '\n';

        if (temp_max_score >= temp_score) {
            assignment_scores.push_back(temp_score);
            max_assignment_scores.push_back(temp_max_score);
        } else {
            cout << "It is not correct (your score is greater than max score)" << '\n'
                 << "Enter again!" << '\n';
            goto mini_storing;
        }
    }

    // Displaying the scores
    cout << "Please check your scores!!!" << '\n';
    int n{1};
    for (auto j: assignment_scores) {
        cout << "Assignment " << n << " is " << j << '\n';
        n++;
    }
    cout << '\n';
    n = 1;
    for (auto k: max_assignment_scores) {
        cout << "Max score from Assignment " << n << " is " << k << '\n';
        n++;
    }
    cout << '\n';

    // Checking progress
    cout << "Is it right? (Enter only YES or NO) ->";
    string checkpoint;
    cin >> checkpoint;
    if (checkpoint == "NO") goto storing;

    // Calculating the total score
    float total_score{0};
    for (auto l: assignment_scores) total_score += l;

    // Calculating the max total score
    float max_total_score{0};
    for (auto m: max_assignment_scores) max_total_score += m;

    float answer{0};
    answer = (assignment_percent * total_score) / max_total_score;
    cout << "Your final score from all assignments is: " << answer << '\n'
         << "Thank you :)" << '\n';
}