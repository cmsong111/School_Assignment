using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// http://www.eurometeo.com/english/read/doc_heat
// https://namu.wiki/w/%EB%B6%88%EC%BE%8C%EC%A7%80%EC%88%98
namespace Lab4
{
    public enum DiscomfortIndex
    {
        EXTREME_DISCOMFORT, VERY_HIGH_DISCOMFORT, HIGH_DISCOMFORT, MODERATE_DISCOMFORT, LOW_DISCOMFORT, NO_DISCOMFORT
    }

    public class DiscomfortIndexCalculator : WeatherCalculator
    {
        double Temperature { get; set; } // fahrenheit
        double RelativeHumidity { get; set; } // %

        /*public DiscomfortIndexCalculator(double temperature, double relativeHumidity)
        {
            Temperature = temperature;
            RelativeHumidity = relativeHumidity;
        }*/

        public DiscomfortIndexCalculator(WeatherData weatherData) : base(weatherData)
        {
        }

        // DI = T - 0.55*(1 - 0.01*RH)*(T - 14.5) [T: celsius]
        public static double Calculate(double F, double RH)
        {
            double T = FromFahrenheitToCelsius(F);
            double value = T - 0.55 * (1 - 0.01 * RH) * (T - 14.5); // C
            value = FromCelsiusToFahrenheit(value);
            return Math.Round(value * 10) / 10.0;
        }

        public override void Calculate()
        {
            Value = Calculate(WeatherData.Temperature, WeatherData.RelativeHumidity);
        }

        public override void PrintTable()
        {
            Console.WriteLine("Print DiscomfortIndexCalculator");
            int[] fahrenheit = { 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110 };
            int[] humidities = { 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100 };
            Console.WriteLine("RH/F\t80\t82\t84\t86\t88\t90\t92\t94\t96\t98\t100\t102\t104\t106\t108\t110");
            for (int i = 0; i < humidities.Length; i++)
            {
                Console.Write(humidities[i] + "\t");
                for (int j = 0; j < 16; j++)
                {
                    double value = Calculate(fahrenheit[j], humidities[i]);
                    Console.Write(value + "\t");
                }
                Console.WriteLine();
            }
        }

        public override void GetUserInput()
        {
            Console.WriteLine("Calculate DiscomfortIndex");
            Console.Write("Please enter temperature (F): ");
            WeatherData.Temperature = Double.Parse(Console.ReadLine());
            Console.Write("Please enter relative humidity (%): ");
            WeatherData.RelativeHumidity = Double.Parse(Console.ReadLine());
        }

        // EXTREME_DANGER 130 F ~ (54 C ~)  
        // DANGER 105 ~ 130 F (41 ~ 54 C)   
        // EXTREME_CAUTION 90 ~ 105 F (32 ~ 41 C)   
        // CAUTION 80 ~ 90 F (27 ~ 32 C)
        public static DiscomfortIndex? GetIndex(double value)
        {
            if (value > 89.6)
                return DiscomfortIndex.EXTREME_DISCOMFORT;
            else if (value >= 86 && value < 89.6)
                return DiscomfortIndex.VERY_HIGH_DISCOMFORT;
            else if (value >= 82.4 && value < 86)
                return DiscomfortIndex.HIGH_DISCOMFORT;
            else if (value >= 77 && value < 82.4)
                return DiscomfortIndex.MODERATE_DISCOMFORT;
            else if (value >= 69.8 && value < 77)
                return DiscomfortIndex.LOW_DISCOMFORT;
            else if (value < 69.8)
                return DiscomfortIndex.NO_DISCOMFORT;
            else
                return null;
        }

        public override string ToString()
        {
            return "DiscomfortIndexCalculator [Temperature=" + WeatherData.Temperature + ", RelativeHumidity=" + WeatherData.RelativeHumidity + ", Value=" + Value + ", Index=" + GetIndex(Value) + "]";
        }
    }
}
