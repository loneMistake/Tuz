object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 909
  ClientWidth = 1190
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 464
    Top = 184
    Width = 34
    Height = 15
    Caption = 'Label1'
  end
  object Label2: TLabel
    Left = 456
    Top = 411
    Width = 34
    Height = 15
    Caption = 'Label2'
  end
  object Label3: TLabel
    Left = 464
    Top = 280
    Width = 34
    Height = 15
    Caption = 'Label3'
  end
  object Label4: TLabel
    Left = 456
    Top = 331
    Width = 34
    Height = 15
    Caption = 'Label4'
  end
  object Edit1: TEdit
    Left = 456
    Top = 224
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 456
    Top = 432
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object Button1: TButton
    Left = 456
    Top = 480
    Width = 129
    Height = 25
    Caption = 'Button1'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Edit3: TEdit
    Left = 456
    Top = 301
    Width = 121
    Height = 23
    TabOrder = 3
    Text = 'Edit3'
  end
  object Edit4: TEdit
    Left = 456
    Top = 368
    Width = 121
    Height = 23
    TabOrder = 4
    Text = 'Edit4'
  end
  object qu: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from users;')
    Left = 784
    Top = 176
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Password="";Data Source=C:\User' +
      's\Max\Desktop\e\Win32\Debug\data_base.mdb;Persist Security Info=' +
      'True'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 608
    Top = 88
  end
end