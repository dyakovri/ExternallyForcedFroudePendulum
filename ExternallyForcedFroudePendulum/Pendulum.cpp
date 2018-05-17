#include "RKMethod.h"

namespace ExternallyForcedFroudePendulum {
	class Pendulum : public RKMethod {
		double l, k1, k2, m;
		double x, y;
		double M0, J;
		const double g = 9.81;

	public:
		Pendulum(double m, double l, double a, double k1, double k2) : RKMethod(2) {
			this->l = l; //Расстояние от вала до центра маятника 
			this->m = m; // Масса 
			this->k1 = k1; //Коэф трения
			this->k2 = k2; //Коэф трения

			std::vector<double> Y0(2);
			Y0[0] = a;
			Y0[1] = 0;

			J = 0.5 * m * l * l;
			M0 = m * g * l * sin(90*3.1415/180 - a);

			SetInit(0, Y0);
		}

		std::vector<double> F(double time, std::vector<double> &coordinates)
		{
			// B - Y[0], dB/dt - Y[1]
			// dB^2/dt^2 - FY[0] , dB/dt - FY[1]

			FY[0] = Y[1];
			FY[1] = (M0 + k1 * Y[1] - k2 * pow(Y[1],3) - m * g * l * sin(Y[0])) / J;

			return FY;
		}

		void Step()
		{
			NextStep(0.01);
		}

		double get_x() { return l * sin(Y[0]); }
		double get_y() { return -l * cos(Y[0]); }
		double get_b() { return Y[0]; }
		double get_t() { return t; }
	};
}