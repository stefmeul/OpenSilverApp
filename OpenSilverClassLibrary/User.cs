using System;
using System.Configuration;
using MySql.Data.MySqlClient;


namespace OpenSilverClassLibrary
{
    public class User : Account
    {
        // properties
        public int UserId { get; set; }
        public string Email { get; set; }
        public string Password { get; set; }
        public DateTime CreationDate { get; set; }

        // constructor
        public User()
        {
            UserId = -1;
            AccountId = -1;
            Email = string.Empty;
            Password = string.Empty;
            CreationDate = DateTime.Now;
        }


        // method to create new user
        public void RegisterUser()
        {

            User user = new User();
            string ConnectionString = ConfigurationManager.ConnectionStrings["connectionString"].ConnectionString;
            using (MySqlConnection connection = new MySqlConnection(ConnectionString))
            {
                connection.Open();
                MySqlTransaction transaction = connection.BeginTransaction();

                try
                {

                    string userQuery = "INSERT INTO opensilverdb.users (email,password,creationDate) VALUES (@email,@password,@creationdate)";
                    MySqlCommand cmd = new MySqlCommand(userQuery, connection, transaction);
                    cmd.Parameters.AddWithValue("@email", Email);
                    cmd.Parameters.AddWithValue("@password", Password);
                    cmd.Parameters.AddWithValue("@creationDate", CreationDate);
                    cmd.ExecuteNonQuery();

                    UserId = Convert.ToInt32(cmd.LastInsertedId);

                    string accountQuery = "insert into opensilverdb.accounts (userId,balance,transactionDateTime) values (@userid,@balance,@transactiondatetime)";
                    MySqlCommand cmd2 = new MySqlCommand(accountQuery, connection, transaction);

                    cmd2.Parameters.AddWithValue("@userid", UserId);
                    cmd2.Parameters.AddWithValue("@balance", Balance);
                    cmd2.Parameters.AddWithValue("@transactiondatetime", TransactionDateTime);
                    cmd2.ExecuteNonQuery();

                    transaction.Commit();
                }
                catch (Exception ex)
                {
                    transaction.Rollback();

                    throw ex;
                }
                finally
                {
                    connection.Close();
                }
            }

        }
    }
}
