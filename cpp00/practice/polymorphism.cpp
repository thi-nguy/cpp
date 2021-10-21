#include <iostream>

#include <iostream>

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee
{
    private:
        std::string Company;
        int         Age;

    protected:
        std::string Name;

    public:
        void    setName(std::string name)
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
        void        AskForPromotion()
        {
            if (Age > 30)
                std::cout << Name << " got promoted" << std::endl;
            else
                std::cout << "Sorry no promotion for " << Name << std::endl;
        }
        virtual void    Work()
        {
            std::cout << Name << " is checking email." << std::endl;
        }
};

class Teacher: public Employee
{
    std::string Subject;
public:

    void    prepare_lesson()
    {
        std::cout << Name << " is prepareing " << Subject << " lesson" << std::endl;
    }
    Teacher(std::string name, std::string company, int age, std::string subject): Employee(name, company, age)
    {
        Subject = subject;
    }
    void    Work()
    {
        std::cout << Name << " is teaching " << Subject << std::endl;
    }
};

class Developer: public Employee
{
    public:
        std::string Favourite_Language;

        Developer(std::string name, std::string company, int age, std::string language): Employee(name, company, age)
        {
            Favourite_Language = language;
        }
        void fix_bug()
        {
            std::cout << Name << " fixed bug using " << Favourite_Language << std::endl;
        }
        void    Work()
        {
            std::cout << Name << " is writing " << Favourite_Language << std::endl;
        }
};

int     main()
{
    Employee person1 = Employee("Nhung", "Apple", 19);
    Developer dev1 = Developer("Meo", "ABC", 2, "C++");
    Teacher t1 = Teacher("Nevil", "Howargt", 34, "Posion");

    Employee *e1 = &dev1;
    Employee *e2 = &t1;

    e1->Work();
    e2->Work();

    return (0);
}
