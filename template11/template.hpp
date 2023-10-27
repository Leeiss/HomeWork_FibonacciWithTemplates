#pragma once

template <int T>
class Fibonacci {
public:
    static constexpr int value = Fibonacci<T - 1>::value + Fibonacci<T - 2>::value;
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

template <int T>
constexpr int fibonacci(){
    return fibonacci<T-1>() + fibonacci<T-2>();
}
template <>
constexpr int fibonacci<0>(){
    return 0;
}
template <>
constexpr int fibonacci<1>(){
    return 1;
}


