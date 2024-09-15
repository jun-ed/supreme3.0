#include <iostream>
#include <map>
using namespace std;

struct tagEmployeeDetails
{
    int nEmpID;
    char cName[30];
    int nSalary;
    char cDesignation[20];
};


int main() 
{
    map<int, tagEmployeeDetails> lMapEmployeeDetails;
    map<int, tagEmployeeDetails>::iterator it;
    int lnChoice;
    do {
        printf("Enter 1 to add employee details\n Enter 2 to update employee datails \n Enter 3 to delete employee details\n Enter 4 to display single employee details\n Enter 5 to display all employee details \n Enter 0 to exit\n");
        scanf("%d", &lnChoice);
        int lnEmpID;
        switch(lnChoice)
        {
            case 1: printf("Inserting the employee details \n");
                tagEmployeeDetails lstNewEmployee;
                printf("Enter the employee ID \n");
                scanf("%d", &lstNewEmployee.nEmpID);
                printf("Enter the employee name \n");
                // scanf("%s", &lstNewEmployee.cName);
                cin >> lstNewEmployee.cName;
                printf("Enter the employee salary \n");
                scanf("%d", &lstNewEmployee.nSalary);
                printf("Enter the employee designation \n");
                // scanf("%s", &lstNewEmployee.cDesignation);
                cin >> lstNewEmployee.cDesignation;
                lMapEmployeeDetails.insert(pair<int, tagEmployeeDetails>(lstNewEmployee.nEmpID, lstNewEmployee));
                break;

            case 2: printf("Updating the employee details! using the employee ID \n");
                printf("Enter the employee ID\n");
                scanf("%d", &lnEmpID);
                //check if the employee ID exists or not
                if(lMapEmployeeDetails.find(lnEmpID) != lMapEmployeeDetails.end())
                {
                    printf("Select the field to update \n");
                    printf("1. Employee name \n 2. Employee salary \n 3. Employee designation \n");
                    int lnUpChoice;
                    scanf("%d", &lnUpChoice);
                   switch(lnUpChoice)
                    {
                        case 1: printf("Enter the employee name \n");
                            // scanf("%s", &lMapEmployeeDetails[lnEmpID].cName);
                            cin >> lMapEmployeeDetails[lnEmpID].cName;
                            break;
                        case 2: printf("Enter the employee salary \n");
                            scanf("%d", &lMapEmployeeDetails[lnEmpID].nSalary);
                            break;
                        case 3: printf("Enter the employee designation \n");
                            // scanf("%s", &lMapEmployeeDetails[lnEmpID].cDesignation);
                            cin >> lMapEmployeeDetails[lnEmpID].cDesignation;
                            break;
                        default: printf("Invalid choice \n");
                            break;
                    }
                }
                else {
                    printf("Employee with ID: %d, does not exist \n", lnEmpID);
                }
                break;

            case 3: printf("Deleting the employee details using the employee ID \n");
                printf("Enter the employee ID \n");
                scanf("%d", &lnEmpID);
                //check if the employee ID exists or not
                if(lMapEmployeeDetails.find(lnEmpID) != lMapEmployeeDetails.end())
                {
                    lMapEmployeeDetails.erase(lnEmpID);
                    printf("Employee with ID: %d, deleted successfully \n", lnEmpID);
                }
                else {
                    printf("Employee with ID: %d, does not exist \n", lnEmpID);
                }
                break;

            case 4: printf("Displaying the employee details using the employee ID \n");
                printf("Enter the employee ID \n");
                scanf("%d", &lnEmpID);
                //check if the employee ID exists or not
                if(lMapEmployeeDetails.find(lnEmpID) != lMapEmployeeDetails.end())
                {
                    printf("Employee ID: %d ", lMapEmployeeDetails[lnEmpID].nEmpID);
                    printf("Employee Name: %s ", lMapEmployeeDetails[lnEmpID].cName);
                    printf("Employee Salary: %d ", lMapEmployeeDetails[lnEmpID].nSalary);
                    printf("Employee Designation: %s\n", lMapEmployeeDetails[lnEmpID].cDesignation);
                }
                break;

            case 5: printf("Displaying the employee details \n");
                for(it = lMapEmployeeDetails.begin(); it != lMapEmployeeDetails.end(); ++it)
                {
                    printf("Employee ID: %d, ", it->second.nEmpID);
                    printf("Employee Name: %s, ", it->second.cName);
                    printf("Employee Salary: %d, ", it->second.nSalary);
                    printf("Employee Designation: %s \n", it->second.cDesignation);
                }
                break;

            case 0: printf("Exiting the program.. \n");
                break;

            default: printf("Invalid choice \n");
                break;
        }
    } while(lnChoice != 0);

}