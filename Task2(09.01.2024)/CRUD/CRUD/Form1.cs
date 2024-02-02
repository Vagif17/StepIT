using Microsoft.Extensions.Configuration;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CRUD
{
    public partial class Form1 : Form
    {
        private SqlConnection conn;
        private SqlDataAdapter adapter;
        private DataSet ds;

        public Form1()
        {
            InitializeComponent();

            var builder = new ConfigurationBuilder();
            builder.AddUserSecrets<Form1>();

            var confiq = builder.Build();
            var connectionString = confiq["DefaultConnection"];

            conn = new SqlConnection(connectionString);

            conn.Open();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            using SqlCommand cmd = new SqlCommand("Select [name] from sys.tables", conn);
            using SqlDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                TablesBox.Items.Add(reader["name"]);
            }
        }


        private void GetAllBtn_Click(object sender, EventArgs e)
        {
            if (TablesBox.SelectedItem == null)
            {
                throw new Exception("Choose Table");
            }

            adapter = new($"Select * from {TablesBox.SelectedItem.ToString()}", conn);

            DataSet ds = new();
            adapter.Fill(ds);

            dataGridView1.DataSource = ds.Tables[0];

        }



        private void UpdateBtn_Click(object sender, EventArgs e)
        {
            using SqlCommandBuilder builder = new(adapter);

            DataTable table = (DataTable)dataGridView1.DataSource;

            adapter.Update(table);
        }
    }
}
