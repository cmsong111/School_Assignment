using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab4
{
    public class DewPointCalculator : WeatherCalculator
    {
        double Temperature { get; set; } // fahrenheit
        double RelativeHumidity { get; set; } // %

        public DewPointCalculator(WeatherData weatherData) : base(weatherData)
        {
        }

        /*public DewPointCalculator(double temperature, double relativeHumidity)
        {
            Temperature = temperature;
            RelativeHumidity = relativeHumidity;
        }*/

        public static double Calculate(double F, double RH)
        {
            double T = FromFahrenheitToCelsius(F);
            double value = (243.12 * (Math.Log(RH / 100) + 17.62 * T / (243.12 + T))) / (17.62 - (Math.Log(RH / 100) + 17.62 * T / (243.12 + T)));
            value = FromCelsiusToFahrenheit(value);
            return Math.Round(value * 10) / 10.0;
        }

        public override void Calculate()
        {
            this.Value = Calculate(WeatherData.Temperature, WeatherData.RelativeHumidity);
        }

        public override void PrintTable()
        {
            int[] humidities = { 100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10 };
            int[] fahrenheit = { 110, 105, 100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 32 };
            Console.WriteLine("F/RH\t100\t95\t90\t85\t80\t75\t70\t65\t60\t55\t50\t45\t40\t35\t30\t25\t20\t15\t10");
            for (int i = 0; i < fahrenheit.Length; i++)
            {
                Console.Write(fahrenheit[i] + "\t");
                for (int j = 0; j < humidities.Length; j++)
                {
                    double dpt = Calculate(fahrenheit[i], humidities[j]);
                    if (dpt >= 32) {
                        Console.Write(dpt + "\t");
                    }
                    else {
                        Console.Write("\t\t");
                    }
                }
                Console.WriteLine();
            }
        }

        public override void GetUserInput()
        {
            Console.WriteLine("Calculate DewPoint");
            Console.Write("Please enter temperature (F): ");
            WeatherData.Temperature = Double.Parse(Console.ReadLine());
            Console.Write("Please enter relative humidity (%): ");
            WeatherData.RelativeHumidity = Double.Parse(Console.ReadLine());
        }

        public override string ToString()
        {
            //return "DewPointCalculator [Temperature=" + WeatherData.Temperature + ", RelativeHumidity=" + WeatherData.RelativeHumidity + ", Value=" + Value + "]";
            return "DewPointCalculator [WeatherData=" + WeatherData + ", Value=" + Value + "]";
        }
    }
}
