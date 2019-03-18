template <typename T> T quadrat(const T& x) 
{
	return x * x;
}

int main()
{
	quadrat<int>(7); 
	quadrat<double>(9); 
}
