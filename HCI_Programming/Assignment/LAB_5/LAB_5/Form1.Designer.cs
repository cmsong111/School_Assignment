
namespace LAB_5
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.Age_input_group_box = new System.Windows.Forms.GroupBox();
            this.TargetDay_Label = new System.Windows.Forms.Label();
            this.BirthDayLabel = new System.Windows.Forms.Label();
            this.Timepick_targetday = new System.Windows.Forms.DateTimePicker();
            this.Timepick_bitrhday = new System.Windows.Forms.DateTimePicker();
            this.Age_groupbox = new System.Windows.Forms.GroupBox();
            this.AgeError = new System.Windows.Forms.Label();
            this.AgeResult_GroupBox = new System.Windows.Forms.GroupBox();
            this.AgeSeconds = new System.Windows.Forms.Label();
            this.AgeMinutes = new System.Windows.Forms.Label();
            this.AgeHours = new System.Windows.Forms.Label();
            this.AgeDays = new System.Windows.Forms.Label();
            this.AgeWeeksToDays = new System.Windows.Forms.Label();
            this.AgeMonthsToDays = new System.Windows.Forms.Label();
            this.AgeYearToDays = new System.Windows.Forms.Label();
            this.Result_label1 = new System.Windows.Forms.Label();
            this.AgeCal_button = new System.Windows.Forms.Button();
            this.DateCalGroup = new System.Windows.Forms.GroupBox();
            this.DateResultGroup = new System.Windows.Forms.GroupBox();
            this.DateExplain = new System.Windows.Forms.Label();
            this.DateResultLabel = new System.Windows.Forms.Label();
            this.DateCalBottun = new System.Windows.Forms.Button();
            this.Date_input_group_box = new System.Windows.Forms.GroupBox();
            this.DateExplain4 = new System.Windows.Forms.Label();
            this.DateExplain3 = new System.Windows.Forms.Label();
            this.DateExplain2 = new System.Windows.Forms.Label();
            this.DateExplain1 = new System.Windows.Forms.Label();
            this.DatdCal_WhatDo = new System.Windows.Forms.ComboBox();
            this.DateCal_Days = new System.Windows.Forms.TextBox();
            this.DateCal_weeks = new System.Windows.Forms.TextBox();
            this.DateCal_Months = new System.Windows.Forms.TextBox();
            this.DateCal_Years = new System.Windows.Forms.TextBox();
            this.Start_Date = new System.Windows.Forms.Label();
            this.Timepick_StartDay = new System.Windows.Forms.DateTimePicker();
            this.Age_input_group_box.SuspendLayout();
            this.Age_groupbox.SuspendLayout();
            this.AgeResult_GroupBox.SuspendLayout();
            this.DateCalGroup.SuspendLayout();
            this.DateResultGroup.SuspendLayout();
            this.Date_input_group_box.SuspendLayout();
            this.SuspendLayout();
            // 
            // Age_input_group_box
            // 
            this.Age_input_group_box.Controls.Add(this.TargetDay_Label);
            this.Age_input_group_box.Controls.Add(this.BirthDayLabel);
            this.Age_input_group_box.Controls.Add(this.Timepick_targetday);
            this.Age_input_group_box.Controls.Add(this.Timepick_bitrhday);
            this.Age_input_group_box.ImeMode = System.Windows.Forms.ImeMode.On;
            this.Age_input_group_box.Location = new System.Drawing.Point(15, 31);
            this.Age_input_group_box.Name = "Age_input_group_box";
            this.Age_input_group_box.Size = new System.Drawing.Size(244, 164);
            this.Age_input_group_box.TabIndex = 0;
            this.Age_input_group_box.TabStop = false;
            this.Age_input_group_box.Text = "Age input";
            // 
            // TargetDay_Label
            // 
            this.TargetDay_Label.Location = new System.Drawing.Point(23, 104);
            this.TargetDay_Label.Name = "TargetDay_Label";
            this.TargetDay_Label.Size = new System.Drawing.Size(115, 12);
            this.TargetDay_Label.TabIndex = 3;
            this.TargetDay_Label.Text = "Age at the Date of\t";
            // 
            // BirthDayLabel
            // 
            this.BirthDayLabel.AutoSize = true;
            this.BirthDayLabel.Location = new System.Drawing.Point(23, 33);
            this.BirthDayLabel.Name = "BirthDayLabel";
            this.BirthDayLabel.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.BirthDayLabel.Size = new System.Drawing.Size(73, 12);
            this.BirthDayLabel.TabIndex = 2;
            this.BirthDayLabel.Text = "Date of Birth";
            // 
            // Timepick_targetday
            // 
            this.Timepick_targetday.Location = new System.Drawing.Point(23, 119);
            this.Timepick_targetday.Name = "Timepick_targetday";
            this.Timepick_targetday.Size = new System.Drawing.Size(200, 21);
            this.Timepick_targetday.TabIndex = 1;
            // 
            // Timepick_bitrhday
            // 
            this.Timepick_bitrhday.Location = new System.Drawing.Point(23, 51);
            this.Timepick_bitrhday.Name = "Timepick_bitrhday";
            this.Timepick_bitrhday.Size = new System.Drawing.Size(200, 21);
            this.Timepick_bitrhday.TabIndex = 0;
            // 
            // Age_groupbox
            // 
            this.Age_groupbox.Controls.Add(this.AgeError);
            this.Age_groupbox.Controls.Add(this.AgeResult_GroupBox);
            this.Age_groupbox.Controls.Add(this.AgeCal_button);
            this.Age_groupbox.Controls.Add(this.Age_input_group_box);
            this.Age_groupbox.Location = new System.Drawing.Point(12, 12);
            this.Age_groupbox.Name = "Age_groupbox";
            this.Age_groupbox.Size = new System.Drawing.Size(683, 232);
            this.Age_groupbox.TabIndex = 0;
            this.Age_groupbox.TabStop = false;
            this.Age_groupbox.Text = "Age Calculator";
            // 
            // AgeError
            // 
            this.AgeError.AutoSize = true;
            this.AgeError.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(0)))));
            this.AgeError.Location = new System.Drawing.Point(13, 207);
            this.AgeError.Name = "AgeError";
            this.AgeError.Size = new System.Drawing.Size(302, 12);
            this.AgeError.TabIndex = 3;
            this.AgeError.Text = "Date of birth needs to be earlier than the age at date.";
            this.AgeError.Visible = false;
            // 
            // AgeResult_GroupBox
            // 
            this.AgeResult_GroupBox.Controls.Add(this.AgeSeconds);
            this.AgeResult_GroupBox.Controls.Add(this.AgeMinutes);
            this.AgeResult_GroupBox.Controls.Add(this.AgeHours);
            this.AgeResult_GroupBox.Controls.Add(this.AgeDays);
            this.AgeResult_GroupBox.Controls.Add(this.AgeWeeksToDays);
            this.AgeResult_GroupBox.Controls.Add(this.AgeMonthsToDays);
            this.AgeResult_GroupBox.Controls.Add(this.AgeYearToDays);
            this.AgeResult_GroupBox.Controls.Add(this.Result_label1);
            this.AgeResult_GroupBox.Location = new System.Drawing.Point(404, 31);
            this.AgeResult_GroupBox.Name = "AgeResult_GroupBox";
            this.AgeResult_GroupBox.Size = new System.Drawing.Size(244, 164);
            this.AgeResult_GroupBox.TabIndex = 2;
            this.AgeResult_GroupBox.TabStop = false;
            this.AgeResult_GroupBox.Text = "Result";
            this.AgeResult_GroupBox.Visible = false;
            // 
            // AgeSeconds
            // 
            this.AgeSeconds.AutoSize = true;
            this.AgeSeconds.Location = new System.Drawing.Point(12, 133);
            this.AgeSeconds.Name = "AgeSeconds";
            this.AgeSeconds.Size = new System.Drawing.Size(55, 12);
            this.AgeSeconds.TabIndex = 7;
            this.AgeSeconds.Text = "Seconds";
            this.AgeSeconds.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // AgeMinutes
            // 
            this.AgeMinutes.AutoSize = true;
            this.AgeMinutes.Location = new System.Drawing.Point(12, 117);
            this.AgeMinutes.Name = "AgeMinutes";
            this.AgeMinutes.Size = new System.Drawing.Size(50, 12);
            this.AgeMinutes.TabIndex = 6;
            this.AgeMinutes.Text = "Minutes";
            // 
            // AgeHours
            // 
            this.AgeHours.AutoSize = true;
            this.AgeHours.Location = new System.Drawing.Point(12, 101);
            this.AgeHours.Name = "AgeHours";
            this.AgeHours.Size = new System.Drawing.Size(38, 12);
            this.AgeHours.TabIndex = 5;
            this.AgeHours.Text = "Hours";
            // 
            // AgeDays
            // 
            this.AgeDays.AutoSize = true;
            this.AgeDays.Location = new System.Drawing.Point(12, 85);
            this.AgeDays.Name = "AgeDays";
            this.AgeDays.Size = new System.Drawing.Size(34, 12);
            this.AgeDays.TabIndex = 4;
            this.AgeDays.Text = "Days";
            // 
            // AgeWeeksToDays
            // 
            this.AgeWeeksToDays.AutoSize = true;
            this.AgeWeeksToDays.Location = new System.Drawing.Point(12, 69);
            this.AgeWeeksToDays.Name = "AgeWeeksToDays";
            this.AgeWeeksToDays.Size = new System.Drawing.Size(86, 12);
            this.AgeWeeksToDays.TabIndex = 3;
            this.AgeWeeksToDays.Text = "WeeksToDays";
            // 
            // AgeMonthsToDays
            // 
            this.AgeMonthsToDays.AutoSize = true;
            this.AgeMonthsToDays.Location = new System.Drawing.Point(12, 51);
            this.AgeMonthsToDays.Name = "AgeMonthsToDays";
            this.AgeMonthsToDays.Size = new System.Drawing.Size(91, 12);
            this.AgeMonthsToDays.TabIndex = 2;
            this.AgeMonthsToDays.Text = "MonthsToDays";
            // 
            // AgeYearToDays
            // 
            this.AgeYearToDays.AutoSize = true;
            this.AgeYearToDays.Location = new System.Drawing.Point(12, 33);
            this.AgeYearToDays.Name = "AgeYearToDays";
            this.AgeYearToDays.Size = new System.Drawing.Size(75, 12);
            this.AgeYearToDays.TabIndex = 1;
            this.AgeYearToDays.Text = "YearToDays";
            this.AgeYearToDays.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Result_label1
            // 
            this.Result_label1.AutoSize = true;
            this.Result_label1.Location = new System.Drawing.Point(6, 17);
            this.Result_label1.Name = "Result_label1";
            this.Result_label1.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.Result_label1.Size = new System.Drawing.Size(31, 12);
            this.Result_label1.TabIndex = 0;
            this.Result_label1.Text = "Age:";
            // 
            // AgeCal_button
            // 
            this.AgeCal_button.Location = new System.Drawing.Point(292, 100);
            this.AgeCal_button.Name = "AgeCal_button";
            this.AgeCal_button.Size = new System.Drawing.Size(75, 23);
            this.AgeCal_button.TabIndex = 1;
            this.AgeCal_button.Text = "Calculate";
            this.AgeCal_button.UseVisualStyleBackColor = true;
            this.AgeCal_button.Click += new System.EventHandler(this.Age_CalBuntton);
            // 
            // DateCalGroup
            // 
            this.DateCalGroup.Controls.Add(this.DateResultGroup);
            this.DateCalGroup.Controls.Add(this.DateCalBottun);
            this.DateCalGroup.Controls.Add(this.Date_input_group_box);
            this.DateCalGroup.Location = new System.Drawing.Point(12, 261);
            this.DateCalGroup.Name = "DateCalGroup";
            this.DateCalGroup.Size = new System.Drawing.Size(683, 227);
            this.DateCalGroup.TabIndex = 1;
            this.DateCalGroup.TabStop = false;
            this.DateCalGroup.Text = "Date Calculaor";
            // 
            // DateResultGroup
            // 
            this.DateResultGroup.Controls.Add(this.DateExplain);
            this.DateResultGroup.Controls.Add(this.DateResultLabel);
            this.DateResultGroup.Location = new System.Drawing.Point(292, 95);
            this.DateResultGroup.Name = "DateResultGroup";
            this.DateResultGroup.Size = new System.Drawing.Size(385, 111);
            this.DateResultGroup.TabIndex = 4;
            this.DateResultGroup.TabStop = false;
            this.DateResultGroup.Text = "Result";
            this.DateResultGroup.Visible = false;
            // 
            // DateExplain
            // 
            this.DateExplain.AutoSize = true;
            this.DateExplain.Location = new System.Drawing.Point(14, 43);
            this.DateExplain.Name = "DateExplain";
            this.DateExplain.Size = new System.Drawing.Size(78, 12);
            this.DateExplain.TabIndex = 9;
            this.DateExplain.Text = "Appear Soon";
            this.DateExplain.Click += new System.EventHandler(this.DateMonthsToDays_Click);
            // 
            // DateResultLabel
            // 
            this.DateResultLabel.AutoSize = true;
            this.DateResultLabel.FlatStyle = System.Windows.Forms.FlatStyle.System;
            this.DateResultLabel.Font = new System.Drawing.Font("굴림", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.DateResultLabel.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(192)))), ((int)(((byte)(0)))));
            this.DateResultLabel.Location = new System.Drawing.Point(12, 21);
            this.DateResultLabel.Name = "DateResultLabel";
            this.DateResultLabel.Size = new System.Drawing.Size(127, 19);
            this.DateResultLabel.TabIndex = 8;
            this.DateResultLabel.Text = "Appear Soon";
            this.DateResultLabel.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            // 
            // DateCalBottun
            // 
            this.DateCalBottun.Location = new System.Drawing.Point(292, 45);
            this.DateCalBottun.Name = "DateCalBottun";
            this.DateCalBottun.Size = new System.Drawing.Size(75, 23);
            this.DateCalBottun.TabIndex = 3;
            this.DateCalBottun.Text = "Calculate";
            this.DateCalBottun.UseVisualStyleBackColor = true;
            this.DateCalBottun.Click += new System.EventHandler(this.DateCalBottun_Click);
            // 
            // Date_input_group_box
            // 
            this.Date_input_group_box.Controls.Add(this.DateExplain4);
            this.Date_input_group_box.Controls.Add(this.DateExplain3);
            this.Date_input_group_box.Controls.Add(this.DateExplain2);
            this.Date_input_group_box.Controls.Add(this.DateExplain1);
            this.Date_input_group_box.Controls.Add(this.DatdCal_WhatDo);
            this.Date_input_group_box.Controls.Add(this.DateCal_Days);
            this.Date_input_group_box.Controls.Add(this.DateCal_weeks);
            this.Date_input_group_box.Controls.Add(this.DateCal_Months);
            this.Date_input_group_box.Controls.Add(this.DateCal_Years);
            this.Date_input_group_box.Controls.Add(this.Start_Date);
            this.Date_input_group_box.Controls.Add(this.Timepick_StartDay);
            this.Date_input_group_box.Location = new System.Drawing.Point(15, 29);
            this.Date_input_group_box.Name = "Date_input_group_box";
            this.Date_input_group_box.Size = new System.Drawing.Size(244, 177);
            this.Date_input_group_box.TabIndex = 2;
            this.Date_input_group_box.TabStop = false;
            this.Date_input_group_box.Text = "Date Input";
            // 
            // DateExplain4
            // 
            this.DateExplain4.AutoSize = true;
            this.DateExplain4.Location = new System.Drawing.Point(172, 150);
            this.DateExplain4.Name = "DateExplain4";
            this.DateExplain4.Size = new System.Drawing.Size(34, 12);
            this.DateExplain4.TabIndex = 11;
            this.DateExplain4.Text = "Days";
            // 
            // DateExplain3
            // 
            this.DateExplain3.AutoSize = true;
            this.DateExplain3.Location = new System.Drawing.Point(172, 123);
            this.DateExplain3.Name = "DateExplain3";
            this.DateExplain3.Size = new System.Drawing.Size(42, 12);
            this.DateExplain3.TabIndex = 10;
            this.DateExplain3.Text = "Weeks";
            // 
            // DateExplain2
            // 
            this.DateExplain2.AutoSize = true;
            this.DateExplain2.Location = new System.Drawing.Point(172, 96);
            this.DateExplain2.Name = "DateExplain2";
            this.DateExplain2.Size = new System.Drawing.Size(47, 12);
            this.DateExplain2.TabIndex = 9;
            this.DateExplain2.Text = "Months";
            // 
            // DateExplain1
            // 
            this.DateExplain1.AutoSize = true;
            this.DateExplain1.Location = new System.Drawing.Point(171, 69);
            this.DateExplain1.Name = "DateExplain1";
            this.DateExplain1.Size = new System.Drawing.Size(38, 12);
            this.DateExplain1.TabIndex = 8;
            this.DateExplain1.Text = "Years";
            this.DateExplain1.Click += new System.EventHandler(this.label1_Click);
            // 
            // DatdCal_WhatDo
            // 
            this.DatdCal_WhatDo.FormattingEnabled = true;
            this.DatdCal_WhatDo.Items.AddRange(new object[] {
            "+",
            "-"});
            this.DatdCal_WhatDo.Location = new System.Drawing.Point(18, 106);
            this.DatdCal_WhatDo.Name = "DatdCal_WhatDo";
            this.DatdCal_WhatDo.Size = new System.Drawing.Size(41, 20);
            this.DatdCal_WhatDo.TabIndex = 7;
            this.DatdCal_WhatDo.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
            // 
            // DateCal_Days
            // 
            this.DateCal_Days.Location = new System.Drawing.Point(65, 147);
            this.DateCal_Days.Name = "DateCal_Days";
            this.DateCal_Days.Size = new System.Drawing.Size(100, 21);
            this.DateCal_Days.TabIndex = 6;
            // 
            // DateCal_weeks
            // 
            this.DateCal_weeks.Location = new System.Drawing.Point(65, 120);
            this.DateCal_weeks.Name = "DateCal_weeks";
            this.DateCal_weeks.Size = new System.Drawing.Size(100, 21);
            this.DateCal_weeks.TabIndex = 5;
            // 
            // DateCal_Months
            // 
            this.DateCal_Months.Location = new System.Drawing.Point(65, 93);
            this.DateCal_Months.Name = "DateCal_Months";
            this.DateCal_Months.Size = new System.Drawing.Size(100, 21);
            this.DateCal_Months.TabIndex = 4;
            // 
            // DateCal_Years
            // 
            this.DateCal_Years.Location = new System.Drawing.Point(65, 66);
            this.DateCal_Years.Name = "DateCal_Years";
            this.DateCal_Years.Size = new System.Drawing.Size(100, 21);
            this.DateCal_Years.TabIndex = 3;
            // 
            // Start_Date
            // 
            this.Start_Date.AutoSize = true;
            this.Start_Date.Location = new System.Drawing.Point(21, 21);
            this.Start_Date.Name = "Start_Date";
            this.Start_Date.Size = new System.Drawing.Size(59, 12);
            this.Start_Date.TabIndex = 2;
            this.Start_Date.Text = "Start Date";
            // 
            // Timepick_StartDay
            // 
            this.Timepick_StartDay.Location = new System.Drawing.Point(23, 39);
            this.Timepick_StartDay.Name = "Timepick_StartDay";
            this.Timepick_StartDay.Size = new System.Drawing.Size(200, 21);
            this.Timepick_StartDay.TabIndex = 0;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSize = true;
            this.ClientSize = new System.Drawing.Size(713, 503);
            this.Controls.Add(this.DateCalGroup);
            this.Controls.Add(this.Age_groupbox);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
            this.Text = "Lab_5 Assingment";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.Age_input_group_box.ResumeLayout(false);
            this.Age_input_group_box.PerformLayout();
            this.Age_groupbox.ResumeLayout(false);
            this.Age_groupbox.PerformLayout();
            this.AgeResult_GroupBox.ResumeLayout(false);
            this.AgeResult_GroupBox.PerformLayout();
            this.DateCalGroup.ResumeLayout(false);
            this.DateResultGroup.ResumeLayout(false);
            this.DateResultGroup.PerformLayout();
            this.Date_input_group_box.ResumeLayout(false);
            this.Date_input_group_box.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.GroupBox Age_input_group_box;
        private System.Windows.Forms.Label TargetDay_Label;
        private System.Windows.Forms.Label BirthDayLabel;
        private System.Windows.Forms.DateTimePicker Timepick_targetday;
        private System.Windows.Forms.DateTimePicker Timepick_bitrhday;
        private System.Windows.Forms.GroupBox Age_groupbox;
        private System.Windows.Forms.Button AgeCal_button;
        private System.Windows.Forms.GroupBox AgeResult_GroupBox;
        private System.Windows.Forms.Label AgeError;
        private System.Windows.Forms.Label Result_label1;
        private System.Windows.Forms.Label AgeYearToDays;
        private System.Windows.Forms.Label AgeMonthsToDays;
        private System.Windows.Forms.Label AgeDays;
        private System.Windows.Forms.Label AgeWeeksToDays;
        private System.Windows.Forms.Label AgeHours;
        private System.Windows.Forms.Label AgeMinutes;
        private System.Windows.Forms.Label AgeSeconds;
        private System.Windows.Forms.GroupBox DateCalGroup;
        private System.Windows.Forms.DateTimePicker Timepick_StartDay;
        private System.Windows.Forms.GroupBox Date_input_group_box;
        private System.Windows.Forms.GroupBox DateResultGroup;
        private System.Windows.Forms.Button DateCalBottun;
        private System.Windows.Forms.Label Start_Date;
        private System.Windows.Forms.Label DateExplain;
        private System.Windows.Forms.Label DateResultLabel;
        private System.Windows.Forms.TextBox DateCal_weeks;
        private System.Windows.Forms.TextBox DateCal_Months;
        private System.Windows.Forms.TextBox DateCal_Years;
        private System.Windows.Forms.ComboBox DatdCal_WhatDo;
        private System.Windows.Forms.TextBox DateCal_Days;
        private System.Windows.Forms.Label DateExplain4;
        private System.Windows.Forms.Label DateExplain3;
        private System.Windows.Forms.Label DateExplain2;
        private System.Windows.Forms.Label DateExplain1;
    }
}

