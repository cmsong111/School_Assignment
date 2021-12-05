using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LAB_5
{
    class baseclass 
    {
        protected DateTime TargetDay;
        protected DateTime StartDay;
        

        public DateTime targetday
        {
            get
            {
                return TargetDay;
            }
            set
            {
                TargetDay = value;
            }
        }
        
    }
}
