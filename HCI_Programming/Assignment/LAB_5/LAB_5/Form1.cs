using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LAB_5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }


        private void Age_CalBuntton(object sender, EventArgs e)
        {
            AgeCal age = new AgeCal();
            age.birthday = Timepick_bitrhday.Value;
            age.targetday = Timepick_targetday.Value;

            //참일때
            if (age.checkerror())
            {
                AgeResult_GroupBox.Visible = true;
                AgeError.Visible = false;
                AgeYearToDays.Text = $"{Convert.ToString(age.days / 365)} years {Convert.ToString(age.days % 365 / 30)} months {Convert.ToString(age.days % 365 % 30)} days";
                AgeMonthsToDays.Text = $"or {Convert.ToString(age.days / 30)} months {Convert.ToString(age.days % 30)} days";
                AgeWeeksToDays.Text = $"or {Convert.ToString(age.days/7)} weeks {Convert.ToString(age.days%7)} days";
                AgeDays.Text = $"or {Convert.ToString(age.days)} days";
                AgeHours.Text = $"or {Convert.ToString(age.days*24)} hours";
                AgeMinutes.Text = $"or {Convert.ToString(age.days * 24 *60)} hours";
                AgeSeconds.Text = $"or {Convert.ToString(age.days * 24 * 60*60)} seconds";
            }
            //거짓일때
            else
            {
                AgeResult_GroupBox.Visible = false;
                AgeError.Visible = true;
            }


        }


        private void Form1_Load(object sender, EventArgs e)
        {
        }

        private void DateCalBottun_Click(object sender, EventArgs e)
        {
            DateResultGroup.Visible = true;
            Datecal date = new Datecal();
            date.startday = Timepick_StartDay.Value;
            if (DateCal_Months.Text != "")
                date.Month = Convert.ToInt32(DateCal_Months.Text);
            if (DateCal_Years.Text != "")
                date.Year = Convert.ToInt32(DateCal_Years.Text);
            if (DateCal_weeks.Text != "")
                date.Week = Convert.ToInt32(DateCal_weeks.Text);
            if (DateCal_Days.Text != "")
                date.Day = Convert.ToInt32(DateCal_Days.Text);

            date.calculator(DatdCal_WhatDo.Text);

            DateResultLabel.Text = Convert.ToString(date.targetday);

            DateExplain.Text = date.Resultexplain(DatdCal_WhatDo.Text);

        }


        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void DateMonthsToDays_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
