// Class: _NetworkEventConfig


/* _NetworkEventConfig::_NetworkEventConfig() */

void __thiscall _NetworkEventConfig::_NetworkEventConfig(_NetworkEventConfig *this)

{
  _NetworkEventConfig *p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  
  Set8BytesTo0();
  p_Var1 = this + 0x10;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(p_Var1);
  Set8BytesTo0(this + 0x18);
  lVar6 = LawnApp::GetServerPHPConfig(gLawnApp);
  thunk_FUN_05475e00(this,lVar6 + 0x10);
  thunk_FUN_05475e00(this + 8,lVar6 + 0x20);
  iVar5 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar5 == 0x49) || (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 0x15)) {
    thunk_FUN_05475e00(p_Var1,lVar6 + 0x38);
  }
  else {
    thunk_FUN_05475e00(p_Var1,lVar6 + 0x30);
  }
  thunk_FUN_05475e00(this + 0x18,lVar6 + 0x48);
  uVar2 = *(undefined4 *)(lVar6 + 0x54);
  uVar3 = *(undefined4 *)(lVar6 + 0x58);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(lVar6 + 0x50);
  *(undefined4 *)(this + 0x20) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  cVar4 = FUN_0547419c(&m_stageURL);
  p_Var1 = (_NetworkEventConfig *)&m_stageURL;
  if (cVar4 != '\0') {
    p_Var1 = this;
  }
  thunk_FUN_05475e00(this,p_Var1);
  return;
}


/* _NetworkEventConfig::SetStageURL(std::string const&) */

void _NetworkEventConfig::SetStageURL(string *param_1)

{
  thunk_FUN_05475e00(&m_stageURL,param_1);
  return;
}


/* _NetworkEventConfig::GetStageURL() */

undefined8 * _NetworkEventConfig::GetStageURL(void)

{
  return &m_stageURL;
}


/* _NetworkEventConfig::HasStageURL() */

byte _NetworkEventConfig::HasStageURL(void)

{
  byte bVar1;
  
  bVar1 = FUN_0547419c(&m_stageURL);
  return bVar1 ^ 1;
}

