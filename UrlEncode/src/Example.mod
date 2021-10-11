MODULE Example;
FROM UrlEncode
  IMPORT
    urlString,
    UrlEncodeFull,
    UrlEncodeLight;
FROM InOut
  IMPORT
    WriteString,
    WriteLn;

VAR
  normalString: urlString;
  encodedString: urlString;

BEGIN;
  normalString:= "https://www.google.com/search?q=$$rt(())kh7iwkf7 @el jnk os";
  encodedString:= UrlEncodeLight(normalString);
  WriteString("Input: "); WriteString(normalString); WriteLn();
  WriteString("Output: "); WriteString(encodedString); WriteLn();

  normalString:= "VGVzdGluZyB*YXNlN+jQt/b2RlZCBzdHJpbmdzI?z?IHBhcmFtZXRlcnM=";
  encodedString:= UrlEncodeFull(normalString);
  WriteString("Input: "); WriteString(normalString); WriteLn();
  WriteString("Output: "); WriteString(encodedString); WriteLn();
END Example.
