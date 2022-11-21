//NAME: RAIYAN MASOOD HRIDDHO
//ID  : 1931117042
//Task-02 from Lab-04_Unsorted_List_Array


//main.cpp

#include <iostream>

#include <list>
using namespace std;

//StudentInfo class
class StudentInfo{
    public:
        // attributes
        int studentID;
        string name;
        double CGPA;
        // constructor
        StudentInfo(int sID, string name, double CGPA)
        {
            this-> studentID = sID;
            this-> name = name;
            this-> CGPA = CGPA;
        }
        // method that prints details of student
        void showInfo()
        {
            std::cout << "ID  - " << studentID << " name - " << name << " CGPA -  "  << CGPA  << std::endl;
        }
};

int main()
{   // create list
    std::list<StudentInfo> studentInfoList;
    // insert records
    studentInfoList.push_back(StudentInfo(15234,"Jon", 2.6));
    studentInfoList.push_back(StudentInfo(13732,"Tyrion", 3.9));
    studentInfoList.push_back(StudentInfo(13569, "Sandor", 1.2));
    studentInfoList.push_back(StudentInfo(15467, "Ramsey", 3.1));
    studentInfoList.push_back(StudentInfo(16285, "Arya", 3.1));


    // iterate over studentInfoList and delete the record with studentID = 15467
    for(auto i = studentInfoList.begin() ; i != studentInfoList.end();)
    {
        if((*i).studentID == 15467)
          i=studentInfoList.erase(i);
        else
          i++;
    }
    bool found = false;
    // iterate over studentInfoList and get the record with ID 13569
    for(auto i = studentInfoList.begin() ; i != studentInfoList.end();i++)
    {   // record found
        if((*i).studentID == 13569)
        {
            found = true;
            std::cout << "Item is found." << std::endl;
            i->showInfo();
        }
    }
    // if record with id 13569 is not found show the message it is not found
    if(!found){
        std::cout << "record with id = 13569 is not found" << std::endl;
    }

    //print the list
    std::cout << "studentInfoList -- " << std::endl;
     for(auto i = studentInfoList.begin() ; i != studentInfoList.end();i++)
    {

        i->showInfo();
    }

}
