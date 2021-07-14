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


struct DAW
{
    //amount of memory
    int amountOfMemory = 100;
    //size of memory buffer
    float sizeOfMemoryBuffer = 12.4f;
    //number of reverb plugins
    int numberOfReverbPlugins = 4;
    //amount of tracks
    int amountOfTracks = 10;
    //number of inputs
    int numberofInputs = 2;

    struct DAWProperties
    {
        bool canRecordMidi = true;
        bool canRecordAudio = true;
        float FrameRate = 29.23f;
        double bufferSize = 256.5;
        int numberOfWindow = 3;

        void multiRecord();
        void playVideo();
        void convertMidi();
    };
    
    //master music
    void masterMusic(bool masteredMusic = true, bool error = false);
    //process audio
    int processAudio(int NumberOfTracks = 24);
    //mix music
    float mixMusic(float audioLevel = 0.9f);

};

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

   
struct Airport
{
    //number of planes
    int numberOfPlanes = 10;
    //number of floor staff
    int numberOfFloorStaff = 100;
    //number of aeroplane engineers
    int numberOfAeroPlaneEngineers = 50;
    //number of runways
    int numberOfRunways = 5;
    //number of radar
    int numberOfRAdar = 1;

    //land and takeoff planes
    void landAndTakeOffPlanes(bool hasConfirmation = true);
    //centralise travel departure
    void centraliseTravelDeparture(); 
    //service travel industry
    void serviceTravelIndustry(bool notOvercapacity);

};


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


struct Farm
{
    //number of chickens
    int numberOfChickens = 20;
    //number of cows
    int numberOfCows = 5;
    //number of workers
    int numberOfWorkers = 1;
    //the amount of feed per week
    float amountOfFeedPerWeek = 33.3f;
    //the amount of milk produced
    double amountOfMilkProduced = 22.2;

    //grow veg
    void growVeg(std:: string vegType, int carrots);
    //rear animals
    void rearAnimals(bool hasChickens);
    //produce milk
    void produceMilk(int numberOfLitres = 100);

};


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
struct School
{
    //number of students
    int numberOfStudents = 100;
    //number of teachers
    int numberOfTeachers = 20; 
    //hours per week of teaching
    float hoursPerWeek = 22.3f;
    //hours per week of lunch
    double hoursOfLunch = 13.2;
    //amount of whiteboards
    int amountOfWhiteBoards = 5;


    struct SchoolStaff
    {
        int staffRoom = 1;
        int numberOfFullTime = 5;
        int numberOfPartTime = 5;
        double totalHoursAllStaff = 110;
        int StaffCarParkSpaces = 10;

        void totalBreakTime(int = 36);
        void staffStudentRatio(int = 5);
        void staffTrainer();

    };


    //educate children
    void educateChildren();
    //employ adults
    void employAdults(std::string Over21Yo);
    //play sports
    bool playSports(bool notRaining = true);

};


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
struct Wheels
{

    //wheel diameter
    int wheelDiameter = 50;
    //wheel width
    float wheelWidth = 27.4f;
    //amount of lug nuts
    int amountLugNuts = 30;
    //tyre thread depth
    double tyreThreadDepth = 20.2;
    //tyre pressure
    float tyrePressure = 15.3f;

    //carry vehicle
    void carryVehicle();
    //aid suspension
    void aidSuspension(float maxPressureSetting);
    //turn vehicle
    void turnVehicle(double SetmaxDegree);

};






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

struct Engine
{
    //engine type
    bool engineTypeDiesel = true; 
    //engine capacity
    int engineCapacity = 50;
    //amount of valves
    int amountValves = 16;
    //engine torque
    double torque = 29.3;
    //engine sound level
    float SPL = 34.5f;

    //move truck
    void moveTruck(int forward);
    //power AC
    void powerAC(int temperature);
    //power ABS
    void ABS(int ABS);

};


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
struct Seats
{
    //number of seats
    int numberSeats = 4;
    //seat width
    int seatWidth = 30;
    //seat recline angle
    float reclineAngle = 44.3f;
    //seat heating
    bool seatHeating = true;
    //seat forward movement
    int forwardMovement = 22;

    //seat driver
    void seatDriver();
    //heat passenger
    void heatPassangerSeat();
    //adjust position
    void adjustSeatPosition();

};



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
struct SteeringWheel
{
    //wheel diameter
    int wheelDiameter = 60;
    //wheel circumference
    int wheelCircumference = 10;
    //rotation amount
    int rotationAmount = 360;
    //hands free kit controls
    int handsFreeKit = 2;
    //entertainment controls
    int entertainmentControl = 1;

    //steer truck
    void steerTruck(int degrees);
    //instrument padel control
    void instrumentPadelControl();
    //hands free control 
    void handsFreeControl();

};



/*
Thing 9) fuel system
5 properties:
    1) injection pressure
    2) type
    3) capacity
    4) filter amount
    5) pump power
3 things it can do:
    1) power engine
    2) spark plugs 
    3) not freeze at 0 degrees
 */
struct FuelSystem
{
    //injection pressure
    int injectionPressure = 60;
    //type
    bool typeIsDiesel = true;
    //capacity
    double capacity = 34.3;
    //filter amount
    float filterAmount = 33.5f;
    //pump power
    int pumpPower = 23;

    //power engine
    float powerEngine(double CC);
    //spark plugs
    void sparkPlugs(int number);
    //not freeze at 0 degrees
    void freezeTemp(int whatDegree);

};

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
struct Truck
{
    //wheels
    int wheels = 4;
    //engine
    int engine = 1;
    //seats
    int seats = 4;
    //steering wheel
    int steeringWhee = 1;
    //fuel system
    int fuelSystem = 1;

    //carry people
    void maxOccupancy(int = 4);
    //tow vehicles
    void towVehcles(int maxPower = 100);
    //drive long distance
    double driveLongDistance();

};





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
