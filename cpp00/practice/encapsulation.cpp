#include <iostream>

class Employee
{
    private:
        std::string Name;
        std::string Company;
        int Age;
    public:
        void setName(std::string name) // Trong function nay ta co the dan dieu kien cho input, vi du Tuoi phai tren 18 duoi 99.
        {
            Name = name;
        }
        std::string getName()
        {
            return (Name);
        }
        void setAge(int age)
        {
            if (age > 17 && age < 100)
                Age = age;
        }
        int getAge()
        {
            return (Age);
        }
        Employee(std::string name, std::string company, int age )
        {
            Name = name;
            Company = company;
            Age = age;
        }

};

int main()
{
    Employee person1 = Employee("Nhung", "IBM", 19);
    person1.setName("Meo");
    person1.setAge(100); // Khong thanh cong
    std::cout << "Name of person 1 is: " << person1.getName() << std::endl;
    std::cout << "Age of person 1 is: " << person1.getAge() << std::endl;
    return (0);
}
