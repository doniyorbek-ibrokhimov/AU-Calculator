//
// Created by  on 16/06/2022.
//

#include "exam_calculator.h"

void exam_calculator(){
    // Getting max midterm percentage
    cout << "This is exam calculator!\n"
         << "What percent can you get max from exam? ->";
    float max_exam_percentage{0};
    cin >> max_exam_percentage;

    // Getting max midterm score
    cout << "How much score can you get max from exam? ->";
    float max_exam_score{0};
    cin >> max_exam_score;

    // Getting collected score from midterm exam
    cout << "Enter your score that you got from exam ->";
    float exam_score{0};
    cin >> exam_score;

    /*
     * 100 point(max_exam_score) - 40 %(max_exam_percentage)
     * 70 point(exam_score) - x %(answer)
     * x = (max_exam_percentage * exam_score) / (max_exam_score)
     * */

    float answer{0};
    answer = (max_exam_percentage * exam_score) / (max_exam_score);
    cout << "Your final score from mid-term exam is: " << answer;
}