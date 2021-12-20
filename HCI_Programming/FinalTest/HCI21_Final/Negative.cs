using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace HCI21_Final_KimNamju_20192336_C20192336
{
    public class Negative : IPhotoProcessor
    {
        public Bitmap Process(Bitmap original)
        {
            return ProcessNegative(original);
        }
        //grayscale
        public static Bitmap ProcessNegative(Bitmap original)
        {
            Bitmap newBitmap = new Bitmap(original.Width, original.Height);
            newBitmap = (Bitmap)original.Clone();
            //loop t
            for (int x = 0; x < original.Width; x++)
            {
                for (int y = 0; y < original.Height; y++)
                {
                    Color pixelcolor = original.GetPixel(x, y);
                    int R = (int)(255 - pixelcolor.R);
                    int G = (int)(255 - pixelcolor.G);
                    int B = (int)(255 - pixelcolor.B);
                    Color newColor = Color.FromArgb(R, G, B);
                    newBitmap.SetPixel(x, y, newColor);
                }
            }
            return newBitmap;
        }
    }
}
