# CP with cpp

# For Windows
 To download MinGW:
 https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/
 
 After installing select
  mingw32-gcc-g++-bin
   mark for installation
   select installation in top menubar --> Apply changes
 
 Open Power shell 
  check using:
   g++ --version
  
  if error is thrown:
   open environment variables and add the path:
    C:\MinGW\bin
   

# For mac
To install homebrew:
 https://brew.sh/
 
 To install gcc in OS X :
  brew install gcc

To install gtimout in OS X :
  brew install coreutils

To check if installed on OS X:
  gcc-9 -v
  
  
 # For linux
  Check your compiler using:
   g++ --version
  
  If not found:
   sudo apt install g++
