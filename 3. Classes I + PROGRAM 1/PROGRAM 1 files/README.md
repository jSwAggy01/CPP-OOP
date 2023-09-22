# Interpolating Lift Coefficients for Flight Path Angles

## Purpose
This program is a tool for interpolating coefficient lift values based on user-provided flight-path angles. It assumes the input data is properly formatted and ordered.

## Program Functionality

- Reading Data: It reads data from a file (specified as a command-line argument) into two parallel vectors:
	- flightPathAngleList: Stores flight-path angles (doubles).
	- coefficientLiftList: Stores corresponding coefficients of lift (doubles).

- Data Sorting: It checks if the flight-path angles are in ascending order. If they are not, it sorts both vectors, ensuring that the correspondence between flight-path angles and coefficients of lift is maintained.
- Interpolation: It repeatedly asks the user for a flight-path angle and performs linear interpolation to compute the corresponding coefficient of lift. If the entered angle is within the bounds of the data set, it calculates the coefficient of lift using linear interpolation.
- User Interaction: After each interpolation, the program asks the user if they want to enter another flight-path angle. The loop continues until the user chooses to exit.

## Some other functions
- readData: Reads data from a file, populating the two vectors with flight-path angles and coefficients of lift.
- interpolation: Takes a user-entered angle and performs linear interpolation using the provided vectors of flight-path angles and coefficients of lift.
- isOrdered: Checks if the flight-path angles are in ascending order.
- reorder: If the flight-path angles are not in ascending order, this function sorts both vectors to ensure they are in order while preserving the correspondence between angle and coefficient.

## Usage

To compile and run the program:

>	g++ main.cpp -o wind_tunnel_interpolator

## Sample Output
```c
$ ./wind_tunnel_interpolator tunnel1.dat
Enter a flight-path angle: 10
Coefficient of lift given the flight-path angle, 10, is 0.792
Do you want to enter another flight-path angle? Yes

Enter a flight-path angle: 20
Coefficient of lift given the flight-path angle, 20, is 1.099
Do you want to enter another flight-path angle? Yes

Enter a flight-path angle: 30
The flight-path angle 30 is not within the bounds of the data set.
Do you want to enter another flight-path angle? No

Thanks so much for playing my gAmE!

```