public class AddressBook
    {
        private string ownerName;
        private string info;
        private Contact[] listOfContact;
        private int totalContact;

        // Properties
        public string OwnerName { get => ownerName; set => ownerName = value; }
        public string Info { get => info; set => info = value; }
        public Contact[] ListOfContact { get => listOfContact; set => listOfContact = value; }
        public int TotalContact { get => totalContact; set => totalContact = value; }

        // Constructors
        public AddressBook()
        {
            listOfContact = new Contact[100];
            totalContact = 0;
        }
        public AddressBook(string owner, string info)
        {
            this.ownerName = owner;
            this.info = info;
            listOfContact = new Contact[100];
            totalContact = 0;
        }

        // Methods
        public void ShowAllContactInfo()
        {
            Console.WriteLine($"AddressBook Owner: {ownerName}, Info: {info}, Total Contacts: {totalContact}");
            for (int i = 0; i < totalContact; i++)
            {
                listOfContact[i].ShowPersonInfo();
            }
        }

        public void AddContact(Contact con)
        {
            listOfContact[totalContact++] = con;
            Console.WriteLine("Contact added.");
        }

        public void DeleteContact(Contact con)
        {
            for (int i = 0; i < totalContact; i++)
            {
                if (listOfContact[i] == con)
                {
                    for (int j = i; j < totalContact - 1; j++)
                        listOfContact[j] = listOfContact[j + 1];
                    totalContact--;
                    Console.WriteLine("Contact deleted.");
                    return;
                }
            }
        }
    }
}