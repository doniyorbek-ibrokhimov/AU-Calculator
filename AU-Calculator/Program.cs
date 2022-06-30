using System;
using System.Collections.Generic;
namespace AU_Calculator
{
    internal class Program
    {
        static void Main(string[] args)
        {
            menu:
            //string choice = Console.ReadLine();
            Console.WriteLine("1.Exam calculation  \n2.Assignment calculation \n3.Exit or anything \nWhat do you want to calculate:");
            int choice = Convert.ToInt16(Console.ReadLine());
            switch (choice)
            {
                case 1:
                    exam_calculator();
                    goto menu;
                case 2:
                    assignment_calculator();
                    goto menu;
                case 3:
                    break;
                default:
                    break;
            }
        }

        static void assignment_calculator()
        {
            //Greeting
            Console.WriteLine("Welcome to assignment calculator!  \nPlease use it correctly and follow the instructions otherwise it will not work\n");

            //Determining the quotient of assignments
            Console.WriteLine("Enter the max percent that you can get from assignments (only NUMBER) ->");
            double str_assignment_percent = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine();

            //Knowing the number of assignmets
            Console.WriteLine("Enter the number of assignments you have (only NUMBER) ->");
            short str_num_of_assignments = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine();

        //Storing all assignments scores
            storing:                                                    //checkpoint :) if you fail noob. Unfortunatelly you can not see XD
            Console.WriteLine("Enter your scores");
            List<double> assignment_scores = new List<double>();
            double str_temp_score;
            double str_temp_max_score;
            List<double> str_max_assignment_scores = new List<double>();
            for(short i = 0; i < str_num_of_assignments; i++)
            {
                mini_storing:                                                       //this checkpoint is for if you doom your scores XAXAXAXAXAXD
                Console.WriteLine($"Enter ssignment{i} score (Only number) ->");
                str_temp_score = Convert.ToDouble(Console.ReadLine());

                Console.WriteLine($"Enter the max point you can have from assignment {i} (only NUMBER) ->");
                str_temp_max_score = Convert.ToDouble((double)str_temp_score);
                Console.WriteLine();

                if(str_temp_max_score >= str_temp_score)
                {
                    assignment_scores.Add(str_temp_score);
                    str_max_assignment_scores.Add(str_temp_max_score);
                }
                else
                {
                    Console.WriteLine("It is not correct (your score is greater than max score  \nEnter again\n)");
                    goto mini_storing;
                }
            }
            //Displaying the scores

            Console.WriteLine("Please check your scores!");
            foreach(double assignment_score in assignment_scores)
            {
                Console.WriteLine(assignment_score);
            }
            Console.WriteLine();

            Console.WriteLine("Is this right? (YES or NO) ->");
            string checkpoint = Console.ReadLine();

            if (checkpoint.ToUpper() == "NO") goto storing;

            else if(checkpoint.ToUpper() == "YES")
            {
                //calculating the total scores
                double total_score = 0;
                foreach (double l in assignment_scores) total_score += l;

                //Calculating the max score
                double max_total_score = 0;
                foreach (double m in str_max_assignment_scores) max_total_score += m;

                double answer = 0;
                answer = (str_assignment_percent * total_score) / max_total_score;
                Console.WriteLine($"Your final score from all assignments is: {answer}\n Thank you :)");
            }
            else
            {
                Console.WriteLine("Please enter the correct response (yes or no)");
            }
        }

        static void exam_calculator()
        {
            Console.WriteLine("This is exam calculator!\nWhat percentage can you get max from exam?");
            double str_max_exam_percentage = Convert.ToDouble(Console.ReadLine());

            Console.Write("\nHow much score can you get max from exam? ->");
            double str_max_exam_score = Convert.ToDouble(Console.ReadLine());

            Console.Write("\nEnter your score that you got from exam ->");
            double str_exam_score = Convert.ToDouble(Console.ReadLine());

            double answer;
            answer = (str_max_exam_percentage * str_exam_score) / (str_max_exam_score);
            Console.WriteLine($"Your final score from the exam is: {answer}");

        }

    }
}
