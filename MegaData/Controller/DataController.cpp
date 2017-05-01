//
//  DataController.cpp
//  MegaData
//
//  Created by Hachtel, Matthew on 2/6/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#include "DataController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"
#include "../Model/Array.hpp"
#include "../Model/List.hpp"


using namespace std;

DataController :: DataController()
{
    wordNode = Node<string>();
    numberNode = Node<int>();
}

void DataController :: testNodes()
{
    cout << "The contents of the node<String>" << endl;
    cout << wordNode.getNodePointer() << endl;
    cout << "Here is the node<int>" << endl;
    cout << numberNode.getNodePointer() << endl;
}
void DataController :: start()
{
    cout << "Starting the project" << endl;
    testNodes();
    cout << "Swtiching to the array testing" << endl;
    testIntArray();
    cout << "Switching to advanced feature testing" << endl;
    testAdvancedFeatures();
    testLists();
    cout << "Finish testing" << endl;
}

void DataController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for (int index = 0; index < 3 ; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
    cout << "Testing input" << endl;
    
    for(int index = 0; index < 3; index++)
    {
        temp.setAtIndex(index, index);
    }
    
    for (int index = 0; index < temp.getSize() ; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
}

void DataController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    
    if(showDestructor < 1)
    {
        Array<string> words = Array<string>(5);
        cout << "There should be messages about destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the last spot");
    Array<string> copiedWords = Array<string>(words);
}

void DataController :: testLists()
{
    List<string> sample;
    sample.addFront("am");
    sample.addEnd("cool");
    sample.addFront("I");
    cout << "This should go I, am, cool" << endl;
    
    for(int index = 0; index < sample.getSize(); index++)
    {
        cout << sample.getFromIndex(index) << endl;
    }
    
    cout << "Size should read 3 and is " << sample.getSize() << endl;
}
void DataController :: testListTiming()
{
    DoubleList<int> timingList;
    Timer totalTimer;
    totalTimer.startTimer();
    for(int index = 0; index <10000; index++)
    {
        timingList.add(rand());
    }
    
    long slowTime [1000];
    long fastTime [1000];
    double averageSlow = 0.00, averageFast = 0.00;
    Timer doubleTimer;
    
    for(int index = 0; index < 1000; index++)
    {
        int randomIndex = rand() % 10000;
        doubleTimer.startTimer();
        timingList.getFromIndex(randomIndex);
        doubleTimer.stopTimer();
        slowTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        doubleTimer.startTimer();
        timingList.getFromIndexFast(randomIndex);
        doubleTimer.stopTimer();
        fastTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        averageSlow += slowTime[index];
        averageFast += fastTime[index];
    }
    
    averageSlow = averageSlow/1000.00;
    averageFast = averageFast/1000.00;
    totalTimer.stopTimer();
    
    cout << "The average speed for the getFromIndex method was: " << averageSlow << " microseconds." << endl;
    cout << "The average speed for the getFromIndexFast method was: " << averageFast << " microseconds." << endl;
}

void DataController :: testCircularList()
{
    CircularList<int> circles;
    for(int index = 0; index < 10; index++)
    {
        circles.add(index);
        cout << "the size of circles is " << circles.getSize() << ", and should be" << (index +1) << endl;
    }
    

    cout << "The" << endl;
}

void DataController :: testDoubleList()
{
    
}




void DataController :: testBinarySearchTreeOperations()

{
    
    BinarySearchTree<int> number;
    
    number.insert(9843);
    
    number.insert(10);
    
    number.insert(43);
    
    number.insert(-123);
    
    number.insert(23465);
    
    number.insert(10); // won't go in
    
    number.insert(43243);
    
    number.insert(-45677654);
    
    number.insert(92165);
    
    
    
    cout << "Size should be 8 and is: " << number.getSize() << endl;
    
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    number.inOrderTraversal();
    
    
    
    cout << "Height should be 4 and is: " << number.getHeight() << endl;
    
    cout << "Balanced should be false || 0 and is: " << number.isBalanced() << endl;
    
}

void DataController :: testBinarySearchData()

{
    
    DataController fileData;
    
    Timer treeTimer;
    
    treeTimer.startTimer();
    
    BinarySearchTree<fileData> crimeTree = fileData.readCrimeDataToBinarySearchTree("/Users/cody.henrichsen/Documents/crimes.csv");
    
    treeTimer.stopTimer();
    
    
    
    int count = crimeTree.getSize();
    
    int height = crimeTree.getHeight();
    
    bool complete = crimeTree.isComplete();
    
    bool balanced = crimeTree.isBalanced();
    
    
    
    cout << "The count of the tree is: " << count << ", the height is " << height << ".\n The tree's balanced status is " << balanced << ", and its complete status is " << complete << endl;
    
    cout << "The time to read in the tree was: " << endl;
    
    treeTimer.displayTimerInformation();
    
    
    
}

void DataController :: testAVLTreeOperations()

{
    
    AVLTree<int> isnumber;
    
    isnumber.insert(9843);
    
    isnumber.insert(10);
    
    isnumber.insert(43);
    
    isnumber.insert(-123);
    
    isnumber.insert(23465);
    
    isnumber.insert(10); // won't go in
    
    isnumber.insert(43243);
    
    isnumber.insert(-45677654);
    
    isnumber.insert(92165);
    
    
    
    cout << "Size should be 8 and is: " << isnumber.getSize() << endl;
    
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    isnumber.inOrderTraversal();
    
    
    
    cout << "Height should be 4 and is: " << isnumber.getHeight() << endl;
    
    cout << "Balanced should be true || 1 and is: " << isnumber.isBalanced() << endl;
    
}

void DataController :: testAVLData()

{
    
    DataController fileData;
    
    Timer treeTimer;
    
    treeTimer.startTimer();
    
    AVLTree<CrimeData> crimeTree = fileData.readCrimeDataToAVLTree("/Users/cody.henrichsen/Documents/crimes.csv");
    
    treeTimer.stopTimer();
    
    
    
    int count = crimeTree.getSize();
    
    int height = crimeTree.getHeight();
    
    bool complete = crimeTree.isComplete();
    
    bool balanced = crimeTree.isBalanced();
    
    
    
    cout << "The count of the tree is: " << count << ", the height is " << height << ".\n The tree's balanced status is " << balanced << ", and its complete status is " << complete << endl;
    
    cout << "The time to read in the tree was: " << endl;
    
    treeTimer.displayTimerInformation();
    
}


BinarySearchTree<CrimeData> DataController :: readCrimeDataToBinarySearchTree(string filename)

{
    
    BinarySearchTree<CrimeData> crimeData;
    
    
    
    string currentCSVLine;
    
    int rowCount = 0;
    
    
    
    ifstream dataFile(filename);
    
    
    
    if(dataFile.is_open())
        
    {
        
        while(!dataFile.eof())
            
        {
            
            getline(dataFile, currentCSVLine, '\r');
            
            
            
            //Exclude first row headers
            
            if (rowCount != 0)
                
            {
                
                CrimeData rowData(currentCSVLine);
                
                crimeData.insert(rowData);
                
            }
            
            rowCount++;
            
        }
        
        dataFile.close();
        
    }
    
    else
        
    {
        
        cerr << "NO FILE" << endl;
        
    }
    
    
    
    
    
    return crimeData;
    
}

CrimeData :: CrimeData(string currentCSVLine)

{
    
    stringstream parseCSV(currentCSVLine);
    
    
    
    string department, tempPopulation, tempProperty, tempBurglary, tempLarceny, tempMotor, tempViolent, tempAssault, tempMurder, tempRape, tempRobbery, state, tempAllProperty, tempAllBurglary, tempAllLarceny, tempAllMotor, tempAllViolent, tempAllAssault, tempAllMurder, tempAllRape, tempAllRobbery, tempYear;
    
    
    
    getline(parseCSV, department, ',');
    
    getline(parseCSV, tempPopulation, ',');
    
    getline(parseCSV, tempProperty, ',');
    
    getline(parseCSV, tempBurglary, ',');
    
    getline(parseCSV, tempLarceny, ',');
    
    getline(parseCSV, tempMotor, ',');
    
    getline(parseCSV, tempViolent, ',');
    
    getline(parseCSV, tempAssault, ',');
    
    getline(parseCSV, tempMurder, ',');
    
    getline(parseCSV, tempRape, ',');
    
    getline(parseCSV, tempRobbery, ',');
    
    getline(parseCSV, state, ',');
    
    getline(parseCSV, tempAllProperty, ',');
    
    getline(parseCSV, tempAllBurglary, ',');
    
    getline(parseCSV, tempAllLarceny, ',');
    
    getline(parseCSV, tempAllMotor, ',');
    
    getline(parseCSV, tempAllViolent, ',');
    
    getline(parseCSV, tempAllAssault, ',');
    
    getline(parseCSV, tempAllMurder, ',');
    
    getline(parseCSV, tempAllRape, ',');
    
    getline(parseCSV, tempAllRobbery, ',');
    
    getline(parseCSV, tempYear, ',');
    
    
    
    this->setDepartment(department);
    
    this->setPopulation(stoi(tempPopulation));
    
    this->setAllPropertyRates(stod(tempProperty));
    
    this->setBurglaryRates(stod(tempBurglary));
    
    this->setLarcenyRates(stod(tempLarceny));
    
    this->setMotorRates(stod(tempMotor));
    
    this->setAllViolentRates(stod(tempViolent));
    
    this->setAssaultRates(stod(tempAssault));
    
    this->setMurderRates(stod(tempMurder));
    
    this->setRapeRates(stod(tempRape));
    
    this->setRobberyRates(stod(tempRobbery));
    
    this->setState(state);
    
    this->setAllPropertyCrime(stoi(tempAllProperty));
    
    this->setAllBurglary(stoi(tempAllBurglary));
    
    this->setAllLarceny(stoi(tempAllLarceny));
    
    this->setAllMotor(stoi(tempAllMotor));
    
    this->setAllViolent(stoi(tempAllViolent));
    
    this->setAllAssault(stoi(tempAllAssault));
    
    this->setAllMurder(stoi(tempAllMurder));
    
    this->setAllRape(stoi(tempAllRape));
    
    this->setAllRobbery(stoi(tempAllRobbery));
    
    this->setYear(stoi(tempYear));
    
}

CrimeData stream operator overload

CrimeData.hpp

friend ostream & operator << (ostream &outputStream, const CrimeData & outputData);

CrimeData.cpp

ostream & operator << (ostream &outputStream, const CrimeData & outputData)

{
    
    return outputStream << outputData.getDepartment() << "had " << outputData.getAllViolentRates() << " in year: " << outputData.getYear();
    
}











