// Class: StringHelper


/* StringHelper::GetPrecionF(float, int) */

float StringHelper::GetPrecionF(float param_1,int param_2)

{
  double dVar1;
  
  dVar1 = pow(10.0,(double)param_2);
  return (float)(int)((float)(int)dVar1 * param_1) / (float)(int)dVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToFloat(std::string const&) */

void StringHelper::ToFloat(string *param_1)

{
  char *__s;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  __s = (char *)FUN_0547429c();
  sscanf(__s,"%g",&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToInt(std::string const&) */

void StringHelper::ToInt(string *param_1)

{
  char *__s;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  __s = (char *)FUN_0547429c();
  sscanf(__s,"%d",&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToColor(std::string const&) */

void StringHelper::ToColor(string *param_1)

{
  char *__s;
  undefined8 local_10;
  long local_8;
  
  local_10 = 0xff000000;
  local_8 = ___stack_chk_guard;
  __s = (char *)FUN_0547429c();
  sscanf(__s,"%8lX",&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* StringHelper::ToString(UI::Rect<UI::UDim> const&) */

void __thiscall StringHelper::ToString(StringHelper *this,Rect *param_1)

{
  Sexy::StrFormat("{{%g,%g},{%g,%g},{%g,%g},{%g,%g}}",(double)*(float *)this,
                  (double)*(float *)(this + 4),(double)*(float *)(this + 8),
                  (double)*(float *)(this + 0xc),(double)*(float *)(this + 0x10),
                  (double)*(float *)(this + 0x14),(double)*(float *)(this + 0x18),
                  (double)*(float *)(this + 0x1c));
  return;
}


/* StringHelper::ToString(Sexy::Color const&) */

void __thiscall StringHelper::ToString(StringHelper *this,Color *param_1)

{
  ulong uVar1;
  
  uVar1 = Sexy::Color::ToInt((Color *)this);
  Sexy::StrFormat("%.8lX",uVar1 & 0xffffffff);
  return;
}


/* StringHelper::ToString(int const&) */

void __thiscall StringHelper::ToString(StringHelper *this,int *param_1)

{
  Sexy::StrFormat("%d",(ulong)*(uint *)this);
  return;
}


/* StringHelper::ToString(float const&) */

void __thiscall StringHelper::ToString(StringHelper *this,float *param_1)

{
  Sexy::StrFormat("%f",(double)*(float *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToString(bool const&) */

void __thiscall StringHelper::ToString(StringHelper *this,bool *param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06b86ed0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b86ed0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b86f10,"true");
    __cxa_guard_release(&DAT_06b86ed0);
    __cxa_atexit(std::string::~string,&DAT_06b86f10,&DAT_06a88000);
    nop();
  }
  if (((DAT_06b86ed8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b86ed8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b86eb0,"false");
    __cxa_guard_release(&DAT_06b86ed8);
    __cxa_atexit(std::string::~string,&DAT_06b86eb0,&DAT_06a88000);
    nop();
  }
  FUN_05475d88();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ReplaceNumberString(std::wstring const&, wchar_t const*, int) */

void __thiscall
StringHelper::ReplaceNumberString(StringHelper *this,wstring *param_1,wchar_t *param_2,int param_3)

{
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate((wstring *)this);
  TodReplaceNumberString(awStack_10,(wchar_t *)param_1,(int)param_2);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ReplaceNumberSexyString(std::wstring const&, std::wstring const&, int) */

void __thiscall
StringHelper::ReplaceNumberSexyString
          (StringHelper *this,wstring *param_1,wstring *param_2,int param_3)

{
  long lVar1;
  wchar_t *__s;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24();
  FUN_054766ec(param_1);
  lVar1 = FUN_054767dc();
  if (lVar1 != -1) {
    __s = (wchar_t *)FUN_054766ec(param_1);
    wcslen(__s);
    Sexy::StrFormat(L"%d",auStack_10,(ulong)param_2 & 0xffffffff);
    FUN_05478128();
    FUN_05476c50(auStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ConvertTimeToHMSString(long) */

void __thiscall StringHelper::ConvertTimeToHMSString(StringHelper *this,long param_1)

{
  wstring *in_x8;
  string asStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  if ((int)((long)this / 0xe10) < 1) {
    std::string::string(asStack_20,"[WORLDMAP_EVENT_LOD_COUNTDOWN_MIN]");
    Sexy::ToWString(asStack_20);
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  else {
    std::string::string(asStack_20,"[WORLDMAP_EVENT_LOD_COUNTDOWN]");
    Sexy::ToWString(asStack_20);
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_20);
    nop();
    Sexy::StrFormat(L"%d",awStack_18,(long)this / 0xe10 & 0xffffffff);
    TodReplaceString(in_x8,L"{HOURS_LEFT}",awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  Sexy::StrFormat(L"%d",awStack_18,((long)this / 0x3c) % 0x3c & 0xffffffff);
  TodReplaceString(in_x8,L"{MINUTES_LEFT}",awStack_18);
  FUN_054766c8();
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  Sexy::StrFormat(L"%d",awStack_18,(long)this % 0x3c & 0xffffffff);
  TodReplaceString(in_x8,L"{SECONDS_LEFT}",awStack_18);
  FUN_054766c8();
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToTimeString(float, int) */

void __thiscall StringHelper::ToTimeString(StringHelper *this,float param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar5 = (int)param_1;
  local_8 = ___stack_chk_guard;
  uVar3 = (iVar5 / 0x3c) / 0x3c;
  uVar1 = iVar5 % 0x3c;
  uVar2 = (iVar5 / 0x3c) % 0x3c;
  FUN_05476574();
  switch((int)this) {
  case 1:
    FUN_05476f98();
    if (0 < (int)uVar3) {
      TodStringTranslate(L"[ZEN_GARDEN_TIMESPAN_H]");
      TodReplaceNumberString(awStack_18,L"{HOURS}",uVar3);
      FUN_054766c8(awStack_18,auStack_10);
      FUN_05476c50(auStack_10);
      thunk_FUN_05477668();
      FUN_05476c50(awStack_18);
    }
    if (0 < (int)uVar2) {
      TodStringTranslate(L"[ZEN_GARDEN_TIMESPAN_M]");
      TodReplaceNumberString(awStack_18,L"{MINUTES}",uVar2);
      FUN_054766c8(awStack_18,auStack_10);
      FUN_05476c50(auStack_10);
      thunk_FUN_05477668();
      FUN_05476c50(awStack_18);
    }
    if ((0 < (int)uVar1) || (cVar4 = FUN_054765e8(), cVar4 != '\0')) {
      TodStringTranslate(L"[ZEN_GARDEN_TIMESPAN_S]");
      TodReplaceNumberString(awStack_18,L"{SECONDS}",uVar1);
      FUN_054766c8(awStack_18,auStack_10);
      FUN_05476c50(auStack_10);
      thunk_FUN_05477668();
      FUN_05476c50(awStack_18);
    }
    goto LAB_04b70b7c;
  case 2:
    Sexy::StrFormat(L"%02d:%02d",auStack_10,(ulong)(uVar3 * 0x3c + uVar2),(ulong)uVar1);
    break;
  case 3:
    if (param_1 < 0.0) {
      Sexy::StrFormat(L"%02d:%02d:%02d",auStack_10,0,0,0);
LAB_04b70e44:
      FUN_054766c8();
      FUN_05476c50(auStack_10);
      goto LAB_04b70b7c;
    }
LAB_04b70b48:
    Sexy::StrFormat(L"%02d:%02d:%02d",auStack_10,(ulong)uVar3,(ulong)uVar2,(ulong)uVar1);
    break;
  case 4:
    if (0 < iVar5 / 0x15180) {
      TodStringTranslate(L"[ZEN_GARDEN_TIMESPAN_D]");
      TodReplaceNumberString(awStack_18,L"{DAY}",iVar5 / 0x15180);
      FUN_054766c8(awStack_18,auStack_10);
      FUN_05476c50(auStack_10);
      thunk_FUN_05477668();
      FUN_05476c50(awStack_18);
    }
    if ((int)uVar3 < 1) {
      if ((int)uVar2 < 1) {
        Sexy::StrFormat(L"%02d",auStack_10,(ulong)uVar1);
      }
      else {
        Sexy::StrFormat(L"%02d:%02d",auStack_10,(ulong)uVar2,(ulong)uVar1);
      }
    }
    else {
      Sexy::StrFormat(L"%02d:%02d:%02d",auStack_10,(ulong)(uint)((iVar5 / 0xe10) % 0x18),
                      (ulong)uVar2,(ulong)uVar1);
    }
    thunk_FUN_05477668();
    FUN_05476c50(auStack_10);
    goto LAB_04b70b7c;
  default:
    if (0 < (int)uVar3) goto LAB_04b70b48;
    if ((int)uVar2 < 1) {
      Sexy::StrFormat(L"%02d",auStack_10,(ulong)uVar1);
      goto LAB_04b70e44;
    }
    Sexy::StrFormat(L"%02d:%02d",auStack_10,(ulong)uVar2,(ulong)uVar1);
  }
  FUN_054766c8();
  FUN_05476c50(auStack_10);
LAB_04b70b7c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToDateString(int, int, int, int) */

void StringHelper::ToDateString(int param_1,int param_2,int param_3,int param_4)

{
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  if (0 < param_1) {
    TodStringTranslate(L"[YEAR2]");
    TodReplaceNumberString(awStack_18,L"{NUMBER}",param_1);
    thunk_FUN_05477668();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  if (0 < param_2) {
    TodStringTranslate(L"[MONTH2]");
    TodReplaceNumberString(awStack_18,L"{NUMBER}",param_2);
    thunk_FUN_05477668();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  if (0 < param_3) {
    TodStringTranslate(L"[DAY_2]");
    TodReplaceNumberString(awStack_18,L"{NUMBER}",param_3);
    thunk_FUN_05477668();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StringHelper::ToDateString(int, int) */

void StringHelper::ToDateString(int param_1,int param_2)

{
  ToDateString(param_1 / 10000,(param_1 % 10000) / 100,(param_1 % 10000) % 100,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToServerString(std::wstring const&) */

void __thiscall StringHelper::ToServerString(StringHelper *this,wstring *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  long lVar3;
  string asStack_1a0 [8];
  string asStack_198 [8];
  JsonWriter aJStack_190 [24];
  undefined1 auStack_178 [16];
  ostream aoStack_168 [352];
  wstring *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WStringToUTF8String((Sexy *)this,___stack_chk_guard);
  Sexy::JsonWriter::JsonWriter(aJStack_190,0);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  pcVar2 = (char *)FUN_0547429c(asStack_1a0);
  Sexy::JsonWriter::WriteString(aJStack_190,aoStack_168,pcVar2,true);
  FUN_05462824(asStack_198,auStack_178);
  lVar3 = FUN_05474184(asStack_198);
  FUN_05475ffc(asStack_198,1,lVar3 + -2);
  std::string::~string(asStack_198);
  FUN_054617bc(auStack_178);
  Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)aJStack_190);
  std::string::~string(asStack_1a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ConvertTimeToHMString(long) */

void __thiscall StringHelper::ConvertTimeToHMString(StringHelper *this,long param_1)

{
  long lVar1;
  size_t __n;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_2c = (int)((long)this / 0xe10);
  local_8 = ___stack_chk_guard;
  lVar1 = ((long)this / 0x3c) / 0x3c;
  __n = lVar1 * 0x3c;
  local_30 = (int)((long)this / 0x3c) + (int)lVar1 * -0x3c;
  Set8BytesTo0(asStack_28);
  if (local_2c < 1) {
    std::string::append(asStack_28,"[WORLDMAP_EVENT_LOD_COUNTDOWN_MIN_NO_S]",__n);
    std::string::string((string *)awStack_18,"{MINUTES_LEFT}");
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_30);
    TodReplaceString(asStack_28,(string *)awStack_18,asStack_20);
    FUN_05474278(asStack_28,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_20);
  }
  else {
    TodStringTranslate(L"[WORLDMAP_EVENT_LOD_COUNTDOWN_NO_S]");
    Sexy::ToString(awStack_18);
    FUN_05474278(asStack_28,asStack_10);
    std::string::~string(asStack_10);
    FUN_05476c50(awStack_18);
    std::string::string((string *)awStack_18,"{HOURS_LEFT}");
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_2c);
    TodReplaceString(asStack_28,(string *)awStack_18,asStack_20);
    FUN_05474278(asStack_28,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_20);
    std::string::~string((string *)awStack_18);
    nop();
    std::string::string((string *)awStack_18,"{MINUTES_LEFT}");
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_30);
    TodReplaceString(asStack_28,(string *)awStack_18,asStack_20);
    FUN_05474278(asStack_28,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_20);
  }
  std::string::~string((string *)awStack_18);
  nop();
  Sexy::ToWString(asStack_28);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StringHelper::ToBool(std::string const&) */

undefined8 StringHelper::ToBool(string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_1,"False");
  if (((bVar1) || (bVar1 = std::operator==(param_1,"false"), bVar1)) ||
     (bVar1 = std::operator==(param_1,"0"), bVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToString(Sexy::Image const*) */

void __thiscall StringHelper::ToString(StringHelper *this,Image *param_1)

{
  long lVar1;
  InfoClass *pIVar2;
  undefined8 uVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((this == (StringHelper *)0x0) ||
     (pIVar2 = Sexy::ResourceManager::GetResInfoForPathT<Sexy::Image>
                         (*(ResourceManager **)(gLawnApp + 0x848),(string *)(this + 0x30)),
     pIVar2 == (InfoClass *)0x0)) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    uVar3 = FUN_054743b0(pIVar2 + 0x48,0x7c,0);
    FUN_05475ffc(pIVar2 + 0x48,0,uVar3);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToString(Sexy::PopAnim const*) */

void __thiscall StringHelper::ToString(StringHelper *this,PopAnim *param_1)

{
  long lVar1;
  InfoClass *pIVar2;
  undefined8 uVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((this == (StringHelper *)0x0) ||
     (pIVar2 = Sexy::ResourceManager::GetResInfoForPathT<Sexy::PopAnim>
                         (*(ResourceManager **)(gLawnApp + 0x848),
                          (string *)(*(long *)(this + 0x58) + 0x58)), pIVar2 == (InfoClass *)0x0)) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    uVar3 = FUN_054743b0(pIVar2 + 0x48,0x7c,0);
    FUN_05475ffc(pIVar2 + 0x48,0,uVar3);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToArea(std::string const&) */

void StringHelper::ToArea(string *param_1)

{
  uint uVar1;
  char *__s;
  Rect<UI::UDim> *in_x8;
  Rect aRStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)FUN_0547429c();
  uVar1 = sscanf(__s," { { %g , %g } , { %g , %g } , { %g , %g } , { %g , %g } }",aRStack_28,
                 auStack_24,auStack_20,auStack_1c,auStack_18,auStack_14,auStack_10,auStack_c);
  if (uVar1 == 8) {
    UI::Rect<UI::UDim>::Rect(in_x8,aRStack_28);
  }
  else {
    UI::Rect<UI::UDim>::zero((Rect<UI::UDim> *)(ulong)uVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToImage(std::string const&, bool) */

void StringHelper::ToImage(string *param_1,bool param_2)

{
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    GetImageByNameWithUIFallback(param_1);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    pRVar1 = (ResourceInfo *)FindResource_Impl<Sexy::Image>(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToAnimRig(std::string const&, bool) */

void StringHelper::ToAnimRig(string *param_1,bool param_2)

{
  PopAnim *pPVar1;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    pPVar1 = FindResource_Impl<Sexy::PopAnim>(param_1);
  }
  else {
    GetPAMByName(param_1);
    pPVar1 = (PopAnim *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToStringName(std::wstring const&) */

void __thiscall StringHelper::ToStringName(StringHelper *this,wstring *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  bool *pbVar4;
  undefined8 local_18;
  undefined8 local_10;
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar4 = ___stack_chk_guard;
  if (SexyStringCacheEnabled != '\0') {
    local_18 = std::
               map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
               ::begin((map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
                        *)CachedSexyStrings);
    while( true ) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)CachedSexyStrings);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      cVar1 = std::operator==((wstring *)(lVar3 + 8),(wstring *)this);
      if (cVar1 != '\0') {
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        FUN_05475d88();
        goto LAB_04b71f98;
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    }
  }
  Sexy::WStringToString((Sexy *)this,(wstring *)0x0,pbVar4);
LAB_04b71f98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::IsStringValueExist(std::string const&) */

void StringHelper::IsStringValueExist(string *param_1)

{
  bool bVar1;
  ulong uVar2;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_05474184();
  if (2 < uVar2) {
    FUN_05475ffc(asStack_20,param_1,1,uVar2 - 2);
    local_18 = std::
               map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
               ::find((map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
                       *)(Sexy::gSexyAppBase + 0x758),asStack_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(Sexy::gSexyAppBase + 0x758));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ReadJson(std::string const&, Sexy::StructuredData*) */

void StringHelper::ReadJson(string *param_1,StructuredData *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  void *__dest;
  void *__src;
  undefined1 *puVar3;
  uchar *puVar4;
  undefined8 local_58 [3];
  JsonReader aJStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (StructuredData *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_05474184();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_58);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)local_58,
               (long)(int)(uVar2 + 1));
    __dest = (void *)thunk_FUN_04b70180(local_58[0]);
    __src = (void *)FUN_054742a4(param_1);
    memcpy(__dest,__src,(long)(int)uVar2);
    puVar3 = (undefined1 *)FUN_04b70160(local_58[0],(long)(int)uVar2);
    *puVar3 = 0;
    nop();
    puVar4 = (uchar *)thunk_FUN_04b70180(local_58[0]);
    uVar1 = Sexy::JsonReader::Read(aJStack_40,puVar4,uVar2,param_2,(StructuredData *)0x0);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)local_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToStringValue(std::string const&) */

void StringHelper::ToStringValue(string *param_1)

{
  bool bVar1;
  string *in_x1;
  wstring *in_x8;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToSexyString((Sexy *)param_1,in_x1);
  TodStringTranslate(awStack_10);
  if ((SexyStringCacheEnabled != '\0') && (bVar1 = std::operator!=(awStack_10,in_x8), bVar1)) {
    std::
    map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
    ::operator[]((map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
                  *)CachedSexyStrings,param_1);
    thunk_FUN_05477b9c();
  }
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ReplaceNumberString(std::string const&, wchar_t const*, int) */

void __thiscall
StringHelper::ReplaceNumberString(StringHelper *this,string *param_1,wchar_t *param_2,int param_3)

{
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToStringValue((string *)this);
  TodReplaceNumberString(awStack_10,(wchar_t *)param_1,(int)param_2);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StringHelper::ReplaceNumberString(std::string const&, std::wstring const&, int) */

void StringHelper::ReplaceNumberString(string *param_1,wstring *param_2,int param_3)

{
  string *psVar1;
  int in_w3;
  
  psVar1 = (string *)FUN_054766ec(param_2);
  ReplaceNumberString((StringHelper *)param_1,psVar1,(wchar_t *)(ulong)(uint)param_3,in_w3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ReplaceNumberString(std::string const&, std::map<std::wstring, int,
   std::less<std::wstring >, std::allocator<std::pair<std::wstring const, int> > > const&) */

void __thiscall StringHelper::ReplaceNumberString(StringHelper *this,string *param_1,map *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToStringValue((string *)this);
  local_20 = std::
             map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
             ::begin((map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
                      *)param_1);
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_1);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18), bVar1
        ) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    lVar3 = FUN_054767d0();
    if (lVar3 != -1) {
      Sexy::StrFormat(L"%d",auStack_10,(ulong)*(uint *)(lVar2 + 8));
      FUN_054765d0(lVar2);
      FUN_05478128();
      FUN_05476c50(auStack_10);
    }
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToFontIndex(Sexy::PrimeTypeface*) */

void StringHelper::ToFontIndex(PrimeTypeface *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  PrimeTypeface *pPVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitFontsMap();
  local_18 = std::
             map<int,PrimeText_PotentialTypeface*,std::less<int>,std::allocator<std::pair<int_const,PrimeText_PotentialTypeface*>>>
             ::begin((map<int,PrimeText_PotentialTypeface*,std::less<int>,std::allocator<std::pair<int_const,PrimeText_PotentialTypeface*>>>
                      *)k_MapFonts);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)k_MapFonts);
  while( true ) {
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    uVar2 = (uint)bVar1;
    if (!bVar1) break;
    puVar3 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar2 = *puVar3;
    if ((*(PrimeText_PotentialTypeface **)(puVar3 + 2) != (PrimeText_PotentialTypeface *)0x0) &&
       (pPVar4 = (PrimeTypeface *)
                 PrimeText_PotentialTypeface::Typeface
                           (*(PrimeText_PotentialTypeface **)(puVar3 + 2)), param_1 == pPVar4))
    break;
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::ToFont(int) */

void StringHelper::ToFont(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  InitFontsMap();
  cVar1 = std::
          map<int,PrimeText_PotentialTypeface*,std::less<int>,std::allocator<std::pair<int_const,PrimeText_PotentialTypeface*>>>
          ::empty((map<int,PrimeText_PotentialTypeface*,std::less<int>,std::allocator<std::pair<int_const,PrimeText_PotentialTypeface*>>>
                   *)k_MapFonts);
  if (cVar1 == '\0') {
    local_18 = std::
               map<int,PrimeText_PotentialTypeface*,std::less<int>,std::allocator<std::pair<int_const,PrimeText_PotentialTypeface*>>>
               ::find((map<int,PrimeText_PotentialTypeface*,std::less<int>,std::allocator<std::pair<int_const,PrimeText_PotentialTypeface*>>>
                       *)k_MapFonts,local_24);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)k_MapFonts);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar2) {
      puVar4 = (undefined8 *)
               std::
               map<int,PrimeText_PotentialTypeface*,std::less<int>,std::allocator<std::pair<int_const,PrimeText_PotentialTypeface*>>>
               ::operator[]((map<int,PrimeText_PotentialTypeface*,std::less<int>,std::allocator<std::pair<int_const,PrimeText_PotentialTypeface*>>>
                             *)k_MapFonts,local_24);
      uVar3 = PrimeText_PotentialTypeface::Typeface((PrimeText_PotentialTypeface *)*puVar4);
      goto LAB_04b74994;
    }
  }
  uVar3 = 0;
LAB_04b74994:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::GetDigits(int, std::vector<int, std::allocator<int> >&) */

void StringHelper::GetDigits(int param_1,vector *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_2);
  if (param_1 == 0) {
    local_c = param_1;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)param_2,&local_c);
    FUN_04b70154(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  }
  else {
    do {
      local_c = param_1 % 10;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_2,&local_c);
      param_1 = param_1 / 10;
    } while (param_1 != 0);
    uVar1 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_2);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_2);
    std::reverse<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar1,uVar2);
    FUN_04b70154(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::GetJsonFromPackage(std::string const&) */

void __thiscall StringHelper::GetJsonFromPackage(StringHelper *this,string *param_1)

{
  char cVar1;
  uint uVar2;
  uchar *puVar3;
  string *in_x8;
  Buffer aBStack_68 [48];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  Sexy::Buffer::Buffer(aBStack_68);
  cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                    (Sexy::gSexyAppBase,(Buffer *)this,SUB81(aBStack_68,0));
  if (cVar1 != '\0') {
    Sexy::Buffer::Buffer(aBStack_38);
    (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x68) + 0x20))
              (*(long **)(Sexy::gSexyAppBase + 0x68),aBStack_68,aBStack_38);
    puVar3 = (uchar *)Sexy::Buffer::GetDataPtr(aBStack_38);
    uVar2 = Sexy::Buffer::GetDataLen(aBStack_38);
    Sexy::RtSerial::RtonToJson(puVar3,uVar2,in_x8,true);
    Sexy::Buffer::~Buffer(aBStack_38);
  }
  Sexy::Buffer::~Buffer(aBStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringHelper::GetObjectFromJson(std::string const&, std::string const&, Sexy::RtObject&) */

void StringHelper::GetObjectFromJson(string *param_1,string *param_2,RtObject *param_3)

{
  char cVar1;
  char *pcVar2;
  RtSerialRtonReader *this;
  undefined8 uVar3;
  string asStack_148 [8];
  DString aDStack_140 [16];
  vector<DString,std::allocator<DString>> avStack_130 [24];
  undefined8 local_118 [3];
  DString aDStack_100 [40];
  RtSerialBuffer aRStack_d8 [48];
  RtSerialRtonWriter aRStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_148);
  Sexy::RtSerialBuffer::RtSerialBuffer(aRStack_d8,(uchar *)0x0,0);
  Sexy::RtSerialRtonWriter::RtSerialRtonWriter(aRStack_a8,aRStack_d8);
  pcVar2 = (char *)FUN_0547429c(param_1);
  cVar1 = Sexy::RtSerial::JsonToRton(pcVar2,aRStack_a8,asStack_148);
  if (cVar1 == '\0') {
    uVar3 = FUN_0547429c(asStack_148);
    Sexy::OutputDebugStrF(L"猥",uVar3);
  }
  else {
    DString::DString(aDStack_100,param_2);
    DString::replace((char *)aDStack_100,"$");
    DString::~DString(aDStack_100);
    DString::split((char *)aDStack_140,0x55b9108);
    Sexy::RtSerialRtonReader::RtSerialRtonReader((RtSerialRtonReader *)aDStack_100,aRStack_d8);
    Sexy::RtSerialRtonSync::RtSerialRtonSync
              ((RtSerialRtonSync *)local_118,(RtSerialRtonReader *)aDStack_100);
    this = (RtSerialRtonReader *)FUN_04b70150(local_118[0]);
    Sexy::RtSerialRtonReader::BeginDocumentObject(this);
    GetObjectRtSerial_Recursive((RtSerialRtonReader *)aDStack_100,(vector *)avStack_130,param_3);
    Sexy::RtSerialRtonReader::EndDocumentObject(this);
    Sexy::RtSerialRtonReader::~RtSerialRtonReader((RtSerialRtonReader *)aDStack_100);
    std::vector<DString,std::allocator<DString>>::~vector(avStack_130);
    DString::~DString(aDStack_140);
  }
  Sexy::RtSerialRtonWriter::~RtSerialRtonWriter(aRStack_a8);
  Sexy::RtSerialBuffer::~RtSerialBuffer(aRStack_d8);
  std::string::~string(asStack_148);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

