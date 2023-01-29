#include <iostream>
#include <cmath>
#include <random>

double CallOptionPrice(double S, double K, double r, double sigma, double T) {
    double S_T = S * exp((r - 0.5 * sigma * sigma) * T + sigma * sqrt(T) * randn());
    return std::max(S_T - K, 0.0);
}

int main() {
    double S = 100; // Spot price of the underlying asset
    double K = 90; // Strike price of the call option
    double r = 0.05; // Risk-free interest rate
    double sigma = 0.2; // Volatility of the underlying asset
    double T = 1; // Time to expiration in years
    int trials = 100000; // Number of trials

    double price_sum = 0;
    for (int i = 0; i < trials; i++) {
        price_sum += CallOptionPrice(S, K, r, sigma, T);
    }
    double price = price_sum / trials * exp(-r * T);
    std::cout << "Call option price: " << price << std::endl;
    return 0;
}
