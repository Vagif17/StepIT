namespace CRUD
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            dataGridView1 = new DataGridView();
            UpdateBtn = new Button();
            TablesBox = new ComboBox();
            GetAllBtn = new Button();
            backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(0, 0);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowHeadersWidth = 51;
            dataGridView1.Size = new Size(798, 283);
            dataGridView1.TabIndex = 0;
            // 
            // UpdateBtn
            // 
            UpdateBtn.Location = new Point(211, 348);
            UpdateBtn.Name = "UpdateBtn";
            UpdateBtn.Size = new Size(183, 90);
            UpdateBtn.TabIndex = 3;
            UpdateBtn.Text = "Update";
            UpdateBtn.UseVisualStyleBackColor = true;
            UpdateBtn.Click += UpdateBtn_Click;
            // 
            // TablesBox
            // 
            TablesBox.FormattingEnabled = true;
            TablesBox.Location = new Point(0, 279);
            TablesBox.Name = "TablesBox";
            TablesBox.Size = new Size(798, 28);
            TablesBox.TabIndex = 4;
            // 
            // GetAllBtn
            // 
            GetAllBtn.Location = new Point(419, 348);
            GetAllBtn.Name = "GetAllBtn";
            GetAllBtn.Size = new Size(183, 90);
            GetAllBtn.TabIndex = 5;
            GetAllBtn.Text = "Get All";
            GetAllBtn.UseVisualStyleBackColor = true;
            GetAllBtn.Click += GetAllBtn_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(GetAllBtn);
            Controls.Add(TablesBox);
            Controls.Add(UpdateBtn);
            Controls.Add(dataGridView1);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ((System.ComponentModel.ISupportInitialize)dataGridView1).EndInit();
            ResumeLayout(false);
        }

        #endregion

        private DataGridView dataGridView1;
        private Button UpdateBtn;
        private ComboBox TablesBox;
        private Button GetAllBtn;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
    }
}
