using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HCI21_Final_KimNamju_20192336_C20192336
{
    class Brightness : IPhotoProcessor
    {
        public Bitmap Process(Bitmap original)
        {
            return ProcessBrightness(original);
        }
        //grayscale
        public static Bitmap ProcessBrightness(Bitmap original)
        {
            Bitmap newBitmap = new Bitmap(original.Width, original.Height);
            newBitmap = (Bitmap)original.Clone();
            //loop t
            for (int x = 0; x < original.Width; x++)
            {
                for (int y = 0; y < original.Height; y++)
                {
                    Color pixelcolor = original.GetPixel(x, y);
                    int R = pixelcolor.R , G = pixelcolor.G , B=pixelcolor.B;
                    if (pixelcolor.R < 245)
                    {
                        R = (int)(pixelcolor.R + 10);
                    }
                    if (pixelcolor.G < 245)
                    {
                        G = (int)(pixelcolor.G + 10);
                    }
                    if (pixelcolor.B < 245)
                    {
                        B = (int)(pixelcolor.B + 10);
                    }
                    Color newColor = Color.FromArgb(R, G, B);
                    newBitmap.SetPixel(x, y, newColor);
                }
            }
            return newBitmap;
        }
    }
}
