Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  mainForm = class(Form)
    procedure encryptBtn_Click(sender: Object; e: EventArgs);
    procedure decryptBtn_Click(sender: Object; e: EventArgs);
    procedure customCodeChk_CheckedChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.mainForm.resources}
    inputBox: TextBox;
    outputBox: TextBox;
    encryptBtn: Button;
    decryptBtn: Button;
    label1: &Label;
    label2: &Label;
    modGroupBox: GroupBox;
    customCodeChk: CheckBox;
    customCodeBox: TextBox;
    wtfBtn: Button;
    customPhsChk: CheckBox;
    {$include Unit1.mainForm.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

var
  str: string;
  c: char;
  chrCode, outCode, phsSymCode, code, phs, chalk: Integer;

const
  controlSym = 945;
  
procedure mainForm.encryptBtn_Click(sender: Object; e: EventArgs);
var
  i: Integer;
begin
  
  if (outputBox.Text <> '') then outputBox.Text := '';
  if (inputBox.Text <> '') and (customCodeChk.Checked = false) then begin
    PABCSystem.Randomize;
    code := PABCSystem.Random(65536);
    phs := PABCSystem.Random(256);
    phsSymCode := controlSym + phs;
  
    str := inputBox.Text;
    outputBox.Text += ChrUnicode(code);
    outputBox.Text += ChrUnicode(phsSymCode);
    for i := 1 to length(str) do begin
      c := str[i];
      chrCode := OrdUnicode(c);
      outCode := chrCode + (code * phsSymCode);
      outputBox.Text += ChrUnicode(outCode);
    end;
  end else if (inputBox.Text <> '') and (length(customCodeBox.Text) = 1) then begin
    PABCSystem.Randomize;
    code := OrdUnicode(customCodeBox.Text[1]);
    phs := PABCSystem.Random(16);
    phsSymCode := controlSym + phs;
  
    str := inputBox.Text;
    //outputBox.Text += ChrUnicode(code);
    outputBox.Text += ChrUnicode(phsSymCode);
    for i := 1 to length(str) do begin
      c := str[i];
      chrCode := OrdUnicode(c);
      outCode := chrCode + (code * phsSymCode);
      outputBox.Text += ChrUnicode(outCode);
    end;
  end else if (inputBox.Text <> '') and (length(customCodeBox.Text) = 2) then begin
    PABCSystem.Randomize;
    code := OrdUnicode(customCodeBox.Text[1]);
    phs := OrdUnicode(customCodeBox.Text[2]);
    phsSymCode := controlSym + phs;
  
    str := inputBox.Text;
    //outputBox.Text += ChrUnicode(code);
    //outputBox.Text += ChrUnicode(phsSymCode);
    for i := 1 to length(str) do begin
      c := str[i];
      chrCode := OrdUnicode(c);
      outCode := chrCode + (code * phsSymCode);
      outputBox.Text += ChrUnicode(outCode);
    end;
  end;
end;

procedure mainForm.decryptBtn_Click(sender: Object; e: EventArgs);
var
  i: Integer;
begin
  if (outputBox.Text <> '') then outputBox.Text := '';
  if (inputBox.Text <> '') and (length(inputBox.Text) > 2) and (customCodeChk.Checked = false) then begin
    str := inputBox.Text;
    code := OrdUnicode(str[1]);
    phsSymCode := OrdUnicode(str[2]);
    phs := phsSymCode - controlSym;
    for i := 3 to length(str) do begin
      c := str[i];
      chrCode := OrdUnicode(c);
      outCode := chrCode - (code * phssymcode);
      outputBox.Text += ChrUnicode(outCode);
    end;
  end else if (inputBox.Text <> '') and (length(customCodeBox.Text) = 1) then begin
    str := inputBox.Text;
    code := OrdUnicode(customCodeBox.Text[1]);
    phsSymCode := OrdUnicode(str[1]);
    phs := phsSymCode - controlSym;
    for i := 2 to length(str) do begin
      c := str[i];
      chrCode := OrdUnicode(c);
      outCode := chrCode - (code * phssymcode);
      outputBox.Text += ChrUnicode(outCode);
    end;
  end else if (inputBox.Text <> '') and (length(customCodeBox.Text) = 2) then begin
    str := inputBox.Text;
    code := OrdUnicode(customCodeBox.Text[1]);
    phs := OrdUnicode(customCodeBox.Text[2]);
    phsSymCode := controlSym + phs;
    for i := 1 to length(str) do begin
      c := str[i];
      chrCode := OrdUnicode(c);
      outCode := chrCode - (code * phssymcode);
      outputBox.Text += ChrUnicode(outCode);
    end;
  end;
end;

procedure mainForm.customCodeChk_CheckedChanged(sender: Object; e: EventArgs);
begin
  customCodeBox.Enabled := customCodeChk.Checked;
end;

end.
