#This code searches all the files provided via command line arguments and/or STDIN for the string "Engineering Health".
#If the string is found, it prints "Engineering Health Captured!" and exits.

my $eng = "Engineering Health";

#The empty diamond operator inside while loop works amazingly. 
#If the command line arguments are found, then the program opens those files in sequential order and gives each line for each file.
#If no command line arguments are found, it magically switches to STDIN and gives single line at a time.
while(<>) {
#Remove the trailing newline character. Although not necessary here, but a good practice
	chomp;
#Go to next line unless(if-not) we find "Engineering Health" string in our current line. Here $_ is compared against the regular expression.
#$_ is the default variable in Perl which holds the current line. The programs knows that it has to run the regular expression against $_
	next unless (/[\s\S]*$eng[\s\S]*/);
#Print "Engineering Health Captured!" Notice how the eng variable is used inside the print statement.
    print "$eng Captured!";
#Exits the while loop. Kind of a goto statement, takes the loop execution to the last statement.
    last;
}