using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HCI21_Final_KimNamju_20192336_C20192336
{
    public partial class Form1 : Form
    {
        //Brightness = 컬러 + 밝기
        //Negative = 255- color(0~255)
        IPhotoProcessor[] processors = { new Brightness(), new Grayscale(), new Negative() };
        PhotoProcessor pp = new PhotoProcessor();
        public Form1()
        {
            InitializeComponent();
            //pp.Addconverter(new BmpConverter);
        }

        private void closeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void openToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                System.Diagnostics.Debug.WriteLine(openFileDialog1.FileName);
                //create photo using filename
                pp.Photo = new Photo(openFileDialog1.FileName);
                //set photo image in picturebox1
                pictureBox1.Image = pp.Photo.Bitmap;

            }
        }

        private void saveAsBMPToolStripMenuItem_Click(object sender, EventArgs e)
        {
            saveFileDialog1.Filter = "Image FIle(*.bmp)|*.bmp";
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                System.Diagnostics.Debug.WriteLine(saveFileDialog1.FileName);
                pp.ConvertTo(saveFileDialog1.FileName);
            }
        }

        private void saveAsGIFToolStripMenuItem_Click(object sender, EventArgs e)
        {
            saveFileDialog1.Filter = "Image FIle(*.gif)|*.gif";
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                System.Diagnostics.Debug.WriteLine(saveFileDialog1.FileName);
                
                pp.ConvertTo(saveFileDialog1.FileName);
            }
        }

        private void saveAsJPGToolStripMenuItem_Click(object sender, EventArgs e)
        {
            saveFileDialog1.Filter = "Image FIle(*.jpg)|*.jpg";
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                System.Diagnostics.Debug.WriteLine(saveFileDialog1.FileName);
                pp.ConvertTo(saveFileDialog1.FileName);
            }
        }

        private void saveAsPNGToolStripMenuItem_Click(object sender, EventArgs e)
        {
            saveFileDialog1.Filter = "Image FIle(*.png)|*.png";
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                System.Diagnostics.Debug.WriteLine(saveFileDialog1.FileName);
                pp.ConvertTo(saveFileDialog1.FileName);
            }
        }

        private void brightnessToolStripMenuItem_Click(object sender, EventArgs e)
        {
            toolStripComboBox1.Text = "brightness";
        }

        private void grayscaleToolStripMenuItem_Click(object sender, EventArgs e)
        {
            toolStripComboBox1.Text = "grayscale";
        }

        private void negativeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            toolStripComboBox1.Text = "negative";
        }

        private void toolStripComboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            //값이 비어있을때 오류가 발생하므로 예외처리
            if (pictureBox1.Image == null)
            {
                MessageBox.Show("select image first!");
            }
            else
            {
                if (toolStripComboBox1.Text == "Brightness")
                {
                    pp.Photo.Bitmap = Brightness.ProcessBrightness(pp.Photo.Bitmap);
                    pictureBox1.Image = pp.Photo.Bitmap;
                }
                else if (toolStripComboBox1.Text == "Grayscale")
                {
                    pp.Photo.Bitmap = Grayscale.ProcessGraysacle(pp.Photo.Bitmap);
                    pictureBox1.Image = pp.Photo.Bitmap;

                }
                else if (toolStripComboBox1.Text == "Negative")
                {
                    pp.Photo.Bitmap = Negative.ProcessNegative(pp.Photo.Bitmap);
                    pictureBox1.Image = pp.Photo.Bitmap;

                }
            }

        }


    }
}
