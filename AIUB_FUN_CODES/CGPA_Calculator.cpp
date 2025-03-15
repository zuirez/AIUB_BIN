#include <bits/stdc++.h>
using namespace std;

int main() 
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  cout << "       AIUB's Grading System V3" << endl << endl;
  cout << "Numerical %" << "   " << "Letter Grade" << "   " << "Grade Point" << endl
       << "  90 - 100 " << "   " << "     A+     " << "   " << "    4.00   " << endl
       << "  85 -< 90 " << "   " << "     A      " << "   " << "    3.75   " << endl
       << "  80 -< 85 " << "   " << "     B+     " << "   " << "    3.50   " << endl
       << "  75 -< 80 " << "   " << "     B      " << "   " << "    3.25   " << endl
       << "  70 -< 75 " << "   " << "     C+     " << "   " << "    3.00   " << endl
       << "  65 -< 70 " << "   " << "     C      " << "   " << "    2.75   " << endl
       << "  60 -< 65 " << "   " << "     D+     " << "   " << "    2.50   " << endl
       << "  50 -< 60 " << "   " << "     D      " << "   " << "    2.25   " << endl
       << "      < 50 " << "   " << "     F      " << "   " << "    0.00   " << endl
   ;    
  
  int n, i = 0;
  double credit = 0, cgpa = 0, temp = 0, credit_cnt = 0;
         
  cout << endl << "Total course/s : " << endl;
  cin >> n;
         
  vector<double> v;
  
  while(n--) 
  {
    i++;
    cout << endl << "Enter your course " << i << " cgpa & credit : " << endl;
    cin >> cgpa >> credit;
    
    credit_cnt += credit;
    temp = credit * cgpa;
    v.push_back(temp);
  }
    
  double sum = 0;
  for(int i = 0; i < v.size(); i++) 
     sum += v[i];
 
  double result = sum / credit_cnt;
  
  cout << endl << "Your total cgpa is " << fixed << setprecision(2) << result
       << endl << "And your grade is ";
      
  if(result == 0.0) 
     cout << "F" << endl;
  else if(result > 0.0 && result <= 2.25) 
     cout << "D" << endl;
  else if(result > 2.25 && result <= 2.50) 
     cout << "D+" << endl;
  else if(result > 2.50 && result <= 2.75) 
     cout << "C" << endl;
  else if(result > 2.75 && result <= 3.00) 
     cout << "C+" << endl;
  else if(result > 3.00 && result <= 3.25) 
     cout << "B" << endl;
  else if(result > 3.25 && result <= 3.50) 
     cout << "B+" << endl;
  else if(result > 3.50 && result <= 3.75) 
     cout << "A" << endl;
  else if(result > 3.75 && result <= 4.00) 
     cout << "A+" << endl;
       
  cout << endl << "Don't stop until you're 1% \\(^o^)/" << endl;
}
