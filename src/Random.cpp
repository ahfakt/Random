#include "Random.h"

std::random_device& Random::Seed() { static std::random_device device; return device; }
std::mt19937& Random::Gen32() { static std::mt19937 gen32(Random::Seed()()); return gen32; }
std::mt19937_64& Random::Gen64() { static std::mt19937_64 gen64(Random::Seed()()); return gen64; }
//std::int8_t Random::Uniform(std::int8_t a, std::int8_t b) { return std::uniform_int_distribution<std::int8_t>(a, b)(Random::Gen32()); }
std::int16_t Random::Uniform(std::int16_t a, std::int16_t b) { return std::uniform_int_distribution<std::int16_t>(a, b)(Random::Gen32()); }
std::int32_t Random::Uniform(std::int32_t a, std::int32_t b) { return std::uniform_int_distribution<std::int32_t>(a, b)(Random::Gen32()); }
std::int64_t Random::Uniform(std::int64_t a, std::int64_t b) { return std::uniform_int_distribution<std::int64_t>(a, b)(Random::Gen64()); }
//std::uint8_t Random::Uniform(std::uint8_t a, std::uint8_t b) { return std::uniform_int_distribution<std::uint8_t>(a, b)(Random::Gen32()); }
std::uint16_t Random::Uniform(std::uint16_t a, std::uint16_t b) { return std::uniform_int_distribution<std::uint16_t>(a, b)(Random::Gen32()); }
std::uint32_t Random::Uniform(std::uint32_t a, std::uint32_t b) { return std::uniform_int_distribution<std::uint32_t>(a, b)(Random::Gen32()); }
std::uint64_t Random::Uniform(std::uint64_t a, std::uint64_t b) { return std::uniform_int_distribution<std::uint64_t>(a, b)(Random::Gen64()); }
float Random::Uniform(float a, float b) { return std::uniform_real_distribution<float>(a, b)(Random::Gen32()); }
double Random::Uniform(double a, double b) { return std::uniform_real_distribution<double>(a, b)(Random::Gen64()); }
bool Random::Bernoulli(float p) { return std::bernoulli_distribution(p)(Random::Gen32()); }
bool Random::Bernoulli(double p) { return std::bernoulli_distribution(p)(Random::Gen64()); }