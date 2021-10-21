#include <iostream>

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee
{
    private:
        std::string Name;
        std::string Company;
        int         Age;

    public:
        void        setName(std::string name)
        {
            Name = name;
        }
        std::string getName()
        {
            return (Name);
        }
        Employee(std::string name, std::string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }
        void    AskForPromotion()
        {
            if (Age > 30)
                std::cout << Name << " got promoted" << std::endl;
            else
                std::cout << "Sorry no promotion for " << Name << std::endl;
        }
};

int     main()
{
    Employee person1 = Employee("Nhung", "Apple", 19);
    Employee person2 = Employee("Mat", "Facebook", 35);
    person1.AskForPromotion();
    person2.AskForPromotion();
    return (0);

}

