using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab4
{
    public abstract class WeatherCalculator : IWeatherCalculator, IEquatable<WeatherCalculator>
	{

		protected WeatherData WeatherData { get; set; } // 날씨데이터 사용
		protected double Value { get; set; } // 계산 값
		protected WeatherCalculator(WeatherData weatherData) {
			WeatherData = weatherData;
			Calculate(); // 동적바인딩으로 자식클래스의 calculate() 호출
			Console.WriteLine(this);
		}

        // template method
        public void Process()
		{
			if (WantTablePrint()) PrintTable();
			if (WantUserInput()) GetUserInput();
			Calculate();
			Console.WriteLine(this);
		}

        // operations
        public bool WantTablePrint()
		{
			return true;
		}

		public bool WantUserInput()
		{
			return true;
		}

		public abstract void Calculate();
		public abstract void GetUserInput();
		public abstract void PrintTable();

		protected static double FromFahrenheitToCelsius(double F)
		{
			return (F - 32.0) * (5.0 / 9.0);
		}

		protected static double FromCelsiusToFahrenheit(double C)
		{
			return ((9.0 / 5.0) * C + 32.0);
		}

		public bool Equals(WeatherCalculator other)
		{
			return WeatherData.Equals(other.WeatherData) && Value == other.Value;
		}

		public static bool operator ==(WeatherCalculator x, WeatherCalculator y)
		{
			return x.Equals(y);
		}

		public static bool operator !=(WeatherCalculator x, WeatherCalculator y)
		{
			return !x.Equals(y);
		}

		public override int GetHashCode()
		{
			return HashCode.Combine(WeatherData.Temperature, WeatherData.RelativeHumidity, WeatherData.WindVelocity, Value);
		}

	}
}
