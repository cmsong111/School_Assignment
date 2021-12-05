using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab4
{
    class WeatherCalculatorListManager
    {
		private List<WeatherCalculator> calculators = null;

		// constructor
		public WeatherCalculatorListManager(): this(new List<WeatherCalculator>())
		{			
		}

		public WeatherCalculatorListManager(List<WeatherCalculator> calculators)
		{
			this.calculators = calculators;
		}

		// add
		public void Add(WeatherCalculator calculator)
		{
			this.calculators.Add(calculator);
		}

		// remove
		public void Remove(WeatherCalculator calculator)
		{
			this.calculators.Remove(calculator);
		}

		// set/replace
		public void Set(int index, WeatherCalculator calculator)
		{
			this.calculators[index] = calculator;
		}

		// get(int index)
		public WeatherCalculator Get(int index)
		{
			return this.calculators[index];
		}

		// indexOf
		public int IndexOf(WeatherCalculator calculator)
		{
			return this.calculators.IndexOf(calculator);
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
			calculators.ForEach(e => Console.WriteLine(e));
		}

		// select by predicate
		public IList<WeatherCalculator> Select(Predicate<WeatherCalculator> predicate)
		{
			List<WeatherCalculator> result = new List<WeatherCalculator>(calculators.FindAll(predicate));
			return result;
		}

		// get a random element from the list
		public static WeatherCalculator GetRandom(IList<WeatherCalculator> calculators)
		{
			return calculators[(new Random()).Next(calculators.Count)];
		}


    }
}
