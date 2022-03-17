int binary_to_number (int binary_digits[], int number_of_digits)
{
  int number = 0; 
  
  for (int i = 0; i < number_of_digits; i++)
    {
     int place_value = 1;
      for (int j = 0; j < i; j++)
	{
	  place_value = place_value * 2;
	} 
	number = number + (binary_digits[number_of_digits-(i+1)] * place_value);
    }
  return number;
}
