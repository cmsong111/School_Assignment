using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//https://www.calculator.net/wind-chill-calculator.html
namespace Lab4
{
    public enum WindChillTemperatureIndex
    {
        EXTREME_DANGER, DANGER, WARNING, CAUTION, AWARE
    }

    public class WindChillTemperatureCalculator : WeatherCalculator
    {
        double Temperature { get; set; } // fahrenheit
        double WindVelocity { get; set; } // mph

        /*public WindChillTemperatureCalculator(double temperature, double windVelocity)
        {
            Temperature = temperature;
            WindVelocity = windVelocity;
        }*/

        public WindChillTemperatureCalculator(WeatherData weatherData) : base(weatherData)
        {

        }

        public static double Calculate(double F, double V)
        {
            double value = 35.74 + 0.6215 * F - 35.75 * Math.Pow(V, 0.16) + 0.4275 * F * Math.Pow(V, 0.16);
            return Math.Round(value * 10) / 10.0;
        }

        public override void Calculate()
        {
            this.Value = Calculate(WeatherData.Temperature, WeatherData.WindVelocity);
        }

        public override void PrintTable()
        {
            Console.WriteLine("Print WindChillTemperature");
            Console.WriteLine("W/F\t40\t35\t30\t25\t20\t15\t10\t5\t0\t-5\t-10\t-15\t-20\t-25\t-30\t-35\t-40\t-45");
            for (int wind = 5; wind < 65; wind += 5)
            {
                Console.Write(wind + "\t");
                for (int fahrenheit = 40; fahrenheit > -50; fahrenheit -= 5)
                {
                    double value = Calculate(fahrenheit, wind);
                    Console.Write(value + "\t");
                }
                Console.WriteLine();
            }
        }

        public override void GetUserInput()
        {
            Console.WriteLine("Calculate WindChillTemperature");
            Console.Write("Please enter temperature (F): ");
            WeatherData.Temperature = Double.Parse(Console.ReadLine());
            Console.Write("Please enter wind velocity (mph): ");
            WeatherData.WindVelocity = Double.Parse(Console.ReadLine());
        }

        // EXTREME_DANGER -75 F (-60 C)
        // DANGER -75 ~ -50 F (-60 ~ -45 C) 
        // WARNING -50 ~ -15 F (-45 ~ -25 C)  
        // CAUTION -15 ~ 15 F (-25 ~ -10 C)  
        // AWARE 15 ~ 32 F (-10 ~ 0 C)  
        public static WindChillTemperatureIndex? GetIndex(double value)
        {
            if (value < -75.0)
                return WindChillTemperatureIndex.EXTREME_DANGER;
            else if (value >= -75.0 && value < -50.0)
                return WindChillTemperatureIndex.DANGER;
            else if (value >= -50.0 && value < -15.0)
                return WindChillTemperatureIndex.WARNING;
            else if (value >= -15.0 && value < 15.0)
                return WindChillTemperatureIndex.CAUTION;
            else if (value >= 15.0 && value < 32.0)
                return WindChillTemperatureIndex.AWARE;
            else
                return null;
        }

        public override string ToString()
        {
            return "WindChillTemperatureCalculator [Temperature=" + WeatherData.Temperature + ", WindVelocity=" + WeatherData.WindVelocity + ", Value=" + Value + ", Index=" + GetIndex(Value)  + "]";
        }
    }
}
