
class Fixed
{
private:
	int fixedNumber;
	static const int fract;
public:
	Fixed(/* args */);
	Fixed(const Fixed&);
	~Fixed();
	Fixed &operator=(const Fixed&);
};

