using System;
using System.Collections.Generic;
using System.Text;

namespace OpenSilverClassLibrary
{
    public class Account
    {
        // properties
        public int AccountId { get; set; }
        public decimal Balance { get; set; }
        public DateTime TransactionDateTime { get; set; }

        // con
        public Account() 
        {
            AccountId = -1;
            Balance = -1;
            TransactionDateTime = DateTime.MinValue;
        }
    }
}
