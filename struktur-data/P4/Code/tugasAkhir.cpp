#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    string address;
    int year;
    Student *next;
} *head, *curr, *newstud;

void addStudent(int id, string name, string address, int year)
{
    newstud = new Student();
    newstud->id = id;
    newstud->name = name;
    newstud->address = address;
    newstud->year = year;
    newstud->next = head;
    head = newstud;
}

void display()
{
    curr = head;
    if(curr == NULL)
    {
        cout << "No data found" << endl;
    }
    else
    {
        while(curr != NULL)
        {
            cout << "ID : " << curr->id << endl;
            cout << "Name : " << curr->name << endl;
            cout << "Address : " << curr->address << endl;
            cout << "Start studying in : " << curr->year << endl;
            cout << "Memory address : " << &curr << endl;
            curr = curr->next;
        }
    }
}

int main()
{
    addStudent(13130, "Kang Asep", "New Village", 2021);
    display();
}

