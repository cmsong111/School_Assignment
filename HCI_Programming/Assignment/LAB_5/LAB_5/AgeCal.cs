using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LAB_5
{
    class AgeCal : baseclass
    {
        protected int Days;
        public int days
        {
            get
            {
                return Days;
            }
            set
            {
                Days = value;
            }
        }
        public DateTime birthday
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

        //오류확인 메소드
        public bool checkerror()
        {   
            if (birthday <= targetday)
            {
                AgeCalculator();
                return true;
            }
            else
            {
                Console.WriteLine("False");
                return false;
            }
        }

        private void AgeCalculator()
        {
            string text = Convert.ToString(this.targetday - this.birthday);
            Console.WriteLine("{0}",text);
            string[] words = text.Split('.');
            if (words.Length == 3)
            {
                days = Convert.ToInt16(words[0]) + 1;
            }
            //밀리세컨드 차이로 하루가 1이 안됨
            else if (words[0] == "23:59:59")
            {
                days = 1;
            }
            else //같은날 표현
            {
                days = 0;
            }
            
        }
    }
}
