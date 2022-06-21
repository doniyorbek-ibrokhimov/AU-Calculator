//
// Created by  on 16/06/2022.
//

#include "exam_calculator.h"

void exam_calculator(){
    // Getting max midterm percentage
    cout << "This is exam calculator!\n"
         << "What percent can you get max from exam? ->";
    string str_max_exam_percentage;
    cin >> str_max_exam_percentage;
    float max_exam_percentage = stof(str_max_exam_percentage);


    // Getting max midterm score
    cout << "How much score can you get max from exam? ->";
    string str_max_exam_score;
    cin >> str_max_exam_score;
    float max_exam_score = stof(str_max_exam_score);

    // Getting collected score from midterm exam
    cout << "Enter your score that you got from exam ->";
    string str_exam_score;
    cin >> str_exam_score;
    float exam_score{0};

    /*
     * 100 point(max_exam_score) - 40 %(max_exam_percentage)
     * 70 point(exam_score) - x %(answer)
     * x = (max_exam_percentage * exam_score) / (max_exam_score)
     * */

    float answer{0};
    answer = (max_exam_percentage * exam_score) / (max_exam_score);
    cout << "Your final score from mid-term exam is: " << answer;
}