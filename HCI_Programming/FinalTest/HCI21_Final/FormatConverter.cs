using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using System.Drawing.Imaging;

namespace HCI21_Final_KimNamju_20192336_C20192336
{
    public abstract class FormatConverter
    {
        //property
        string Extension { get; set; }
        public abstract ImageFormat Format { get; }


        // constructor
        public FormatConverter(string extension)
        {
            Extension = extension;
        }
        
        
    }
}
