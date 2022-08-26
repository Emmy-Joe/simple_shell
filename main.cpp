#include <unistd.h>
extern char *environ[];
#include <iostream>

using namespace std; //introduces namespace std
int main( void )
{
	string theLine;
	int argc;
	char* argv[100];
	// Initialization stuff
	while (true)
	{
		cout << "BobShell> ";
		getline(cin,theLine);
		cout << "Command was: " << theLine << endl;
		if ((theLine == "exit") || cin.eof())
		{
			exit(0);
		}
		if (fork() == 0)
		{
			execvp(<fullpathnameofcommand>, argv);
		}
		// Parent
		else
		{
			int status=0;
			wait(&status);
			cout << "Child exited with status of " << status << endl;
		}
	}
}
