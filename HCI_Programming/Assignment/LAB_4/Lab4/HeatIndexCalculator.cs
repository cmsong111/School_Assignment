using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// https://www.calculator.net/heat-index-calculator.html
namespace Lab4
{
	public enum HeatIndex
	{
		EXTREME_DANGER, DANGER, EXTREME_CAUTION, CAUTION
	}

	public class HeatIndexCalculator : WeatherCalculator
    {
        double Temperature { get; set; } // fahrenheit
        double RelativeHumidity { get; set; } // %

        /*public HeatIndexCalculator(double temperature, double relativeHumidity)
        {
            Temperature = temperature;
            RelativeHumidity = relativeHumidity;
        }*/

        public HeatIndexCalculator(WeatherData weatherData) : base(weatherData)
		{
        }

		// HI = -42.379 + (2.04901523*F) + (10.14333127*R) - (0.22475541*F*R) - (0.00683770*F*F) - (0.05481717*R*R) + (0.00122874*F*F*R) + (0.00085282*F*R*R) - (0.00000199*F*F*R*R) [F, R]
		protected static double Calculate(double F, double RH)
		{
			if (F < 80.0) return 0.0;
			double value = -42.379 + (2.04901523 * F) + (10.14333127 * RH) - (0.22475541 * F * RH) - (0.00683770 * F * F) - (0.05481717 * RH * RH) + (0.00122874 * F * F * RH) + (0.00085282 * F * RH * RH) - (0.00000199 * F * F * RH * RH);
			return Math.Round(value * 10) / 10.0;
		}

		public override void Calculate()
		{
			Value = Calculate(WeatherData.Temperature, WeatherData.RelativeHumidity);
		}

		public override void PrintTable()
		{
			Console.WriteLine("Print WindChillTemperature");
			int[] fahrenheit = { 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110 };
			int[] humidities = { 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100 };
			Console.WriteLine("RH/F\t80\t82\t84\t86\t88\t90\t92\t94\t96\t98\t100\t102\t104\t106\t108\t110");
			for (int i = 0; i < humidities.Length; i++)
			{
				Console.Write(humidities[i] + "\t");
				for (int j = 0; j < fahrenheit.Length; j++)
				{
					double value = Calculate(fahrenheit[j], humidities[i]);
					if (value < 137)
						Console.Write(value + "\t");
					else
						Console.Write("\t\t");
				}
				Console.WriteLine();
			}
		}

		public override void GetUserInput()
		{
			Console.WriteLine("Calculate HeatIndex");
			Console.Write("Please enter temperature (F): ");
			WeatherData.Temperature = Double.Parse(Console.ReadLine());
			Console.Write("Please enter relative humidity (%): ");
			WeatherData.RelativeHumidity = Double.Parse(Console.ReadLine());
		}

		// EXTREME_DANGER 130 F ~ (54 C ~)  
		// DANGER 105 ~ 130 F (41 ~ 54 C)   
		// EXTREME_CAUTION 90 ~ 105 F (32 ~ 41 C)   
		// CAUTION 80 ~ 90 F (27 ~ 32 C)
		public static HeatIndex? GetIndex(double value)
		{
			if (value > 130.0)
				return HeatIndex.EXTREME_DANGER;
			else if (value >= 105.0 && value < 130.0)
				return HeatIndex.DANGER;
			else if (value >= 90.0 && value < 105.0)
				return HeatIndex.EXTREME_CAUTION;
			else if (value >= 80.0 && value < 90)
				return HeatIndex.CAUTION;
			else
				return null;
		}

		public override string ToString()
		{
			return "HeatIndexCalculator [Temperature=" + WeatherData.Temperature + ", RelativeHumidity=" + WeatherData.RelativeHumidity + ", Value=" + Value + ", Index=" + GetIndex(Value) + "]";
		}

    }
}
