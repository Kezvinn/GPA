// #pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class student {
    public:
        student (int ID_i, std::string name_i); //constructor
    //getter function
        int getID ();
        std::string getname();
    //setter function
        void setID (int new_ID);
        void setName (std::string new_name);
    private:
        int ID; 
        std::string name;
};

class course {
    public:
        course (std::string C_ID_i, std::string C_NAME_i, std::int8_t C_CREDIT_i);
        std::string get_courseID ();
        std::string get_courseName ();
        std::int8_t get_course_credit ();

        void set_courseID (std::string C_ID);
        void set_courseName(std::string C_Name);
        void set_courseCredit(std::int8_t C_Credit);
    private:
        std::string course_id;
        std::string course_name;
        std::int8_t course_credit;
};

// enum GRADE {F,D,C,B,A};
enum GRADE {NN,PA,CR,DI,HD};
class grade {
    public: 
        grade (int std_ID, std::string Crs, int grd);
        int get_stdID();
        std::string get_course();
        char get_grd();

        void set_stdid(int std_id);
        void set_c(std::string Crs);
        void set_grd(int grd);

    private:
        int student_id;
        std::string course;
        int grades;
};

#endif  //student_h