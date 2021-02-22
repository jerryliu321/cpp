class employee
{
protected:
    char *name;
    int individualEmpNo;
    int grade;
    float accumPay;
    static int emplpoyeeNo;
public:
    employee();
    ~employee();
    void promote(int);
    void displayStatus();
};
class technician:public employee
{
    private:
        float hourlyRate;
        int workHours;
    public:
        technician();
        void pay();
        void displayStatus();
};

class salesman:virtual public employee
{
protected:
   float CommRate;
   float sales;
public:
    salesman();
    void pay();
    void displayStatus();
};

class manager
{
protected:
    float monthlyPay;
public:
    manager(/* args */);
    void pay();
    void displayStatus();
};

class salesmanager:public manager, public salesman
{
    public:
        salesmanager();
        void pay();
        void displayStatus();    
};
