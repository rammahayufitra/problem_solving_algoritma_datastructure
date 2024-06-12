package main

import (
	"fmt"
)

var input string = "eagerer"; 
var vowels string = "aiueoAIUEO";
var count int = 0;


func find(char rune, vowels string) bool{
	for _, vowel := range vowels{
		if char == vowel{
			return true;
		}
	}
	return false;
}

func main(){

	for _, char := range input {
		
		if find(char, vowels){
			count++;
		}
	}  

	fmt.Printf("%d \n", count);

}