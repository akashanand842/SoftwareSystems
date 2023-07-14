## Online Banking Management System
### Key features include:  

#### Storage: All account transactional details and customer information are stored in files.  
#### Login System: Account holders must pass through a login system to access their accounts.  
#### Administrative Access: Password-protected administrative access prevents unauthorized entry.  
#### User Types: Three login types are available: normal user, joint account user, and administrator.  
#### Administrator Privileges: Administrators can add, delete, modify, and search for specific account details.  
#### Customer Interaction: Upon connecting to the server, customers are prompted for login credentials. After successful login, a menu is displayed with options such as deposit, withdraw, balance enquiry, password change, view details, and exit.  
#### Joint Account Handling: Proper file locking is implemented for joint account holders, with read lock for viewing account details and write lock for deposit and withdrawal operations.  
#### Socket Programming: The server maintains a database and serves multiple clients concurrently, allowing clients to connect and access their specific account details.  
#### System Calls: System calls are used instead of library functions for process management, file management, file locking, multithreading, and inter-process communication mechanisms.  
