using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LAB_5
{
    class Datecal :baseclass
    {

        public int Year { get; set; } = 0;
        public int Month { get; set; } = 0;
        public int Week { get; set; } = 0;
        public int Day { get; set; } = 0;

        public DateTime startday
        {
            get
            {
                return StartDay;
            }

            set
            {
                StartDay = value;
            }
        }

        public DateTime calculator(string which)
        {
            targetday = startday;
            if (which == "+")
            {
                targetday = targetday.AddDays(Day);
                targetday = targetday.AddMonths(Month);
                targetday = targetday.AddDays(Week * 7);
                targetday = targetday.AddYears(Year);
                return targetday;
            }
            else if (which == "-")
            {
                targetday = targetday.AddDays(-Day);
                targetday = targetday.AddMonths(-Month);
                targetday = targetday.AddDays(-Week * 7);
                targetday = targetday.AddYears(-Year);
                return targetday;

            }
            else
            {
                MessageBox.Show("부호를 선택하세요!", "ERROR");
                return default;
            }


        }
       
        public string Resultexplain(string which)
        {
            string result = "is the date";
            if (Year != 0){
                result+=($" {Year} Years");
            }
            if (Month != 0)
            {
                result += ($" {Month} Months");
            }
            if (Week != 0)
            {
                result += ($" {Week} Weeks");
            }            if (Day != 0)
            {
                result += ($" {Day} days");
            }
            // 전 이후 추가
            if (which == "+")
            {
                result += (" After ");
            }
            else if (which == "-"){
                result += (" Before ");
            }

            result += ($"{startday}");

            return result;
        }



    }
}
