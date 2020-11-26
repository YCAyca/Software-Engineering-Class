#include <iostream>

using namespace std;

enum scale {ounces, kilograms};

class ZooAnimal  
{
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal *mother;
public:
    void Create (char*, int, int, int); // create function
    void Destroy (); // destroy function 
    void changeWeight (int pounds);
    inline void changeWeightDate (int today){ this->weightDate = today; }
    char* reptName ();
    int reptWeight ();
    void reptWeight (scale which);
    inline int reptWeightDate ();
    int daysSinceLastWeighed (int today);
    void isMotherOf (ZooAnimal& mother) {this->mother=&mother;}
};


void ZooAnimal::Create(char * n, int cageno, int wD, int w)
{
    this->name = n;
    this->cageNumber = cageno;
    this->weightDate = wD;
    this->weight = w;
}

inline int ZooAnimal::reptWeightDate() 
{  
    return this->weightDate; 
} 

char* ZooAnimal::reptName ()
{
    return name;
}

int main()
{
    ZooAnimal child_elephant, mother_elephant;
    child_elephant.Create("joe", 1001, 123, 50);
    mother_elephant.Create("ann", 1502, 100, 180);
    child_elephant.isMotherOf(mother_elephant);
    cout << "joe's weightDate : " << child_elephant.reptWeightDate() << endl;
    cout << "the mother of joe's name is:" << mother_elephant.reptName() << endl;
    
}
