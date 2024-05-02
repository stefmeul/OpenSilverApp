using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using OpenSilverClassLibrary;
using Org.BouncyCastle.Security;

namespace OpenSilverApp
{
    public partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();

            // Enter construction logic here...
            grdLogin.Visibility = Visibility.Visible;
            grdAccount.Visibility = Visibility.Collapsed;
        
        }

        private void btnLogin_Click(object sender, RoutedEventArgs e)
        {
            //
        }

        private void btnCreate_Click(object sender, RoutedEventArgs e)
        {
            User user = new User();
            user.Email = txtEmail.Text;
            user.Password = txtPasword.Password;
            user.RegisterUser();
            txtEmail.Text = string.Empty;
            txtPasword.Password = string.Empty;
        }
    }
}
