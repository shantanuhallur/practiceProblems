#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>

bool isDoubleDigit(int num)
{
  if (num > 9 && num < 100)
    return true;
  else
    return false;
}

int processArray(std::vector<int> &array)
{
  // Initializing starting index to 0 to start processing the array.
  int i = 0;
  while (i < array.size() - 1)
  {
    // Checking if the consecutive elements are a 2 digit nos.
    if (isDoubleDigit(array[i]) && isDoubleDigit(array[i + 1]))
    {
      if (array[i] < array[i + 1])
      {
        array.erase(array.begin() + (i + 1));
      }
      else
      {
        array.erase(array.begin() + i);
      }
    }
    else
    {
      // Incrementing i only when we dont have to delete any consecutive element.
      i++;
    }
  }

  return array.size();
}

int main(void)
{
  std::vector<int> array;
  int val;
  while (std::cin >> val)
  {
    if (val < 0)
      break;
    array.push_back(val);
  }
  int new_len = processArray(array);
  for (std::vector<int>::iterator a = array.begin(); a != array.end(); a++)
  {
    std::cout << *a << std::endl;
  }
  return 0;
}
