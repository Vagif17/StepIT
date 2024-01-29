using IMDB_Search;
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

namespace IMDB_Search
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

        }

        private void titlesearchButton_Click(object sender, RoutedEventArgs e)
        {
            var searched = FindMovie.GetMovie(titlesearchTextBox.Text);
            imageone.Source = new BitmapImage (new Uri (searched.Search[0].Poster));
            imagetwo.Source = new BitmapImage (new Uri(searched.Search[1].Poster));
            imagethree.Source = new BitmapImage(new Uri(searched.Search[2].Poster));

            CinemaContext cinema = new CinemaContext();

            List<Movie> movies = new List<Movie>
            {
                new Movie { Title = searched.Search[0].Title, Year = searched.Search[0].Year},
                new Movie { Title = searched.Search[1].Title, Year = searched.Search[1].Year},
                new Movie { Title = searched.Search[2].Title, Year = searched.Search[2].Year }
            }; 

            cinema.AddRange(movies);

            cinema.SaveChanges();

        }
    }
       

}
