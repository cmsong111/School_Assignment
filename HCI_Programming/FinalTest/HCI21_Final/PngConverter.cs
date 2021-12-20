using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing.Imaging;
using System.Threading.Tasks;

namespace HCI21_Final_KimNamju_20192336_C20192336
{
    class PngConverter :FormatConverter
    {
        //constructor
        public PngConverter() : base("png")
        {
        }
        //override format property
        public override ImageFormat Format => ImageFormat.Png;
    }
}
