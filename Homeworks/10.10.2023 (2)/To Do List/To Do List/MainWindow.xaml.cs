
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace To_Do_List
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {

        List<ToDo> list = new();

        
        public MainWindow()
        {
            InitializeComponent();
        }

        private void addBtn_Click(object sender, RoutedEventArgs e)
        {

            if (datetaskPicker.SelectedDate == null || titlenameBox.Text == null || describtionsBox.Text == null) { return; }

            ToDo tmp = new();

            tmp.Date = datetaskPicker.SelectedDate;
            tmp.Title = titlenameBox.Text;
            tmp.Describtion = describtionsBox.Text;

            tasksListBox.Items.Add(tmp);

        }
    }

   
    class ToDo
    {
        public String Title { get; set; }
        
        public DateTime? Date { get; set; }
        
        public String Describtion { get; set; }


        public ToDo() { }

        public override string ToString()
        {
            return $"Title : {Title}\t Date : {Date}\t Describtions : {Describtion}";
        }
    }
}
