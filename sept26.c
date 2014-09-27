int f(int k,char c){return k?f(k-printf("%c",c),c):1;}
int main(){
	char m[]="nnjfenjddddeeeeeeeeeedeeeeeeeeeedeeeeeeeeeedeeeeeeeeeedenkeeenkdddeeeeeeeeeedeeeeeeeeeedeeeeeeeeeedeeeeeeeeeednneeefneed";
	char n[]="iinniidddrrimemirirrjlflirjrrjlgkirjrrjlhjirjrimiiiiddrrimjhirirrjlkgirjrrkklfirkrrljmeirliiminiimd";
	int i,j,k,l;
	for(i=0;i<11;i++,l=j=k=0,printf("\n"))
		while(m[i*11+j]-100)
			k?k^=f(n[i*9+l]-(1<<6)-36,1<<5),l++:(k^=f(m[i*11+j]-(1<<7)+28,35),j++);
	return 0;
}