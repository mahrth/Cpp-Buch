struct S { 
	int i;
private: int j;
public:	int k;
};
class C {
	int l;
public:	int m;
private: int n;
};
int main() {
	S s; C c;
	s.i = 0;
	// s.j = 0;
	s.k = 0;
	// c.l = 0;
	c.m = 0;
	// c.n = 0;	
}
