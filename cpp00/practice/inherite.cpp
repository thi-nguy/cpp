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
};

class Developer: public Employee
{
    public:
        std::string Favourite_Language;

        Developer(std::string name, std::string company, int age, std::string language): Employee(name, company, age) // :Employee(...): doan nay la vi Developer inherite t Employee nen khong can phai take care cac variables kia nua
        {
            Favourite_Language = language;
        }
        void fix_bug()
        {
            std::cout << Name << " fixed bug using " << Favourite_Language << std::endl;
        }
};

int     main()
{
    Employee person1 = Employee("Nhung", "Apple", 19);
    Employee person2 = Employee("Mat", "Facebook", 35);
    person1.AskForPromotion();
    person2.AskForPromotion();
    Developer dev1 = Developer("Meo", "ABC", 2, "C++");
    dev1.fix_bug();
    dev1.AskForPromotion(); // How to herite from several classes?
    Teacher t1 = Teacher("Nevil", "Howargt", 34, "Posion");
    t1.AskForPromotion();
    return (0);

}
