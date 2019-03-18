#pragma once
int f(const int&);
template <typename T> T g(const T&);/*§func2dec§*/
template <typename T> T g(const T& x) {
	return x*x; 
}
