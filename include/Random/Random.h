#ifndef RANDOM_H
#define RANDOM_H

#include <cstddef>
#include <random>

class Random {
	static std::random_device& Seed();
	static std::mt19937& Gen32();
	static std::mt19937_64& Gen64();
public:
	//static std::int8_t Uniform(std::int8_t a, std::int8_t b);
	static std::int16_t Uniform(std::int16_t a, std::int16_t b);
	static std::int32_t Uniform(std::int32_t a, std::int32_t b);
	static std::int64_t Uniform(std::int64_t a, std::int64_t b);
	//static std::uint8_t Uniform(std::uint8_t a, std::uint8_t b);
	static std::uint16_t Uniform(std::uint16_t a, std::uint16_t b);
	static std::uint32_t Uniform(std::uint32_t a, std::uint32_t b);
	static std::uint64_t Uniform(std::uint64_t a, std::uint64_t b);
	static float Uniform(float a, float b);
	static double Uniform(double a, double b);
	static bool Bernoulli(float p);
	static bool Bernoulli(double p);
};//class Random

#endif //RANDOM_H