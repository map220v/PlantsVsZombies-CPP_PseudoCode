// Class: Sexy::SexyApp


/* Sexy::SexyApp::~SexyApp() */

void __thiscall Sexy::SexyApp::~SexyApp(SexyApp *this)

{
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_06a317e8;
  *(undefined ***)this = &PTR_ButtonPress_06a31380;
  gSexyApp = 0;
  std::string::~string((string *)(this + 0x980));
  std::string::~string((string *)(this + 0x978));
  std::string::~string((string *)(this + 0x970));
  std::string::~string((string *)(this + 0x968));
  std::string::~string((string *)(this + 0x950));
  std::string::~string((string *)(this + 0x940));
  std::string::~string((string *)(this + 0x938));
  SexyAppBase::~SexyAppBase((SexyAppBase *)this);
  return;
}


/* Sexy::SexyApp::~SexyApp() */

void __thiscall Sexy::SexyApp::~SexyApp(SexyApp *this)

{
  ~SexyApp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::UpdateCheckQueried() */

void __thiscall Sexy::SexyApp::UpdateCheckQueried(SexyApp *this)

{
  long lVar1;
  time_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  time(&local_10);
  lVar1 = ___stack_chk_guard;
  *(time_t *)(this + 0x958) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::SexyApp() */

void __thiscall Sexy::SexyApp::SexyApp(SexyApp *this)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *__n;
  size_t __n_00;
  char local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SexyAppBase::SexyAppBase((SexyAppBase *)this);
  *(undefined ***)this = &PTR_ButtonPress_06a31380;
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_06a317e8;
  Set8BytesTo0(this + 0x938);
  Set8BytesTo0(this + 0x940);
  Set8BytesTo0((string *)(this + 0x950));
  Set8BytesTo0((string *)(this + 0x968));
  Set8BytesTo0(this + 0x970);
  Set8BytesTo0(this + 0x978);
  Set8BytesTo0(this + 0x980);
  __n = &gSexyApp;
  this[0x962] = (SexyApp)0x1;
  *(undefined4 *)(this + 0x98c) = 0;
  *(undefined4 *)(this + 0x990) = 0;
  this[0x994] = (SexyApp)0x0;
  this[0x988] = (SexyApp)0x0;
  this[0x989] = (SexyApp)0x0;
  *(undefined8 *)(this + 0x948) = 0;
  gSexyApp = this;
  std::string::append((string *)(this + 0x950),"ingame",(size_t)&gSexyApp);
  this[0x960] = (SexyApp)0x0;
  this[0x961] = (SexyApp)0x0;
  *(undefined8 *)(this + 0x958) = 0;
  std::string::append((string *)(this + 0x80),"PopCap",(size_t)__n);
  std::string::append((string *)(this + 0x88),"PopCap Games",(size_t)__n);
  puVar1 = BUILD_INFO_MARKER;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  __n_00 = 8;
  local_18[8] = 0;
  strncpy(local_18,BUILD_INFO_MARKER,8);
  iVar2 = atoi(local_18);
  *(int *)(this + 0x964) = iVar2;
  if (iVar2 != 0) {
    std::string::append((string *)(this + 0x968),puVar1 + 8,__n_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::InitPropertiesHook() */

void __thiscall Sexy::SexyApp::InitPropertiesHook(SexyApp *this)

{
  char cVar1;
  SexyApp SVar2;
  long lVar3;
  wstring awStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  SVar2 = (SexyApp)0x0;
  local_8 = ___stack_chk_guard;
  cVar1 = SexyAppBase::IsScreenSaver((SexyAppBase *)this);
  if (cVar1 == '\0') {
    SVar2 = this[0x962];
  }
  std::string::string(asStack_10,"properties\\partner.xml");
  SexyAppBase::LoadProperties((SexyAppBase *)this,asStack_10,false,(bool)SVar2,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"NoReg");
  cVar1 = SexyAppBase::GetBoolean((SexyAppBase *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    this[0x988] = (SexyApp)0x1;
    this[0x989] = (SexyApp)0x1;
  }
  std::string::string(asStack_20,"ProdName");
  ToWString((string *)(this + 0x90));
  SexyAppBase::GetString((string *)this,(wstring *)asStack_20);
  Sexy::ToString(awStack_18);
  FUN_05474278((string *)(this + 0x90),asStack_10);
  std::string::~string(asStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_28);
  std::string::~string(asStack_20);
  nop();
  if (this[0x3b2] == (SexyApp)0x0) {
    std::string::string(asStack_10,"DefaultWindowed");
    SVar2 = (SexyApp)SexyAppBase::GetBoolean((SexyAppBase *)this,asStack_10,(bool)this[0x3af]);
    this[0x3af] = SVar2;
    std::string::~string(asStack_10);
    nop();
  }
  std::string::string((string *)awStack_18,"Title");
  FUN_05478178(asStack_10,&DAT_056f11a8,asStack_20);
  SexyAppBase::GetString((string *)this,awStack_18);
  FUN_05476c50(asStack_10);
  nop();
  std::string::~string((string *)awStack_18);
  nop();
  lVar3 = FUN_054765d0(awStack_28);
  if (lVar3 != 0) {
    std::operator+(awStack_28,L" ");
    ToWString((string *)(this + 0x3d0));
    std::operator+((wstring *)asStack_20,awStack_18);
    FUN_054766c8(this + 0x98,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(asStack_20);
  }
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::OpenRegisterPage() */

void __thiscall Sexy::SexyApp::OpenRegisterPage(SexyApp *this)

{
  undefined4 uVar1;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar1 = (**(code **)(*(long *)this + 0x428))(this,amStack_38);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::OpenRegisterPage(std::map<std::string, std::string, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall Sexy::SexyApp::OpenRegisterPage(SexyApp *this,map *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  code *pcVar7;
  string asStack_90 [8];
  undefined8 local_88;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  undefined8 local_48 [2];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::pair<std::string_const,std::string>::pair<char_const(&)[6],std::string&,void>
            ((pair<std::string_const,std::string> *)local_48,"Src",(string *)(this + 0x950));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  std::pair<std::string_const,std::string>::pair<char_const(&)[6],std::string&,void>
            ((pair<std::string_const,std::string> *)local_48,"ProdName",(string *)(this + 0x90));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  std::pair<std::string_const,std::string>::pair<char_const(&)[6],std::string&,void>
            ((pair<std::string_const,std::string> *)local_48,"Version",(string *)(this + 0x3d0));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  std::pair<std::string_const,std::string>::pair<char_const(&)[6],std::string&,void>
            ((pair<std::string_const,std::string> *)local_48,"Variation",(string *)(this + 0x940));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  std::pair<std::string_const,std::string>::pair<char_const(&)[6],std::string&,void>
            ((pair<std::string_const,std::string> *)local_48,"ReferId",(string *)(this + 0x938));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  StrFormat("%d",asStack_50,*(undefined8 *)(this + 0x948));
  std::pair<std::string_const,std::string>::pair<char_const(&)[9],std::string,void>
            ((pair<std::string_const,std::string> *)local_48,"DownloadId",asStack_50);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  std::string::~string(asStack_50);
  StrFormat("%d",asStack_50,(ulong)*(uint *)(this + 0x98c));
  std::pair<std::string_const,std::string>::pair<char_const(&)[9],std::string,void>
            ((pair<std::string_const,std::string> *)local_48,"TimesPlayed",asStack_50);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  std::string::~string(asStack_50);
  StrFormat("%d",asStack_50,(ulong)*(uint *)(this + 0x990));
  std::pair<std::string_const,std::string>::pair<char_const(&)[9],std::string,void>
            ((pair<std::string_const,std::string> *)local_48,"TimesExecuted",asStack_50);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  std::string::~string(asStack_50);
  if (this[0x994] == (SexyApp)0x0) {
    pcVar6 = "N";
  }
  else {
    pcVar6 = "Y";
  }
  std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
            ((pair<std::string_const,std::string> *)local_48,"TimedOut",pcVar6);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  Set8BytesTo0(asStack_90);
  local_88 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::begin((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                      *)param_1);
  while( true ) {
    local_48[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_88,(rbtree_iterator *)local_48);
    if (!bVar1) break;
    uVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
    FUN_05475d88(asStack_80,uVar4);
    lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
    FUN_05475d88(asStack_78,lVar5 + 8);
    uVar4 = FUN_05474184(asStack_80);
    StrFormat("%04X",asStack_70,uVar4);
    std::operator+(asStack_70,asStack_80);
    std::operator+(asStack_68,"S");
    uVar4 = FUN_05474184(asStack_78);
    StrFormat("%04X",asStack_58,uVar4);
    std::operator+(asStack_60,asStack_58);
    std::operator+(asStack_50,asStack_78);
    thunk_FUN_054757c0(asStack_90,(pair<std::string_const,std::string> *)local_48);
    std::string::~string((string *)local_48);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
    std::string::~string(asStack_70);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_88);
    std::string::~string(asStack_78);
    std::string::~string(asStack_80);
  }
  std::pair<std::string_const,std::string>::pair<char_const(&)[6],std::string&,void>
            ((pair<std::string_const,std::string> *)local_48,"Stats",asStack_90);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_38,(pair *)local_48);
  PACommand::~PACommand((PACommand *)local_48);
  std::string::string((string *)local_48,"register.tpl");
  cVar2 = SexyAppBase::FileExists((SexyAppBase *)this,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  if (cVar2 == '\0') {
    uVar3 = (**(code **)(*(long *)this + 0x168))(this,this + 0x3c8,0);
  }
  else {
    pcVar7 = *(code **)(*(long *)this + 0x438);
    std::string::string((string *)local_48,"register.tpl");
    uVar3 = (*pcVar7)(this,(pair<std::string_const,std::string> *)local_48,amStack_38);
    std::string::~string((string *)local_48);
    nop();
  }
  std::string::~string(asStack_90);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::GetSEHWebParams(std::map<std::string, std::string, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::string > > >*) */

void __thiscall Sexy::SexyApp::GetSEHWebParams(SexyApp *this,map *param_1)

{
  string asStack_20 [8];
  pair<std::string_const,std::string> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::pair<std::string_const,std::string>::pair<char_const(&)[6],std::string&,void>
            (apStack_18,"username",(string *)(this + 0x970));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)param_1,(pair *)apStack_18);
  PACommand::~PACommand((PACommand *)apStack_18);
  StrFormat("%d",asStack_20,(ulong)*(uint *)(this + 0x964));
  std::pair<std::string_const,std::string>::pair<char_const(&)[9],std::string,void>
            (apStack_18,"buildnum",asStack_20);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)param_1,(pair *)apStack_18);
  PACommand::~PACommand((PACommand *)apStack_18);
  std::string::~string(asStack_20);
  std::pair<std::string_const,std::string>::pair<char_const(&)[6],std::string&,void>
            (apStack_18,"builddate",(string *)(this + 0x968));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)param_1,(pair *)apStack_18);
  PACommand::~PACommand((PACommand *)apStack_18);
  std::pair<std::string_const,std::string>::pair<char_const(&)[6],std::string&,void>
            (apStack_18,"referid",(string *)(this + 0x938));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string_const,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)param_1,(pair *)apStack_18);
  PACommand::~PACommand((PACommand *)apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::Validate(std::string const&, std::string const&) */

void __thiscall Sexy::SexyApp::Validate(SexyApp *this,string *param_1,string *param_2)

{
  uint uVar1;
  bool bVar2;
  uint __c;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  string asStack_b8 [8];
  string asStack_b0 [8];
  BigInt aBStack_a8 [32];
  BigInt aBStack_88 [32];
  BigInt aBStack_68 [32];
  BigInt aBStack_48 [32];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"42BF94023BBA6D040C8B81D9");
  uVar10 = 0;
  BigInt::BigInt(aBStack_a8,asStack_28);
  bVar2 = false;
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"11");
  BigInt::BigInt(aBStack_88,asStack_28);
  std::string::~string(asStack_28);
  nop();
  Set8BytesTo0(asStack_b8);
  uVar5 = FUN_05474178(param_1);
  if (uVar5 != 0) {
    do {
      pbVar6 = (byte *)FUN_054741b0(param_1,uVar10);
      __c = (uint)*pbVar6;
      if (__c == 0x20) {
        lVar8 = FUN_05474184(asStack_b8);
        if (lVar8 != 0) {
          bVar2 = true;
        }
      }
      else {
        if (bVar2) {
          FUN_05475ad8(asStack_b8,&DAT_055b4790);
          pbVar6 = (byte *)FUN_054741b0(param_1,uVar10);
          __c = (uint)*pbVar6;
        }
        uVar9 = 0x80;
        pbVar6 = &DAT_0575ae11;
        uVar5 = 0;
        do {
          while (__c == uVar9) {
            uVar9 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar9;
            __c = (uint)*pbVar6;
            pbVar6 = pbVar6 + 2;
            uVar9 = (uint)(byte)(&gRegKeyTranslationTable)
                                [-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar5 << 1];
            if (uVar9 == 0) goto LAB_051d2c64;
          }
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar1;
          pbVar6 = pbVar6 + 2;
          uVar9 = (uint)(byte)(&gRegKeyTranslationTable)
                              [-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar5 << 1];
        } while ((&gRegKeyTranslationTable)
                 [-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar5 << 1] != 0);
LAB_051d2c64:
        iVar3 = toupper(__c);
        bVar2 = false;
        FUN_05475ce8(asStack_b8,iVar3);
        uVar5 = FUN_05474178(param_1);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  Set8BytesTo0(asStack_b0);
  thunk_FUN_05475e00(asStack_b0,this + 0x90);
  for (uVar5 = 0; uVar10 = FUN_05474184(asStack_b0), uVar5 < uVar10; uVar5 = uVar5 + 1) {
    puVar7 = (undefined1 *)FUN_05474ee8(asStack_b0,uVar5);
    pbVar6 = (byte *)FUN_05474ee8(asStack_b0,uVar5);
    iVar3 = toupper((uint)*pbVar6);
    *puVar7 = (char)iVar3;
  }
  FUN_05475ad8(asStack_b8,&DAT_0559c978);
  thunk_FUN_054757c0(asStack_b8,asStack_b0);
  HashString(asStack_b8,0x5e);
  KeyToInt(param_2);
  BigInt::ModPow(aBStack_48,aBStack_88);
  uVar4 = BigInt::operator==((BigInt *)asStack_28,aBStack_68);
  BigInt::~BigInt((BigInt *)asStack_28);
  BigInt::~BigInt(aBStack_48);
  BigInt::~BigInt(aBStack_68);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  BigInt::~BigInt(aBStack_88);
  BigInt::~BigInt(aBStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::CheckSignature(Sexy::Buffer const&, std::string const&) */

void __thiscall Sexy::SexyApp::CheckSignature(SexyApp *this,Buffer *param_1,string *param_2)

{
  ColourFit CVar1;
  char cVar2;
  SexyApp SVar3;
  int iVar4;
  char *__filename;
  FILE *__stream;
  ColourFit *this_00;
  int iVar5;
  BigInt aBStack_d8 [32];
  BigInt aBStack_b8 [32];
  BigInt aBStack_98 [32];
  BigInt aBStack_78 [32];
  ColourFit local_58 [32];
  char local_38 [8];
  SexyApp local_30;
  char acStack_28 [24];
  SexyApp local_10;
  long local_8;
  
  SVar3 = this[0x103];
  local_8 = ___stack_chk_guard;
  if (SVar3 == (SexyApp)0x0) {
    std::operator+(param_2,".sig");
    __filename = (char *)FUN_0547429c((string *)local_58);
    __stream = fopen(__filename,"rb");
    std::string::~string((string *)local_58);
    if (__stream != (FILE *)0x0) {
      iVar5 = 4;
      fread(acStack_28,1,0x18,__stream);
      local_10 = SVar3;
      iVar4 = Buffer::GetDataLen(param_1);
      this_00 = operator_new__((long)(iVar4 + 4));
      local_38[0] = '\0';
      local_38[1] = '\0';
      local_38[2] = '\0';
      local_38[3] = '\0';
      local_38[4] = '\0';
      local_38[5] = '\0';
      local_38[6] = '\0';
      local_38[7] = '\0';
      local_30 = SVar3;
      strncpy(local_38,SIGNATURE_CODE_MARKER,8);
      iVar4 = atoi(local_38);
      *this_00 = SUB41(iVar4,0);
      this_00[1] = SUB41((uint)iVar4 >> 8,0);
      this_00[2] = SUB41((uint)iVar4 >> 0x10,0);
      this_00[3] = SUB41((uint)iVar4 >> 0x18,0);
      Buffer::SeekFront(param_1);
      while (cVar2 = Buffer::AtEnd(param_1), cVar2 == '\0') {
        while( true ) {
          local_58[0] = (ColourFit)Buffer::ReadByte(param_1);
          fread((string *)local_58,1,1,__stream);
          CVar1 = local_58[0];
          iVar4 = isspace((uint)(byte)local_58[0]);
          if (iVar4 != 0) break;
          this_00[iVar5] = CVar1;
          iVar5 = iVar5 + 1;
          cVar2 = Buffer::AtEnd(param_1);
          if (cVar2 != '\0') goto LAB_051d2f90;
        }
      }
LAB_051d2f90:
      fclose(__stream);
      std::string::string((string *)local_58,"D99BC76AB7B2578738E606F7");
      BigInt::BigInt(aBStack_d8,(string *)local_58);
      std::string::~string((string *)local_58);
      nop();
      std::string::string((string *)local_58,"11");
      BigInt::BigInt(aBStack_b8,(string *)local_58);
      std::string::~string((string *)local_58);
      nop();
      HashData((char *)this_00,iVar5,0x5e);
      EATextSquish::ColourFit::~ColourFit(this_00);
      std::string::string((string *)local_58,acStack_28);
      BigInt::BigInt(aBStack_78,(string *)local_58);
      std::string::~string((string *)local_58);
      nop();
      BigInt::ModPow(aBStack_78,aBStack_b8);
      SVar3 = (SexyApp)BigInt::operator==((BigInt *)local_58,aBStack_98);
      BigInt::~BigInt((BigInt *)local_58);
      BigInt::~BigInt(aBStack_78);
      BigInt::~BigInt(aBStack_98);
      BigInt::~BigInt(aBStack_b8);
      BigInt::~BigInt(aBStack_d8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(SVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::ReadFromRegistry() */

void __thiscall Sexy::SexyApp::ReadFromRegistry(SexyApp *this)

{
  string *psVar1;
  char cVar2;
  SexyApp SVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  int aiStack_18 [2];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this[0x3c2] = (SexyApp)0x1;
  psVar1 = (string *)(this + 0xa0);
  std::string::string(asStack_20,"RegistryKey");
  ToWString(psVar1);
  SexyAppBase::GetString((string *)this,(wstring *)asStack_20);
  Sexy::ToString((wstring *)aiStack_18);
  FUN_05474278(psVar1,asStack_10);
  std::string::~string(asStack_10);
  FUN_05476c50((wstring *)aiStack_18);
  FUN_05476c50(auStack_28);
  std::string::~string(asStack_20);
  nop();
  lVar4 = FUN_05474184(psVar1);
  if (lVar4 != 0) {
    std::string::string(asStack_10,"MusicVolume");
    cVar2 = SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      *(double *)(this + 0xe0) = (double)aiStack_18[0] * 0.01;
    }
    std::string::string(asStack_10,"SfxVolume");
    cVar2 = SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      *(double *)(this + 0xe8) = (double)aiStack_18[0] * 0.01;
    }
    std::string::string(asStack_10,"Muted");
    cVar2 = SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      *(int *)(this + 0x470) = aiStack_18[0];
    }
    std::string::string(asStack_10,"ScreenMode");
    cVar2 = SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      SVar3 = (SexyApp)0x0;
      if (aiStack_18[0] == 0) {
        SVar3 = (SexyApp)((byte)this[0x3b2] ^ 1);
      }
      this[0x3af] = SVar3;
    }
    std::string::string(asStack_10,"PreferredX");
    SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PreferredY");
    SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PreferredWidth");
    SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PreferredHeight");
    SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CustomCursors");
    cVar2 = SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      SexyAppBase::EnableCustomCursors(SUB81(this,0));
    }
    std::string::string(asStack_10,"WaitForVSync");
    SexyAppBase::RegistryReadBoolean((string *)this,(bool *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"InProgress");
    cVar2 = SexyAppBase::RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      this[0x6d6] = (SexyApp)(aiStack_18[0] == 0);
    }
    cVar2 = SexyAppBase::IsScreenSaver((SexyAppBase *)this);
    if (cVar2 == '\0') {
      std::string::string(asStack_10,"InProgress");
      SexyAppBase::RegistryWriteInteger((string *)this,(int)asStack_10);
      std::string::~string(asStack_10);
      nop();
      pcVar5 = *(code **)(**(long **)(this + 0x10) + 0x248);
      if (pcVar5 == IAppDriver::ReadFromConfig) goto LAB_051da7ec;
    }
    else {
      pcVar5 = *(code **)(**(long **)(this + 0x10) + 0x248);
      if (pcVar5 == IAppDriver::ReadFromConfig) goto LAB_051da7ec;
    }
    (*pcVar5)();
  }
LAB_051da7ec:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::WriteToRegistry() */

void __thiscall Sexy::SexyApp::WriteToRegistry(SexyApp *this)

{
  SexyApp *pSVar1;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pSVar1 = this + 0x978;
  local_8 = ___stack_chk_guard;
  SexyAppBase::WriteToRegistry((SexyAppBase *)this);
  std::string::string(asStack_10,"LastVerCheckQueryTime");
  SexyAppBase::RegistryWriteInteger((string *)this,(int)asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar2 = FUN_05474184(pSVar1);
  if (lVar2 == 0) {
    lVar2 = FUN_05474184(this + 0x970);
    if ((lVar2 != 0) && (lVar2 = FUN_05474184(this + 0x980), lVar2 != 0)) {
      thunk_FUN_05475e00(pSVar1,this + 0x970);
    }
  }
  FUN_05475d88(asStack_18,pSVar1);
  FUN_05475d88(asStack_10,this + 0x980);
  nop();
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyApp::URLOpenSucceeded(std::string const&) */

void Sexy::SexyApp::URLOpenSucceeded(string *param_1)

{
  SexyAppBase::URLOpenSucceeded(param_1);
  if (param_1[0x441] != (string)0x0) {
    param_1[0x960] = (string)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::HandleCmdLineParam(std::string const&, std::string const&) */

void Sexy::SexyApp::HandleCmdLineParam(string *param_1,string *param_2)

{
  bool bVar1;
  code *pcVar2;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  wstring awStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"-version");
  if (bVar1) {
    FUN_031f5e7c(asStack_60,"Product: ",param_1 + 0x90);
    std::operator+(asStack_60,"\r\n");
    std::operator+(asStack_58,"Version: ");
    std::operator+(asStack_50,param_1 + 0x3d0);
    std::operator+(asStack_48,"\r\n");
    std::operator+(asStack_40,"Build Num: ");
    StrFormat(L"%d",awStack_30,(ulong)*(uint *)(param_1 + 0x964));
    Sexy::ToString(awStack_30);
    std::operator+(asStack_38,asStack_28);
    std::operator+(asStack_20,"\r\n");
    std::operator+(asStack_18,"Build Date: ");
    std::operator+(asStack_10,param_1 + 0x968);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    FUN_05476c50(awStack_30);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    pcVar2 = *(code **)(*(long *)param_1 + 0x130);
    std::string::string(asStack_10,"Version Info");
    (*pcVar2)(param_1,asStack_68,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    SexyAppBase::DoExit((int)param_1);
    std::string::~string(asStack_68);
  }
  else {
    bVar1 = std::operator==(param_2,"-betasite");
    if (!bVar1) {
      SexyAppBase::HandleCmdLineParam(param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::GetGameSEHInfo() */

void Sexy::SexyApp::GetGameSEHInfo(void)

{
  long in_x0;
  long lVar1;
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  char acStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sprintf(acStack_18,"%d",(ulong)*(uint *)(in_x0 + 0x98c));
  SexyAppBase::GetGameSEHInfo();
  std::operator+(asStack_70,"Times Played: ");
  std::string::string(asStack_60,acStack_18);
  std::operator+(asStack_68,asStack_60);
  std::operator+(asStack_58,"\r\n");
  std::operator+(asStack_50,"Build Num: ");
  StrFormat("%d",asStack_40,(ulong)*(uint *)(in_x0 + 0x964));
  std::operator+(asStack_48,asStack_40);
  std::operator+(asStack_38,"\r\n");
  std::operator+(asStack_30,"Build Date: ");
  std::operator+(asStack_28,(string *)(in_x0 + 0x968));
  std::operator+(asStack_20,"\r\n");
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  nop();
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  lVar1 = FUN_05474184(in_x0 + 0x938);
  if (lVar1 != 0) {
    FUN_031f5e7c(asStack_28,"ReferId: ",in_x0 + 0x938);
    std::operator+(asStack_28,"\r\n");
    thunk_FUN_054757c0();
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::Init() */

void __thiscall Sexy::SexyApp::Init(SexyApp *this)

{
  char cVar1;
  undefined8 uVar2;
  string *extraout_x1;
  undefined1 auStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  ToSexyString((Sexy *)(this + 0x90),___stack_chk_guard);
  uVar2 = FUN_054766ec(auStack_10);
  OutputDebugStrF(L"Product: %ls\r\n",uVar2);
  FUN_05476c50(auStack_10);
  ToSexyString((Sexy *)(this + 0x3d0),extraout_x1);
  uVar2 = FUN_054766ec(auStack_10);
  OutputDebugStrF(L"Version: %ls\r\n",uVar2);
  FUN_05476c50(auStack_10);
  SexyAppBase::Init((SexyAppBase *)this);
  cVar1 = SexyAppBase::IsScreenSaver((SexyAppBase *)this);
  if (cVar1 != '\0') {
    this[0x960] = (SexyApp)0x1;
  }
  *(int *)(this + 0x990) = *(int *)(this + 0x990) + 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyApp::UpdateFrames() */

void __thiscall Sexy::SexyApp::UpdateFrames(SexyApp *this)

{
  char cVar1;
  AsyncTaskManager *this_00;
  NetworkServiceManager *this_01;
  double dVar2;
  PerfTimer aPStack_20 [16];
  undefined1 auStack_10 [8];
  long lStack_8;
  
  *(int *)(this + 0x608) = *(int *)(this + 0x608) + 1;
  lStack_8 = ___stack_chk_guard;
  if (this[0x663] == (SexyApp)0x0) {
    PerfTimer::PerfTimer(aPStack_20);
    if ((this[0x688] != (SexyApp)0x0) && (*(uint *)(this + 0x68c) < 2)) {
      FUN_051d49a8(aPStack_20,auStack_10);
    }
    cVar1 = WidgetManager::UpdateFrame(*(WidgetManager **)(this + 0x360));
    if (cVar1 != '\0') {
      *(int *)(this + 0x67c) = *(int *)(this + 0x67c) + 1;
    }
    if ((this[0x688] != (SexyApp)0x0) && (*(uint *)(this + 0x68c) < 2)) {
      *(int *)(this + 0x698) = *(int *)(this + 0x698) + 1;
      dVar2 = (double)PerfTimer::GetDuration(aPStack_20);
      *(double *)(this + 0x690) = *(double *)(this + 0x690) + dVar2;
    }
  }
  if (*(ResStreamsManager **)(this + 0x908) != (ResStreamsManager *)0x0) {
    ResStreamsManager::Update(*(ResStreamsManager **)(this + 0x908));
  }
  SexyAppBase::UpdateAudio((SexyAppBase *)this);
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 0x18))();
  }
  if (*(long **)(this + 0x918) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x918) + 0x18))();
  }
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 0x10))();
  }
  if (*(LeaderboardManager **)(this + 0x920) != (LeaderboardManager *)0x0) {
    LeaderboardManager::Update(*(LeaderboardManager **)(this + 0x920));
  }
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 0x18))();
  }
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 0x18))();
  }
  this_00 = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
  if (this_00 != (AsyncTaskManager *)0x0) {
    AsyncTaskManager::Update(this_00);
  }
  this_01 = (NetworkServiceManager *)NetworkServiceManager::DefaultNetworkServiceManager();
  NetworkServiceManager::Update(this_01);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

