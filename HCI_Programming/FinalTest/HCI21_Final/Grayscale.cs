using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HCI21_Final_KimNamju_20192336_C20192336
{
    public class Grayscale : IPhotoProcessor
    {
        public Bitmap Process(Bitmap original)
        {
            return ProcessGraysacle(original);
        }
        //grayscale
        public static Bitmap ProcessGraysacle(Bitmap original)
        {
            Bitmap newBitmap = new Bitmap(original.Width, original.Height);
            newBitmap = (Bitmap)original.Clone();
            //loop t
            for (int x = 0; x< original.Width; x++)
            {
                for (int y = 0; y < original.Height; y++)
                {
                    Color pixelcolor = original.GetPixel(x, y);
                    int brightness = (int)(pixelcolor.R * 0.299) + (int)(pixelcolor.G * 0.587) + (int)(pixelcolor.B * 0.114);
                    Color newColor = Color.FromArgb(brightness, brightness, brightness);
                    newBitmap.SetPixel(x, y, newColor);
                }
            }
            return newBitmap;
        }
    }
}
