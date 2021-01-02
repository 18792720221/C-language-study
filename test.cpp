#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	template<class Type>

	void sort (Type A[],int n){
		int i;
		while(i<n-i+1){
			min=max=i;
			for(j=i+1;j<=n-i+1;++j)
			{
				if(A[j]<A[min]) min=j;
				else if(A[j]>A[max]) max=j;
			
			}
			if(min!=i) Swap(A[min],A[j]);
			if(max!=n-i+1)
			{
			if(max==i) Swap(A[min],A[n-i+1]);
			else Swap(A[max],A[n-i+1]);				
			}
			i++;
		}
	}
	
	
int main(int argc, char** argv) {
A[]=(1,2)

	
	
	
	
	
	return 0;
}
