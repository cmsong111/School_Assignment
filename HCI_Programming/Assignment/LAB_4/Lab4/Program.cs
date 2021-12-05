using System;
using System.Collections.Generic;

namespace Lab4
{
	class Program
    {
		// fahrenheitTemperature, relativeHumidity, windVelocity
		static WeatherData[] weatherData = new WeatherData[]
		{
			new WeatherData(new DateTime(2019, 1, 1), 30.38, 46, 4.0265),
			new WeatherData(new DateTime(2019, 2, 1), 33.8, 47, 4.0265),
			new WeatherData(new DateTime(2019, 3, 1), 44.78, 51, 4.6976),
			new WeatherData(new DateTime(2019, 4, 1), 53.78, 51, 4.2502),
			new WeatherData(new DateTime(2019, 5, 1), 66.92, 47, 4.6976),
			new WeatherData(new DateTime(2019, 6, 1), 72.5, 61, 3.8028),
			new WeatherData(new DateTime(2019, 7, 1), 78.62, 69, 4.0265),
			new WeatherData(new DateTime(2019, 8, 1), 80.96, 69, 3.5791),
			new WeatherData(new DateTime(2019, 9, 1), 72.68, 65, 4.9213),
			new WeatherData(new DateTime(2019, 10, 1), 61.52, 62, 4.6976),
			new WeatherData(new DateTime(2019, 11, 1), 45.68, 56, 4.9213),
			new WeatherData(new DateTime(2019, 12, 1), 34.52, 58, 4.6976),
			new WeatherData(new DateTime(2020, 1, 1), 34.88, 56, 4.6976),
			new WeatherData(new DateTime(2020, 2, 1), 36.5, 58, 5.1450),
			new WeatherData(new DateTime(2020, 3, 1), 45.86, 46, 5.5924),
			new WeatherData(new DateTime(2020, 4, 1), 51.98, 50, 6.7108),
			new WeatherData(new DateTime(2020, 5, 1), 64.4, 67, 5.3687),
			new WeatherData(new DateTime(2020, 6, 1), 75.02, 68, 5.1450),
			new WeatherData(new DateTime(2020, 7, 1), 75.38, 77, 5.3687),
			new WeatherData(new DateTime(2020, 8, 1), 79.7, 85, 5.1450),
			new WeatherData(new DateTime(2020, 9, 1), 70.52, 71, 5.5924),
			new WeatherData(new DateTime(2020, 10, 1), 57.74, 61, 4.6976),
			new WeatherData(new DateTime(2020, 11, 1), 46.4, 64, 4.9213),
			new WeatherData(new DateTime(2020, 12, 1), 31.46, 58, 4.9213)
		};
		static int GetMode()
		{
			if (Int32.TryParse(Console.ReadLine(), out int value))
			{
				return value;
			}
			return 0;
		}
		static bool GetExitKey()
		{
			Console.Write("Press q-key to exit or enter-key to continue: ");
			string line = Console.ReadLine();
			if (line.Equals("q")) //만약 str변수의 문자열과 "q"값이 같다면 true 리턴
				return true;
			else
				return false; //str변수의 문자열이 "q"와 값이 같지 않다면 false 리턴 
		}

		static void Main(string[] args)
        {
			// calculate DewPoint, WindChillTemperature, HeatIndex, DiscomfortIndex using array of weather data (Temperature, relativeHumidity, windVelocity)
			Console.WriteLine("calculate DewPoint, WindChillTemperature, HeatIndex, DiscomfortIndex using WeatherData");
			WeatherCalculatorListManager listManager = new WeatherCalculatorListManager();
			foreach (WeatherData data in weatherData)
			{
				Console.WriteLine("Weather data : " + data);
				for (int mode = 1; mode<5; mode++)
				{
					WeatherCalculator calculator = WeatherCalculatorFactory.GetInstance(mode, data);
					listManager.Add(calculator);
				}
			}
			// print
			Console.WriteLine("listManager print..");
			listManager.Print();

			// print
			IList<WeatherCalculator> resultList = listManager.Select(e => e is DewPointCalculator);
			Console.WriteLine("resultList print..");
			foreach (var e in resultList) Console.WriteLine(e);
			WeatherCalculator randomCalculator = WeatherCalculatorListManager.GetRandom(resultList);
			Console.WriteLine("randomCalculator (from resultList)=" + randomCalculator);

			// calculate using user input
			Console.WriteLine("user input..");
			WeatherCalculatorSetManager setManager = new WeatherCalculatorSetManager();
			do
			{
				Console.Write("Please enter mode [1: DP, 2: WCT, 3: HI, 4: DI]: ");
				int mode = GetMode();
				WeatherCalculator calculator = WeatherCalculatorFactory.getInstance(mode);
				calculator.Process();
				setManager.Add(calculator);
			} while (!GetExitKey());
			// print
			Console.WriteLine("setManager print..");
			setManager.Print();
			ISet<WeatherCalculator> resultSet = setManager.Select(e => e is DewPointCalculator);
			Console.WriteLine("resultSet print..");
			foreach(var e in resultSet) Console.WriteLine(e);
			randomCalculator = WeatherCalculatorSetManager.GetRandom(resultSet);
			Console.WriteLine("randomCalculator (from resultSet)=" + randomCalculator);

			Console.WriteLine("done..");
		}
    }
}
