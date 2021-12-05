using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab4
{
    public interface IWeatherCalculator
    {
        abstract void PrintTable();
        abstract void GetUserInput();
        abstract void Calculate();
        
    }
}
