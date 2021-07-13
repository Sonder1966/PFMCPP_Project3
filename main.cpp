/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};




/*
Thing 1) DAW
5 properties:
    1) amount of memory
    2) size of memory buffer
    3) number of reverb plugins
    4) amount of tracks
    5) number of inputs

3 things it can do:
    1) master music
    2) process audio
    3) mix music
 */

/*
Thing 2) airport
5 properties:
    1) number of planes
    2) number of floor staff
    3) number of aeroplane engineers
    4) number of runways
    5) number of radar

3 things it can do:
    1) land and takeoff planes
    2) centralise travel departure
    3) service travel industry
 */

/*
Thing 3) farm
5 properties:
    1) number of chickens
    2) number of cows
    3) number of workers
    4) the amount of feed per week
    5) the amount of milk produced

3 things it can do:
    1) grow veg
    2) rear animals
    3) produce milk
 */

/*
Thing 4) school
5 properties:
    1) number of students
    2) number of teachers
    3) hours per week of teaching
    4) hours per week of lunch
    5) amount of whiteboards

3 things it can do:
    1) educate children
    2) employ adults
    3) play sports
 */


/*
Thing 5) wheels
5 properties:
    1) wheel diameter
    2) wheel width
    3) amount of lug nuts
    4) tyre thread depth
    5) tyre pressure
3 things it can do:
    1) carry vehicle
    2) aid suspension
    3) turn vehicle
 */

/*
Thing 6) engine
5 properties:
    1) engine type
    2) engine capacity
    3) amount of valves
    4) engine torque
    5) engine sound level
3 things it can do:
    1) move truck
    2) power AC
    3) power ABS
 */

/*
Thing 7) seats
5 properties:
    1) number of seats
    2) seat width
    3) seat recline angle
    4) seat heating
    5) seat forward movement
3 things it can do:
    1) seat driver
    2) heat passenger
    3) adjust position
 */

/*
Thing 8) steering wheel
5 properties:
    1) wheel diameter
    2) wheel circumference
    3) rotation amount
    4) hands free kit controls
    5) entertainment controls
3 things it can do:
    1) steer truck
    2) instrument padel control
    3) hands free control
 */

/*
Thing 9) fuel system
5 properties:
    1) fuel injection pressure
    2) fuel type
    3) fuel capacity
    4) fuel filter amount
    5) fuel pump power
3 things it can do:
    1) power engine
    2) spark plugs 
    3) not freeze at 0 degrees
 */


/*
Thing 10) truck
5 properties:
    1)wheels
    2)engine
    3)seats
    4)steering wheel
    5)fuel system
3 things it can do:
    1)carry people
    2)tow vehicles
    3)drive long distance
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
