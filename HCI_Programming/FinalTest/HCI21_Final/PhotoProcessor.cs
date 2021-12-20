using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HCI21_Final_KimNamju_20192336_C20192336
{
    public class PhotoProcessor
    {
        //Photo 속성, IPhotoProcessor 속성, IDictionary<string, FormatConverter> getter 속성
        public Photo Photo { get; set; }
        public IPhotoProcessor processor { get; set; }
        public IDictionary<string, FormatConverter> converters;
        public IDictionary<string, FormatConverter> Converters
        {
            get
            {
                return converters;
            }
        }

        public void process()
        {
            
        }

        public void AddConverter(FormatConverter converter)
        {
            converters.Add("converter", converter);
        }

        public void ConvertTo(string extension)
        {
            if (extension == "png")
            {
                Photo.Bitmap.Save(extension, System.Drawing.Imaging.ImageFormat.Png);
            }
            else if (extension == "bmp")
            {
                Photo.Bitmap.Save(extension, System.Drawing.Imaging.ImageFormat.Bmp);
            }
            else if (extension == "jpg")
            {
                Photo.Bitmap.Save(extension, System.Drawing.Imaging.ImageFormat.Jpeg);
            }
        }
    }
}