package main

import (
	"fmt"
)

var input string = "python count"; 
var count int = 0;

func main(){
	for i := 0; i<len(input); i++ {
		if input[i] == ' '{
			count = count + 1;
		}
	}
	count = count + 1;
	fmt.Printf("%d \n", count);
}