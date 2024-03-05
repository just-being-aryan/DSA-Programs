#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate AQI for a given pollutant
int calculateAQI(double concentration, const double breakpoints[], const int AQI[]) {
    int i = 0;
    while (concentration > breakpoints[i + 1]) {
        i++;
    }

    int AQI_low = AQI[i];
    int AQI_high = AQI[i + 1];
    double concentration_low = breakpoints[i];
    double concentration_high = breakpoints[i + 1];

    int calculated_AQI = static_cast<int>(
        ((AQI_high - AQI_low) / (concentration_high - concentration_low)) * (concentration - concentration_low) + AQI_low);

    return calculated_AQI;
}

int main() {
    // PM2.5 AQI breakpoints and corresponding AQI values
    const double pm25_breakpoints[] = {0.0, 12.0, 35.4, 55.4, 150.4, 250.4, 500.4};
    const int pm25_AQI[] = {0, 51, 101, 151, 201, 301, 401, 501};

    // PM10 AQI breakpoints and corresponding AQI values
    const double pm10_breakpoints[] = {0.0, 54.0, 154.0, 254.0, 354.0, 424.0, 504.0};
    const int pm10_AQI[] = {0, 51, 101, 151, 201, 301, 401, 501};

    double pm25_concentration, pm10_concentration;

    // Get pollutant concentrations from user input
    cout << "Enter PM2.5 concentration (µg/m³): ";
    cin >> pm25_concentration;

    cout << "Enter PM10 concentration (µg/m³): ";
    cin >> pm10_concentration;

    // Calculate AQI for PM2.5 and PM10
    int aqi_pm25 = calculateAQI(pm25_concentration, pm25_breakpoints, pm25_AQI);
    int aqi_pm10 = calculateAQI(pm10_concentration, pm10_breakpoints, pm10_AQI);

    // Overall AQI is the highest of the individual AQI values
    int overall_AQI = max(aqi_pm25, aqi_pm10);

    cout << "Overall Air Quality Index (AQI): " << overall_AQI << endl;

    return 0;
}
