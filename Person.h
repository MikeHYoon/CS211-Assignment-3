/*
MikE Yoon
CS211

This is the Person class header.  
*/


#ifndef Person_h
#define Person_h
#include<string>
using namespace std;

class Person
{
  //Declaration of protected variables.
 protected:
  long id;  //ID number
  string name;  //First name and last name
  string email; //Email Address
  string address;  //Street Address
  string dateOfBirth;  //Date of birth
  string gender;  //Gender
  
 public:
  //Declaration of default constructors.
  Person();
  Person(long theId, string theName, string theEmail, string theAddress, string theDateOfBirth, string theGender);
  ~Person();
  
  //Methods for retrieving variables.
  long getId();
  string getName();
  string getEmail();
  string getAddress();
  string getDateOfBirth();
  string getGender();
  
  //Methods for setting variables.
  void setId(long setID);
  void setName(string setName);
  void setEmail(string setEmail);
  void setAddress(string setAddress);
  void setDateOfBirth(string setdateOfBirth);
  void setGender(string setGender);
  void setMULTI(string setName, string setEmail, string setAddress, 
    string setdateOfBirth, string setGender);
};
#endif 

