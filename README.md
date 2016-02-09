# EC327
Repository for programming assignments in EC327. If you are a contributor to this repository, please follow the following best practice guidelines before committing changes and pushing them out.

# IDE's
Eclipse sucks. There are far greater options out there for development environments that are free to students and you ought to make use of them. Microsoft Visual Studio Community is available for Windows
and OSX and integrates GitHub beautifully in it. The debugging engine is lovely as well. If you're not a fan of Microsoft products, JetBrains (developer of PyCharm) has a version for C++ development called, CLion.

Pick the IDE that you find provides you the best flexibility and allows you to code the fastest. Time is money.

# Using GitHub
First things first you need to install Git on your computer.

Download: http://git-scm.com/download/mac

Open Terminal and type "git --version" followed by return This will display the installed version of Git on your computer.

git config --global user.name "Your name here"
git config --global user.email "your_name@gmail.com"

Check to tsee if Git credentials key chain is installed:
git credential-osxkeychain <get|store|erase>

If you get an error, it is not installed. If no error is returned, you are set to go.

# Installing Keychain Helper
curl -s -O http://github-media-downloads.s3.amazonaws.com/osx/git-credential-osxkeychain
chmod u+x git-credential-osxkeychain
sudo mv git-credential-osxkeychain /usr/local/git/bin
git config --global credential.helper osxkeychain
git credential-osxkeychain

Nice. You should be good to go.

# Helpful Github Commands
I was going to type these out but you should really just do the CodeAcademy course on GitHub. :D
