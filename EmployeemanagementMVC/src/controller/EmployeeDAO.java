package controller;

import java.util.ArrayList;

import model.Admin;
import model.Employee;
import model.HR;
import model.SalesManager;

public class EmployeeDAO {
	
	
	static ArrayList<Employee> employees=new ArrayList<Employee>();
	static {
		
		employees.add( new HR(101, "Jay", 60000, 5000));
		employees.add( new HR(102, "Atul", 47000, 4400));
		employees.add( new HR(103, "Nikita", 50000, 3000));
		employees.add( new SalesManager(201, "Payal", 70000, 15, 9000));
		employees.add( new SalesManager(202, "Mayuri", 57000, 14, 7500));
		employees.add( new SalesManager(203, "Yash", 68000, 12, 8000));
		employees.add( new Admin(401, "Gayatri", 60000, 90000));
		employees.add( new Admin(402, "Vaibhav", 65000, 8500));
		employees.add( new Admin(403, "Dyani", 75000, 10000));
		employees.add( new Admin(404, "Shreya", 74000, 17000));
	}
	public boolean addEmployee(Employee e) {
	       return employees.add(e);
    }
	
    public Employee searchEmployeeById(int id) {
        for (int i = 0; i < employees.size(); i++) {
            if (employees.get(i).getId() == id) {
                return employees.get(i);
            }
        }
        return null;
    }

  
    public boolean updateEmployee(int id, double newSalary) {
        Employee emp = searchEmployeeById(id);
        if (emp != null) {
            emp.setSalary(newSalary);
            return true;
        }
        return false;
    }

    public boolean deleteEmployee(int id) {
    	 Employee emp = searchEmployeeById(id);
         if (emp != null) {
        	 employees.remove(emp);
             return true;
         }
         return false;
    }
 
    

    public  ArrayList<Employee> getAllEmployee() {
        
        return employees;
    }
   

	
}



