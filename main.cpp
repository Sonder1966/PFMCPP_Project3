 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Person 
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    void run(int howFast, bool startWithLeftFoot);

    struct Foot
    {
        int quickness;
        void stepForward(int stepLength)
        {
            quickness = stepLength;
        }  
        int stepSize()
        {
            return quickness;
        }
    };

    Foot leftFoot;
    Foot rightFoot;
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot)
    {
        leftFoot.stepForward(howFast+2);
        rightFoot.stepForward(howFast);
    }
    else
    {
        rightFoot.stepForward(howFast);
        leftFoot.stepForward(howFast);
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
}





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */



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
    
    int amountOfMemory = 100;
    float sizeOfMemoryBuffer = 12.4f;
    int numberOfReverbPlugins = 4;
    int amountOfTracks = 10;
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
    
    
    void masterMusic(bool masteredMusic = true);
    void processAudio(int NumberOfTracks = 24);
    void mixMusic(float audioLevel = 0.9f);

};

void DAW::masterMusic(bool masteredMusic)
{
    if(numberofInputs == 2)
    masteredMusic = true;
}

void DAW::processAudio(int numberOfTracks)
{  
    numberOfTracks = 60;  
}


void DAW::mixMusic(float audioLevel)
{
    audioLevel = 99.9f;
}

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
    
    int numberOfPlanes = 10;
    int numberOfFloorStaff = 100;
    int numberOfAeroPlaneEngineers = 50;
    int numberOfRunways = 5;
    int numberOfRAdar = 1;

    void landAndTakeOffPlanes(bool hasConfirmation = true);
    void centraliseTravelDeparture(bool departure = true); 
    void serviceTravelIndustry(bool notOverCapacity);

};

void Airport::landAndTakeOffPlanes(bool hasConfirmation)
{
    (hasConfirmation=true);
}

void Airport::centraliseTravelDeparture(bool departure)
{
    (departure = true);
}

void Airport::serviceTravelIndustry(bool notOverCapacity) 
{
    (notOverCapacity = true);
}   
    



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
    
    int numberOfChickens = 20;
    int numberOfCows = 5;
    int numberOfWorkers = 1;
    float amountOfFeedPerWeek = 33.3f;
    double amountOfMilkProduced = 22.2;

    
    void growVeg(std:: string vegType, bool carrots);
    void rearAnimals(bool hasChickens);
    void produceMilk(bool amountOfMilk);
};

void Farm::growVeg(std:: string vegType, bool carrots)
{
    (vegType = carrots);
}

void Farm::rearAnimals(bool hasChickens)
{
    hasChickens = true;
}

void Farm::produceMilk(bool amountOfMilk)
{
   (amountOfMilk = true);
}



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
    
    int numberOfStudents = 100;
    int numberOfTeachers = 20; 
    float hoursPerWeek = 22.3f;
    double hoursOfLunch = 13.2;
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

    void educateChildren(bool amountChildren);
    void employAdults(int Over21Yo);
    void playSports(bool notRaining);

};

void School::educateChildren(bool amountChildren)
{
    amountChildren = true;    
}

void School::employAdults(int Over21Yo)
{
    if (Over21Yo > 21)
    {
        Over21Yo = 22;
    }  
}

void School::playSports(bool notRaining)
{
    notRaining = true; 
}


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
    int wheelDiameter = 50;
    float wheelWidth = 27.4f;
    int amountLugNuts = 30;
    double tyreThreadDepth = 20.2;
    float tyrePressure = 15.3f;

    bool carryVehicle(int numberOfWheels);
    bool aidSuspension(float maxPressureSetting);
    void turnVehicle(double SetmaxDegree);

};

bool Wheels::carryVehicle(int numberOfWheels)
{
  if(numberOfWheels >=4)
    return true;
    return false;
}

bool Wheels::aidSuspension(float maxPressureSetting)
{
    if(tyrePressure - maxPressureSetting <=50)
    return true;
    return false;
}

void Wheels::turnVehicle(double setmaxDegree)
{
 setmaxDegree = 24;
} 


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
    
    bool engineTypeDiesel = true; 
    int engineCapacity = 50;
    int amountValves = 16;
    double torque = 29.3;
    float SPL = 34.5f;


    void moveTruck(int forward);
    void powerAC(int temperature);
    void ABS(int ABS);

};

void Engine::moveTruck(int forward)
{
    if(torque > forward)
    torque += forward;
}

void Engine::powerAC(int temperature)
{
    temperature += 100;
}

void Engine::ABS (int ABS)
{
    ABS *=2;
}



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
    
    int numberSeats = 4;
    int seatWidth = 30;
    float reclineAngle = 44.3f;
    bool seatHeating = true;
    int forwardMovement = 22;


    void seatDriver(bool numberOfDrivers);
    void heatPassangerSeat(int temperature);
    void adjustSeatPosition(bool degree);
};

void Seats::seatDriver(bool numberOfDrivers)
    {
    numberOfDrivers = true;
    }

void Seats::heatPassangerSeat(int temperature)
    {
    temperature = 38;
    }

void Seats::adjustSeatPosition(bool degree)
    {
    degree = true;  
    }
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
    
    int wheelDiameter = 60;
    int wheelCircumference = 10;
    int rotationAmount = 360;
    int handsFreeKit = 2;
    int entertainmentControl = 1;

    
    void steerTruck(int degrees);
    void instrumentPadelControl(bool padelControl);
    void handsFreeControl(bool remote);

};

void SteeringWheel::steerTruck(int degrees)
{
    degrees = 90;
}

void SteeringWheel::instrumentPadelControl(bool padelControl)
{
padelControl =true;
}

void SteeringWheel::handsFreeControl( bool remote)
{
remote = true;
}

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
    
    int injectionPressure = 60;
    bool typeIsDiesel = true;
    double capacity = 34.3;
    float filterAmount = 33.5f;
    int pumpPower = 23;

    
    void powerEngine(double CC);
    void sparkPlugs(int number);
    void freezeTemp(int whatDegree);

};

 void FuelSystem::powerEngine(double CC)
{
    std::cout << CC << std::endl;
}

void FuelSystem::sparkPlugs(int number)
{
    number = 10;
}

void FuelSystem::freezeTemp(int whatDegree)
{
    pumpPower = whatDegree;
}





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
    
    int wheels = 4;
    int engine = 1;
    int seats = 4;
    int steeringWhee = 1;
    int fuelSystem = 1;

    
    void maxOccupancy(int = 4);
    void towVehcles(int maxPower = 100);
    void driveLongDistance(double distance);

};

void Truck::maxOccupancy(int)
{
    int potentialOccupy = 100;
        std::cout << potentialOccupy << std::endl;
}

void Truck::towVehcles(int maxPower)
{
    if (maxPower > 100)
        maxPower = 200;
}

void Truck::driveLongDistance(double distance)
{
    distance = 10;
}

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
