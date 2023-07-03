#include <iostream>
#include <string>
#include <vector>
#include "record.h"
#include "record.cpp"
using namespace std;
int main(){
    // student std1 (3818247, "Kevin");
    // course course1(12322, "Intro to Electric", 12);
    // grade grd (381247, 321, 'A');

    // cout << "Student name: " << std1.getname() << ". Student ID: " << std1.getID() << endl;
    // cout << "Course name: " << course1.get_courseName() << ". Course ID: " << course1.get_courseID() << ". Credit:" << static_cast<int16_t> (course1.get_course_credit()) <<endl;
    // cout << "Student ID: " << grd.get_stdID() << " in course: " << grd.get_course() << " recieve grade: " << grd.get_grd() << endl;
    vector<student> students = {student(3818247, "Nhat Nguyen"),
                                student(2335, "Minato Namikaze")};

    vector<course> courses = {course("EEET2437", "Electric Principal", 12),
                              course("MATH2239", "Mathematic 1", 12),
                              course("EEET2601", "Engineer Computing 1", 12),
                              course("MANU2418", "Adv. Manu. & Mechatronics", 12),
                            //   course("OENG1209", "Engineer Science", 12),
                            //   course("OENG1205", "Creative Engineering CAD", 12),
                            //   course("EEET2604", "Dig. Sys, Design 1", 12),
                            //   course("EEET2600", "Electronics", 12),
                            //   course("OENG1181", "Intro to Prof Eng Prac", 12),
                            //   course("EEET2602", "Engineer Design 2", 12),
                            //   course("MIET2500", "Engineer Mechanic", 12),
                            //   course("OENG1207", "Digital Fundamentals", 12),
                            //   course("EEET2505", "Intro to Embeded Systems", 12),
                            //   course("MATH2263", "Math for ECE", 12),
                            //   course("MIET2499", "Stress Analysis", 12),
                            //   course("MANU2484", "Design for Assembly & Automation", 12),
                            //   course("MANU2480", "Autonomous Systems", 12),
                            //   course("EEET2610", "Engineer Design 3", 12),
                            //   course("MIET2510", "Mechanical Design", 12),
                            //   course("MANU2482", "Material Engineering", 12),
                            //   course("EEET2506", "Control Systems", 12),
                            //   course("EEET2485", "Research Method for Engineering", 12),
                            //   course("EEET2475", "Advanced Digital Design 1", 12),
                            };

    vector<grade> grades = {grade(3818247, "EEET2437" , CR), grade(3818247, "MATH2239", HD), grade(3818247, "EEET2601", DI), grade(3818247, "MANU2418", CR),
                            grade(2335, "EEET2437", HD), grade(2335, "MATH2239", HD),grade(2335, "EEET2601", HD),grade(2335, "MANU2418", HD)};

    float GPA = 0.0f;
    float tt_crd = 0.0f;    //total course credit 
    float tt_pts = 0.0f;    //total point achieved
    int ID;
        for (int i = 0; i < students.size(); i++){
            for (int j = 0; j < courses.size(); j++) {
                for (int k = 0; k < grades.size(); k++) {
                    if(students[i].getID() == grades[k].get_stdID()){
                        tt_pts += courses[j].get_course_credit() * grades[k].get_grd();
                        // cout << "tt_pts = " << tt_pts << "\t";    
                        tt_crd += courses[j].get_course_credit();
                        // cout << "tt_crd = " << tt_crd << endl;
                    }   
                }

            }
            // cout << "_tt_crd = " << tt_crd << endl;
            // cout << "_tt_pts = " << tt_pts << endl;
            GPA = tt_pts / tt_crd;
            cout << "Number of courses taken: " << courses.size() << endl;
            cout << "GPA of student " << students[i].getname() << " = " << GPA << endl;
            tt_crd = 0; //reset value
            tt_pts = 0; //reset value
        }
        
    // vector <int> number = {23,44,1,56,4,90};
    // auto ptr = number.begin();
    // while (ptr != number.end()){    //while loop
    //     cout << *ptr << " ";
    //     ptr = next(ptr,1);
    // }
    // cout << endl;
    // int i = 0;
    // do {                            // other form of while loop
    //     cout << number[i] << " ";
    //     i++;
    // } while (i < number.size());
    
    // float average = 0.0f;
    // for (auto x : number){             
    //     average += x;
    // }
    // average /= number.size();

    // cout << "Average: " << average <<endl;

    // float avg = 0.00f;
    // for (int j = 0; j < number.size(); j++){
    //     avg += number[j];
    // }
    // avg /= number.size();

    // cout << "Avg: " << avg << endl;
    
    return 0;
}