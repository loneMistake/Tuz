object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 779
  ClientWidth = 1153
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 488
    Top = 272
    Width = 34
    Height = 15
    Caption = 'Label1'
  end
  object Label2: TLabel
    Left = 488
    Top = 432
    Width = 34
    Height = 15
    Caption = 'Label2'
  end
  object Button1: TButton
    Left = 488
    Top = 552
    Width = 129
    Height = 49
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 488
    Top = 312
    Width = 121
    Height = 23
    TabOrder = 1
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 488
    Top = 480
    Width = 121
    Height = 23
    TabOrder = 2
    Text = 'Edit2'
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
    Left = 752
    Top = 360
  end
  object qu: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from users;')
    Left = 952
    Top = 312
  end
end
