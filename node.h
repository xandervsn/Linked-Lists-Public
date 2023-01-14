/* NODE.H
   Xander Siruno-Nebel
   C++/Data Strucuts, Galbraith
   NODE.H
 */
#include <iostream>
#include "student.h"

#ifndef NODE_H
#define NODE_H

using namespace std;

class Node{
 public:
  Node(Student*);//constructor
  //sets the node's student to Student*
  //sets the following node to NULL so it can be changed later
  ~Node();//destructor
  //deletes the node's student
  //" "

  void setStudent(Student*);
  //sets the node's student to Student*
  Student* getStudent();
  //returns student

  void setNext(Node*);
  //sets the following node to Node*
  Node* getNext();
  //returns next node
 private:
  //'local' vars
  Student* student;
  Node* next;
};
#endif
