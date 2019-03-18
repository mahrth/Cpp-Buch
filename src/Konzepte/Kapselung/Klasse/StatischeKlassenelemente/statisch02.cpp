struct A {
	const static int n = 12; 
	const int m = 7; 
	static int f1() { return n; }/*§f1Func§*/ 
	static int f2();/*§f2Func§*/ 
	int g1() { return n; }/*§g1Func§*/ 
	int g2() { return f1(); }/*§g2Func§*/ 
};

int A::f2() {/*§f3FuncDef§*/ 
	int i = n;
	//i += m;
	//i += g1();
	return i; 
}

int main() {
	A::f1();
	//A::g();
	A a;
	a.f1();
}
