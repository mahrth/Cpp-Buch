struct A {
	int m,n;/*§A_mn§*/
	void f() const {}
};

int main() {
	const A a1 = {1,2};
	A a2 = {5,6};
	a1.f();/*§A_f1§*/
	a2.f();/*§A_f2§*/
}