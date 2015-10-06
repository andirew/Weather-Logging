// compilation safegaurds

/*Weather.h*/
namespace sict {
	class Weather {
		char date[8];
		double highTemp;
		double lowTemp;

	public:
		void set(const char*, double, double);
		void display() const;
		const char* getDate() const;
		double getLowTemp() const;
	};
}
