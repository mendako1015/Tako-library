template<int64_t MOD>
class ModInt {
	typedef int64_t T;
	T x;
 
  public:
	ModInt(){
		x=0;
	}
 
	ModInt(T value) {
		if (value < 0) value = (MOD - (-value) % MOD);
		x = value % MOD;
	}
 
	ModInt operator-() const {
		return ModInt(-x);
	}
 
	ModInt& operator+=(const ModInt& p) {
		if ((x += p.get()) >= MOD) x -= MOD;
		return *this;
	}
 
	ModInt& operator-=(const ModInt& p) {
		if ((x += MOD - p.get()) >= MOD) x -= MOD;
		return *this;
	}
 
	ModInt& operator*=(const ModInt& p) {
		x = x * p.get() % MOD;
		return *this;
	}
 
	ModInt& operator/=(const ModInt& p) {
		*this *= p.inverse();
		return *this;
	}
 
	ModInt& operator+=(const T& p) {
		return *this += ModInt(p);
	}
 
	ModInt& operator-=(const T& p) {
		return *this -= ModInt(p);
	}
 
	ModInt& operator*=(const T& p) {
		return *this *= ModInt(p);
	}
 
	ModInt& operator/=(const T& p) {
		return *this /= ModInt(p);
	}
 
	ModInt operator+(const ModInt& p) const {
		return ModInt(*this) += p;
	}
 
	ModInt operator-(const ModInt& p) const {
		return ModInt(*this) -= p;
	}
 
	ModInt operator*(const ModInt& p) const {
		return ModInt(*this) *= p;
	}
 
	ModInt operator/(const ModInt& p) const {
		return ModInt(*this) /= p;
	}
 
	ModInt operator+(const T& p) const {
		return ModInt(*this) += p;
	}
 
	ModInt operator-(const T& p) const {
		return ModInt(*this) -= p;
	}
 
	ModInt operator*(const T& p) const {
		return ModInt(*this) *= p;
	}
 
	ModInt operator/(const T& p) const {
		return ModInt(*this) /= p;
	}
 
	bool operator==(const ModInt& p) const {
		return x == p.get();
	}
 
	bool operator!=(const ModInt& p) const {
		return x != p.get();
	}
 
	bool operator==(const T& p) const {
		return x == ModInt(p);
	}
 
	bool operator!=(const T& p) const{
		return x != ModInt(p);
	}
 
	ModInt inverse() const {
		int a = x, b = MOD, u = 1, v = 0;
		while (b) {
			int t = a / b;
			a -= t * b;
			u -= t * v;
			swap(a, b);
			swap(u, v);
		}
		return ModInt(u);
	}
 
	T get() const{
		return x;
	}
 