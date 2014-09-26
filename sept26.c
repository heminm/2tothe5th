/* check http://ideone.com/Nne6G9 for output */
int f(int k,char c){return k?f(k-printf("%c",c),c):0;}
int main(){
	char m[]="nnjfenjddddeeeeeeeeeedeeeeeeeeeedeeeeeeeeeedeeeeeeeeeedenkeeenkdddeeeeeeeeeedeeeeeeeeeedeeeeeeeeeedeeeeeeeeeednneeefneed";
	char n[]="iinniidddrrimemirirrjlflirjrrjlgkirjrrjlhjirjrimiiiiddrrimjhirirrjlkgirjrrkklfirjrrljmeirliiminiimd";
	int i,j,k,l;
	for(i=0;i<11;i++,l=j=k=0,printf("\n"))
		while(m[i*11+j]-100)
			k?f(n[i*9+l]-(1<<6)-36,1<<5),l++,k^=1:(f(m[i*11+j]-(1<<7)+28,35),j++,k^=1);
	return 0;
}