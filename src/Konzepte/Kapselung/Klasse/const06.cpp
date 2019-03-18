struct A {
	int m,n;/*§A_mn§*/
	void e() {/*§A_e§*/
		m++;
		n++;
	}
	void f() const {/*§A_f§*/
		// e();
	}
	int g() const {/*§A_g§*/
		int k = m;
		k *= n;
		return k;
	}
	void h() const {/*§A_h§*/
		A a2 = {5, 6};/*§h_a§*/
		a2.e();/*§h_e§*/
		a2.m *= a2.n;/*§h_mul§*/
	}
};

int main() {
	A a1 = {1, 2};
	a1.f();
	a1.g();
	a1.h();
	a1.e();
}
