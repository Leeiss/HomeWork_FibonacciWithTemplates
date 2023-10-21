#pragma once

template <int N>
class Fibonacci {
public:
    static constexpr int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

template <>
class Fibonacci<1> {
public:
    static constexpr int value = 1;
};

template <>
class Fibonacci<0> {
public:
    static constexpr int value = 0;
};

template <int N>
constexpr int fibonacci() {
    return Fibonacci<N>::value;
}


