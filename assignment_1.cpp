#include<iostream>
#include<math.h>
using namespace std;

int main() {

    cout << "Starting Simulation .." << endl;
    cout << endl;

    int Iyy;
    double T, t, dt, velocity, angular_velocity, yaw;

    Iyy = 3800;
    T = 0.3;
    t = 0;
    dt = 0.01;
    yaw = 0;
    velocity = 0;
    angular_velocity = 0;

    for (int i = 0; i <= 1000; i++) {

        angular_velocity = (T * t) / Iyy;
        velocity = velocity + (angular_velocity * dt);
        yaw = yaw + (velocity * dt);

        if ( i % 100 == 0) {
            // cout << "Time: " << t << ", angular_velocity: " << angular_velocity << ", yaw: " << yaw << endl;
            cout << "Time: " << t << ", yaw: " << yaw << endl;
        }

        t += dt;
    }

    cout << endl;
    cout << "Finished Simulation" << endl;
    cout << getchar();

}
