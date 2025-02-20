#include "employee.h"
 
int relation(Employee *employee1, Employee *employee2) {
    // TODO: 
    if (employee1->boss == employee2->boss) {
        
        if (employee1->boss == employee1) {
            return 2;
        }
        else if (employee2->boss == employee2) {
            return 1;
        }
        else return 3;        
    }

    Employee *temp = employee1->boss;
    while (temp->boss != temp) {
        if (temp == employee2) return 1;
        temp = temp->boss;
    }

    temp = employee2->boss;
    while (temp->boss != temp) {
        if (temp == employee1) return 2;
        temp = temp->boss;
    }

    return 4;
}


