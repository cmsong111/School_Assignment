using System;
using System.Collections.Generic;
using System.Drawing.Imaging;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HCI21_Final_KimNamju_20192336_C20192336
{
    class JpgConverter :FormatConverter
    {
        //constructor
        public JpgConverter() : base("jpg")
        {
        }
        //override format property
        public override ImageFormat Format => ImageFormat.Jpeg;
    }
}
