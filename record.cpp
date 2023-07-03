#include "record.h"

student::student (int ID_i, std::string name_i) {
    ID = ID_i;
    name = name_i;
}
int student::getID() { return ID;}
std::string student::getname() { return name;}

void student::setID (int new_ID){ ID = new_ID;}
void student::setName (std::string new_name) { name = new_name;}


course::course (std::string C_ID_i, std::string C_NAME_i, std::int8_t C_CREDIT_i){
    course_id = C_ID_i;
    course_name = C_NAME_i;
    course_credit = C_CREDIT_i;
}
std::string course::get_courseID (){ return course_id;}
std::string course::get_courseName (){ return course_name;}
std::int8_t course::get_course_credit (){ return course_credit;}

void course::set_courseID (std::string C_ID){ course_id = C_ID;}
void course::set_courseName(std::string C_Name) { course_name = C_Name;}
void course::set_courseCredit(std::int8_t C_Credit){ course_credit = C_Credit;}


grade::grade (int std_ID, std::string Crs, int grd) {
    student_id = std_ID;
    course = Crs;
    grades = grd;
}
int grade::get_stdID (){ return student_id;}
std::string grade::get_course (){ return course; }
char grade::get_grd (){ return grades;}

void grade::set_stdid (int std_id) { student_id = std_id;}
void grade::set_c (std::string Crs) { course = Crs; }
void grade::set_grd (int grd) { grades = grd;}
