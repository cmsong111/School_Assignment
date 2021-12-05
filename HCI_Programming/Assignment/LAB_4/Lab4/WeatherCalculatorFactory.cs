using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab4
{
	public class WeatherCalculatorFactory
    {
		private WeatherCalculatorFactory() { }

		public static WeatherCalculator getInstance(int mode)
		{
			return GetInstance(mode, new WeatherData());
		}

		public static WeatherCalculator GetInstance(int mode, WeatherData data)
		{
			WeatherCalculator calc = null;
			if (mode == 1)
			{
				calc = new DewPointCalculator(data);
			}
			else if (mode == 2)
			{
				calc = new WindChillTemperatureCalculator(data);
			}
			else if (mode == 3)
			{
				calc = new HeatIndexCalculator(data);
			}
			else if (mode == 4)
			{
				calc = new DiscomfortIndexCalculator(data);
			}
			return calc;
		}
	}
}
