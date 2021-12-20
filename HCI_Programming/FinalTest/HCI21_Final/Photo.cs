using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using System.Drawing.Imaging;

namespace HCI21_Final_KimNamju_20192336_C20192336
{
    public class Photo
    {
        //propertey -filename, bitmap
        public string Filename { get; set; }
        public Bitmap Bitmap { get; set; }

        //constructor - Photo(string filename)
        public Photo(string filename)
        {
            Filename = filename;
            Bitmap = Load(filename);
        }

        //method - load, Save
        //load image from filename
        Bitmap Load(string filename)
        {
            return (Bitmap)Image.FromFile(filename);
        }

        //save image to filename with format
        void save(string filename, ImageFormat format)
        {
            Bitmap.Save(filename, format);
        }

    }
}
