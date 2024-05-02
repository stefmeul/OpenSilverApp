using System;
using System.Collections.Generic;
using System.Text;

namespace OpenSilverClassLibrary
{
    internal static class Model
    {
        // properties
        public static List<User> Users { get; set; }
        public static List<Account> Accounts { get; set; }

        // constructor
        static Model()
        {
            Users = new List<User>();
            Accounts = new List<Account>();
        }
    }
}
