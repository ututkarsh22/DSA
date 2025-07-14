
      int left = 0,right = 0;

      if(s<mini)
      mini = 1;
    
     left = abs(s - mini);
     right = abs(s - maxi);

      int ans = left + right + min(left,right);
      cout << ans << endl;
    }
