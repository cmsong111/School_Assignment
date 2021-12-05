using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab4
{
    public class WeatherData : IEquatable<WeatherData>
    {
        //생성자
        public DateTime DataTime;
        public double Temperature { get; set; }
        public double RelativeHumidity { get; set; }
        public double WindVelocity { get; set; }
        public double Value { get; set; }
        
        public WeatherData(DateTime dataTime, double temperature, double relativeHumidity, double windVelocity)
        {
            DataTime = dataTime;
            Temperature = temperature; //fahrenheit
            RelativeHumidity = relativeHumidity;
            WindVelocity = windVelocity;
        }

        public WeatherData() : this(DateTime.Now, 0.0, 0.0, 0.0)
        {
        }

        public WeatherData(WeatherData data)
        {
            DataTime = data.DataTime;
            Temperature = data.Temperature;
            RelativeHumidity = data.RelativeHumidity;
            WindVelocity = data.WindVelocity;
            Value = data.Value;
        }

        public override string ToString()
        {
            return "WeatherData [DataTime=" + DataTime + ", Temperature=" + Temperature + ", RelativeHumidity=" + RelativeHumidity + ", WindVelocity=" + WindVelocity + "]";
        }

        public bool Equals(WeatherData other)
        {
            //return other != null && Math.Abs(Temperature - other.Temperature) < 0.0000001 && Math.Abs(RelativeHumidity - other.RelativeHumidity) < 0.0000001 && Math.Abs(WindVelocity - other.WindVelocity) < 0.0000001;
            return Temperature == other.Temperature && RelativeHumidity == other.RelativeHumidity && WindVelocity == other.WindVelocity;
        }

        public static bool operator ==(WeatherData x, WeatherData y)
        {
            return x.Equals(y);
        }

        public static bool operator !=(WeatherData x, WeatherData y)
        {
            return !x.Equals(y);
        }

        public override int GetHashCode()
        {
            return HashCode.Combine(Temperature, RelativeHumidity, WindVelocity);
        }
    }
}
