using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab4
{
    class WeatherCalculatorSetManager
    {
		private ISet<WeatherCalculator> calculators = null;

		// constructor
		public WeatherCalculatorSetManager(): this(new HashSet<WeatherCalculator>())
		{			
		}

		public WeatherCalculatorSetManager(ISet<WeatherCalculator> calculators)
		{
			this.calculators = calculators;
		}

		// add
		public void Add(WeatherCalculator calculator)
		{
			Console.WriteLine("set add " + calculator);
			this.calculators.Add(calculator);
		}

		// remove
		public void Remove(WeatherCalculator calculator)
		{
			this.calculators.Remove(calculator);
		}

		// Count
		public int Count
		{
			get
            {
				return this.calculators.Count;
			}
		}

		// print
		public void Print()
		{
			foreach (WeatherCalculator e in calculators)
			{
				Console.WriteLine(" e=" + e + " " + e.GetHashCode());
			}
		}

		// select by predicate
		public ISet<WeatherCalculator> Select(Predicate<WeatherCalculator> predicate)
		{
			ISet<WeatherCalculator> result = new HashSet<WeatherCalculator>();
			foreach (WeatherCalculator c in this.calculators)
			{
				if (predicate(c))
				{
					result.Add(c);
				}
			}
			return result;
		}

		// get a random element from the set
		public static WeatherCalculator GetRandom(ISet<WeatherCalculator> calculators)
		{
			int randomIndex = (new Random()).Next(calculators.Count);
			IEnumerator<WeatherCalculator> iter = calculators.GetEnumerator();
			WeatherCalculator result = null;
			int index = 0;
			while (iter.MoveNext())
			{
				result = iter.Current;
				if (index == randomIndex)
				{
					return result;
				}
				index++;
			}
			return result;
		}

		// getReference 
		/*private static string GetReference(object o)
		{
			return o.GetType().FullName + "@" + GetHashCode(o).ToString("x");
		}*/
	}
}
