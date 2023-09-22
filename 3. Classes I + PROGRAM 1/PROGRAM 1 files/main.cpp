#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void readData(const string &windTunnelDataFile, vector<double> &flightPathAngleList, vector<double> &coefficientLiftList);
double interpolation(double userAngle, const vector<double> &flightPathAngleList, const vector<double> &coefficientLiftList);
bool isOrdered(const vector<double> &flightPathAngleList);
void reorder(vector<double> &flightPathAngleList, vector<double> &coefficientLiftList);

int main(int argc, char *argv[]) {
    vector<double> flightPathAngleList;
    vector<double> coefficientLiftList;
    double userAngle;
    double coefficient;
    string windTunnelDataFile;
    string yesOrNo = "Yes"; // Program quits if this equals "No"
    ifstream inFS;

    // (1) Get from the command line the name of the file that contains the wind tunnel data.
    windTunnelDataFile = argv[1];

    // (2) Read wind-tunnel data into two parallel vectors, one vector stores the flight-path angle and the 
    // other stores the corresponding coefficient of lift for that angle. Both vectors should store doubles.
    readData(windTunnelDataFile, flightPathAngleList, coefficientLiftList);

    // (2B) Check if the flight-path angles are in order, ascending. And order them if they aren't.
    if (!isOrdered(flightPathAngleList)) {
        reorder(flightPathAngleList, coefficientLiftList);
    }

    // (3) Ask the user for a flight-path angle. If the angle is within the bounds of the data set, the program 
    // should then use linear interpolation (see explanation of linear interpolation below) to compute the 
    // corresponding coefficient of lift and output it.
    while (yesOrNo != "No") {
        cout << "Enter a flight-path angle: ";
        cin >> userAngle;

        coefficient = interpolation(userAngle, flightPathAngleList, coefficientLiftList);

        if (coefficient == 1) {
            cout << "The flight-path angle " << userAngle << " is not within the bounds of the data set." << endl;
        }
        else {
            cout << "Coefficient of lift given the flight-path angle, " << userAngle << ", is " << coefficient << endl;
        }

    // (4) Finally, ask the user if they want to enter another flight-path angle. Repeat steps 3 and 4 if they 
    // answer Yes, otherwise end the program if they answer No.
        cout << "Do you want to enter another flight-path angle? ";
        cin >> yesOrNo;
        cout << endl;

        if (yesOrNo == "No") {
            cout << "Thanks so much for playing my gAmE!" << endl;
            inFS.close();
        }

    }

    return 0;
}

// Passes in the name of a file and two empty vectors (double) and stores in the first vector the flight-path 
// angles (first column) and in the second vector the corresponding coefficients of lift (2nd column). If the 
// file does not open properly, this function should output an error message and then call the exit function 
// passing it an exit value of 1.
void readData(const string &windTunnelDataFile, vector<double> &flightPathAngleList, vector<double> &coefficientLiftList) {
    ifstream inFS(windTunnelDataFile);
    double angle; 
    double coefficient;

    if (!inFS.is_open()) {
      cout << "Error opening " << windTunnelDataFile << endl;
      exit(1);
   }

   while (inFS >> angle >> coefficient) {
       flightPathAngleList.push_back(angle);
       coefficientLiftList.push_back(coefficient);
   }

}

// Passes in the requested flight-path angle along with the 2 vectors of data (flight-path angles and 
// corresponding coefficients of lift) and returns the corresponding coefficient of lift. 
double interpolation(double userAngle, const vector<double> &flightPathAngleList, const vector<double> &coefficientLiftList) {
    unsigned int i;
    unsigned int j;

    if (userAngle >= flightPathAngleList[0]){
       for (i = 0; i < flightPathAngleList.size(); ++i) {
           // Check the lower bound for a match.
           if (userAngle <= flightPathAngleList[i]) {
               // If a match is found.
               if (userAngle == flightPathAngleList[i]) {
                   return coefficientLiftList[i];
               }
                else {
                    for (j = i; j < flightPathAngleList.size(); ++j) {
                        if (userAngle <= flightPathAngleList[j]) {
                            // If there is a match in the upperbound.
                            if (userAngle == flightPathAngleList[j]) {
                                return coefficientLiftList[j];
                            }
                            else { // Use that one really long, weird formula.
                                return coefficientLiftList[i - 1] + ((userAngle - flightPathAngleList[i - 1]) / (flightPathAngleList[j] - flightPathAngleList[i - 1]))*(coefficientLiftList[j] - coefficientLiftList[i - 1]);
                            }
                        }
                    }
                }
           }
       }
       return 1;
    }
                        
    return 1;
}

// Passes in the vector of flight-path angles and returns true if it stores the angles are in ascending order, 
// otherwise returns false.
bool isOrdered(const vector<double> &flightPathAngleList) {
    unsigned int i;
    unsigned int j;

    if (flightPathAngleList.size() == 0 || flightPathAngleList.size() == 1){
        return true;
    }

    if (flightPathAngleList.size() >= 2){
        for (i = 0; i < flightPathAngleList.size() - 1; ++i) {
            for (j = i + 1; j < flightPathAngleList.size(); ++j) {
                if (flightPathAngleList.at(i) == flightPathAngleList.at(j)) {
                    return true;
                }
                else if (flightPathAngleList.at(i) > flightPathAngleList.at(j)) {
                    return false;
                }
            }
        }
    }

    return true;
}

// Passes in both vectors of data and then reorders the data so that the flight-path angles are in ascending order 
// while maintaining the correspondence between the flight-path angles and their corresponding coefficients of lift.
void reorder(vector<double> &flightPathAngleList, vector<double> &coefficientLiftList) {
    double tempAngle;
    double tempCoefficient;
    unsigned int i;
    unsigned int j;

    for (i = 0; i < flightPathAngleList.size(); ++i) {              // This function was a pain >:(
       for (j = i + 1; j < flightPathAngleList.size(); ++j) {
           if (flightPathAngleList[i] > flightPathAngleList[j]) {
               tempAngle = flightPathAngleList[i];
               tempCoefficient = coefficientLiftList[i];
               flightPathAngleList[i] = flightPathAngleList[j];
               coefficientLiftList[i] = coefficientLiftList[j];
               flightPathAngleList[j] = tempAngle;
               coefficientLiftList[j] = tempCoefficient;
           }
       }
   }

}