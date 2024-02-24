#include <iostream>
#include <string>
using namespace std;

class Pet
{
public:
    string healthStatus;
    int hungerLevel;
    int happinessLevel;
    string specialSkills[5]; // Array for special skills

    void updateHappiness()
    {
        if (hungerLevel == 0)
        {
            if (happinessLevel > 0 && happinessLevel < 10)
            {
                happinessLevel -= 1;
            }
        }
        else if (hungerLevel == 1)
        {
            if (happinessLevel > 0 && happinessLevel < 10)
            {
                happinessLevel += 1;
            }
        }
    }

    void updateHealth()
    {
        if (happinessLevel < 5)
        {
            healthStatus = "sad";
        }
        else if (happinessLevel < 8)
        {
            healthStatus = "healthy";
        }
        else
        {
            healthStatus = "very happy";
        }
    }

    void updateHunger()
    {
        if (happinessLevel < 5)
        {
            hungerLevel += 1;
        }
        else if (happinessLevel > 5)
        {
            hungerLevel -= 1;
        }
    }

    void displayPetDetails()
    {
        cout << "PET DETAILS" << endl;
        cout << "Health Status: " << healthStatus << endl;
        cout << "Hunger Level: " << hungerLevel << endl;
        cout << "Happiness Level: " << happinessLevel << endl;
        cout << "Special Skills: ";
        for (int i = 0; i < 5; i++)
        {
            if (!specialSkills[i].empty())
            {
                cout << specialSkills[i];
                if (i != 4 && !specialSkills[i + 1].empty())
                {
                    cout << ", ";
                }
            }
        }
        cout << endl;
    }
};

class Adopter
{
public:
    string adopterName;
    string adopterMobileNum;
    Pet adoptedPetRecords[5];
    int numOfAdoptedPets = 0;
    void adoptPet(Pet pet)
    {
        if (numOfAdoptedPets < 5)
        {
            adoptedPetRecords[numOfAdoptedPets] = pet;
            numOfAdoptedPets++;
            cout << "Pet adopted successfully!" << endl;
        }
        else
        {
            cout << "Sorry, you cannot adopt more pets." << endl;
        }
    }

    void returnPet(int index)
    {
        if (index >= 0 && index < numOfAdoptedPets)
        {
            for (int i = index; i < numOfAdoptedPets - 1; i++)
            {
                adoptedPetRecords[i] = adoptedPetRecords[i + 1];
            }
            numOfAdoptedPets--;
            cout << "Pet returned successfully!" << endl;
        }
        else
        {
            cout << "Invalid index." << endl;
        }
    }

    void displayAdoptedPets()
    {
        cout << "ADOPTED PET RECORDS" << endl;
        for (int i = 0; i < numOfAdoptedPets; i++)
        {
            cout << "Pet " << i + 1 << ":\n";
            adoptedPetRecords[i].displayPetDetails();
        }
    }
};

int main()
{
    cout << "Programmer :  Riya Bhart " << endl
         << "Roll ID : 23k-0063" << endl
         << endl;
    cout << "------Virtual Pet Adoption System----" << endl;

    Pet myPet;
    cout << "Enter health status: ";
    cin >> myPet.healthStatus;

    cout << "Enter hunger level (0-10): ";
    cin >> myPet.hungerLevel;
    while (myPet.hungerLevel < 0 || myPet.hungerLevel > 10)
    {
        cout << "Invalid input. Enter hunger level (0-10): ";
        cin >> myPet.hungerLevel;
    }

    cout << "Enter happiness level (0-10): ";
    cin >> myPet.happinessLevel;
    while (myPet.happinessLevel < 0 || myPet.happinessLevel > 10)
    {
        cout << "Invalid input. Enter happiness level (0-10): ";
        cin >> myPet.happinessLevel;
    }

    cout << "Enter special skills (up to 5, separated by spaces): ";
    for (int i = 0; i < 5; i++)
    {
        cin >> myPet.specialSkills[i];
    }

    myPet.updateHappiness();
    myPet.updateHealth();
    myPet.updateHunger();
    myPet.displayPetDetails();

    Adopter adopter;
    cout << "Enter Adopter Name: " << endl;
    cin >> adopter.adopterName;
    cout << "Enter Adopter's mobile Number: " << endl;
    cin >> adopter.adopterMobileNum;
    adopter.adoptPet(myPet);

    adopter.displayAdoptedPets();

    return 0;
}
