using System;
using System.Collections.Generic;
using System.Drawing.Imaging;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HCI21_Final_KimNamju_20192336_C20192336
{
    public class BmpConverter : FormatConverter
    {
        //constructor
        public BmpConverter() :base("bmp")
        {
        }
        //override format property
        public override ImageFormat Format => ImageFormat.Bmp;
    }
}
