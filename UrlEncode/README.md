## Overview ##
A URL-encoding library with a "full" mode for encoding url parameters, as well as a "light" mode that ignores "=", "?", and "&" characters.  

## Example ##
Light mode:  
Input: https://www.google.com/search?q=$$rt(())kh7iwkf7 @el jnk os  
Output: https://www.google.com/search?q=%24%24rt%28%28%29%29kh7iwkf7%20%40el%20jnk%20o  
Full mode:  
Input: VGVzdGluZyB*YXNlN+jQt/b2RlZCBzdHJpbmdzI?z?IHBhcmFtZXRlcnM=  
Output: VGVzdGluZyB%2AYXNlN%2BjQt%2Fb2RlZCBzdHJpbmdzI%3Fz%3FIHBhcmFtZXRlcnM%3  
