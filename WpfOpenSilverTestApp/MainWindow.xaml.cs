using OpenSilverClassLibrary;
using System.Windows;

namespace WpfOpenSilverTestApp
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            // Enter construction logic here...
            if (lsbLogin.IsSelected == true)
            {
                grdLogin.Visibility = Visibility.Visible;
                grdAccount.Visibility = Visibility.Collapsed;
                lsbLogout.Visibility = Visibility.Collapsed;
                lsbLogin.Visibility = Visibility.Visible;


            }
            if (lsbAccount.IsSelected == true)
            {
                lsbLogout.Visibility = Visibility.Visible;
                grdAccount.Visibility = Visibility.Visible;
                grdLogin.Visibility = Visibility.Collapsed;
                lsbLogin.Visibility = Visibility.Collapsed;
            }
        }

        private void btnLogin_Click(object sender, RoutedEventArgs e)
        {

        }

        private void btnCreate_Click(object sender, RoutedEventArgs e)
        {
            User user = new User();
            user.Email = txtEmail.Text;
            user.Password = txtPasword.Password;
            user.MakeUser();
        }
    }
}