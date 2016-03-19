#include <string>
using namespace std;

class BMI{
	public:
		BMI();
		void setHeight(float h);
		void setMass(float w);
		float getHeight();
		float getMass();
		void BMI_cal();
		float getBMI();
		string category();
	private:
		float height;
		float mass;
		string type;
		float b;
};
