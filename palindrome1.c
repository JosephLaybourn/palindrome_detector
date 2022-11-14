/*******************************************************************************
filename    palindrome1.c
author      Joey Laybourn
DP email    j.laybourn@digipen.edu
course      CS120
section     A
assignment  3
due date    10/24/2017

Brief Description:
Given an array of characters, determine if it's a palindrome using array
subscripting. Returns 1 (true) if the phrase is a palindrome and 0 if not.
*******************************************************************************/

/******************************************************************************
       Function: is_palindrome1

    Description: Determines if a word is a palendrome or not

         Inputs: phrase - the array being tested
                 length - length of the array

        Outputs: 1 or 0 depending on whether the given word
                 is a palindrome or not
******************************************************************************/
int is_palindrome1(const char phrase[], int length)
{
  int i;                                                      /*loop variable*/

  for (i = 0; i < length / 2; i++)  /*loops half the times as the word length*/
  {
    char start = phrase[i];                /*first letter going to the middle*/
    char end = phrase[length - i - 1];     /*last letter going to the middle */
    if (start == end)     /*if letters are the same, try the next two letters*/
      continue;
    else                  /*if not, letters are not a palindrome so return 0 */
      return 0;
  }
  return 1;         /*if the loop ends, the word is a palindrome, so return 1*/
}