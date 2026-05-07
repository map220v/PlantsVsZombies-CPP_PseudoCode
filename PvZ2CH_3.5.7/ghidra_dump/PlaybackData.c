// Class: PlaybackData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackData::StaticClassInit() */

void PlaybackData::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlaybackBrief");
    (*pcVar3)(plVar2,asStack_10,FUN_04aba2e4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlaybackZombieData");
    (*pcVar3)(plVar2,asStack_10,FUN_04aba074,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlaybackSkillData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ab9eb0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlaybackData");
    (*pcVar3)(plVar2,asStack_10,FUN_04abceb0,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlaybackData::StaticGetClass() */

long * PlaybackData::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PlaybackData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlaybackData::GetClass() const */

long * PlaybackData::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PlaybackData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlaybackData::StartPlaying() */

void __thiscall PlaybackData::StartPlaying(PlaybackData *this)

{
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 2;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* PlaybackData::IsPlayingEnd() */

bool __thiscall PlaybackData::IsPlayingEnd(PlaybackData *this)

{
  if (*(int *)(this + 0x2c) != 2) {
    return false;
  }
  return *(uint *)(this + 0x20) <= *(uint *)(this + 0x24);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackData::LoadFromServer(std::string&) */

void __thiscall PlaybackData::LoadFromServer(PlaybackData *this,string *param_1)

{
  int iVar1;
  uchar *__s;
  uchar *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  string asStack_40 [8];
  ulong local_38;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  base64_decode_url_safe(param_1);
  local_38 = 0x2800;
  AutoBuffer::AutoBuffer((AutoBuffer *)local_18,0x2800);
  __s = (uchar *)FUN_04ab9c28(local_18[0]);
  puVar2 = (uchar *)FUN_0547429c(asStack_40);
  uVar3 = FUN_05474178(asStack_40);
  iVar1 = gzdecompress(puVar2,uVar3,__s,&local_38);
  if (iVar1 == 0) {
    std::string::string(asStack_30,(char *)__s);
    nop();
    base64_decode_url_safe(asStack_30);
    pcVar5 = *(code **)(*(long *)this + 0x38);
    std::string::string(asStack_20,"fd");
    (*pcVar5)(this,asStack_28,asStack_20);
    std::string::~string(asStack_20);
    nop();
    uVar4 = FUN_0547429c(asStack_28);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "==== PlaybackData::SaveToServer === decompress success! ===\n\n%s\n======",uVar4);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
  }
  else {
    Sexy::OutputDebugStrF
              ((wchar_t *)"== PlaybackData::LoadFromServer ===== decompress failed! ====");
  }
  AutoBuffer::~AutoBuffer((AutoBuffer *)local_18);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


/* PlaybackData::End() */

void __thiscall PlaybackData::End(PlaybackData *this)

{
  TimeMgr *this_00;
  
  this_00 = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  TimeMgr::SetFixedSPF(this_00,-1.0);
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* PlaybackData::Update() */

void __thiscall PlaybackData::Update(PlaybackData *this)

{
  uint uVar1;
  PFrame *this_00;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (*(int *)(this + 0x2c) != 0) {
    fVar4 = (float)PVZ_Dt();
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + (int)(fVar4 * 33.333336);
    if (*(int *)(this + 0x2c) == 1) {
      *(undefined4 *)(this + 0x28) = 0xffffffff;
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + (int)(fVar4 * 33.333336);
    }
    else if (*(int *)(this + 0x2c) == 2) {
      uVar1 = *(uint *)(this + 0x28);
      while( true ) {
        uVar3 = *(undefined8 *)(this + 8);
        uVar2 = FUN_04ab9c70(uVar3,*(undefined8 *)(this + 0x10));
        if (uVar2 <= uVar1) {
          return;
        }
        this_00 = (PFrame *)FUN_04ab9ca0(uVar3,(ulong)uVar1);
        uVar1 = FUN_04ab9c18(*(undefined4 *)(this_00 + 8));
        if (*(uint *)(this + 0x24) < uVar1) break;
        PFrame::DoTriggers(this_00);
        uVar1 = *(int *)(this + 0x28) + 1;
        *(uint *)(this + 0x28) = uVar1;
      }
    }
  }
  return;
}


/* PlaybackData::PlaybackData() */

void __thiscall PlaybackData::PlaybackData(PlaybackData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06948e10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  PlayerPlantData::PlayerPlantData((PlayerPlantData *)(this + 0x30));
  DefenderInfo::DefenderInfo((DefenderInfo *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  PlaybackBrief::PlaybackBrief((PlaybackBrief *)(this + 0xe0));
  return;
}


/* PlaybackData::StaticNew() */

PlaybackData * PlaybackData::StaticNew(void)

{
  PlaybackData *this;
  
  this = ::operator_new(0x138);
  PlaybackData(this);
  return this;
}


/* PlaybackData::IsValid() */

bool __thiscall PlaybackData::IsValid(PlaybackData *this)

{
  char cVar1;
  
  if ((0x31 < *(uint *)(this + 0x20)) &&
     (cVar1 = std::vector<PFrame,std::allocator<PFrame>>::empty
                        ((vector<PFrame,std::allocator<PFrame>> *)(this + 8)), cVar1 == '\0')) {
    return *(long *)(this + 0xe8) != 0;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackData::getCurFrame() */

void __thiscall PlaybackData::getCurFrame(PlaybackData *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  PFrame aPStack_30 [8];
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x2c) == 1) {
    lVar4 = *(long *)(this + 8);
    uVar6 = (ulong)*(uint *)(this + 0x28);
    uVar3 = FUN_04ab9c70(lVar4,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar6) {
      PFrame::PFrame(aPStack_30);
      FUN_04ab9c10(auStack_28,*(undefined4 *)(this + 0x24));
      std::vector<PFrame,std::allocator<PFrame>>::push_back
                ((vector<PFrame,std::allocator<PFrame>> *)(this + 8),aPStack_30);
      iVar2 = FUN_04ab9c70(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
      *(int *)(this + 0x28) = iVar2 + -1;
      PFrame::~PFrame(aPStack_30);
      uVar6 = (ulong)*(uint *)(this + 0x28);
      lVar4 = *(long *)(this + 8);
    }
    if (local_8 == ___stack_chk_guard) {
      FUN_04ab9ca0(lVar4,uVar6);
      return;
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 2) {
      uVar5 = *(undefined8 *)(this + 8);
      uVar1 = *(uint *)(this + 0x28);
      uVar3 = FUN_04ab9c70(uVar5,*(undefined8 *)(this + 0x10));
      lVar4 = 0;
      if (uVar1 < uVar3) {
        lVar4 = FUN_04ab9ca0(uVar5,(ulong)uVar1);
        iVar2 = FUN_04ab9c18(*(undefined4 *)(lVar4 + 8));
        if (iVar2 != *(int *)(this + 0x24)) {
          lVar4 = 0;
        }
      }
    }
    else {
      lVar4 = 0;
    }
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackData::SaveToServer() */

void __thiscall PlaybackData::SaveToServer(PlaybackData *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uchar *puVar6;
  uchar *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  PFrame *pPVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  string asStack_260 [8];
  ulong local_258;
  string asStack_250 [8];
  StringHelper aSStack_248 [8];
  string asStack_240 [8];
  string asStack_238 [8];
  undefined8 local_230;
  undefined8 local_228 [2];
  string asStack_218 [48];
  MD5 aMStack_1e8 [112];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_260);
  if (*(int *)(this + 0xf8) < 1) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 8);
    local_230 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
    local_228[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_230,(__normal_iterator *)local_228), bVar2
          ) {
      pPVar10 = (PFrame *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_230);
      PFrame::PFrame((PFrame *)asStack_218,pPVar10);
      PFrame::ClearTriggers((PFrame *)asStack_218);
      PFrame::~PFrame((PFrame *)asStack_218);
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_230);
    }
    std::vector<PFrame,std::allocator<PFrame>>::clear
              ((vector<PFrame,std::allocator<PFrame>> *)this_00);
  }
  pcVar11 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_218,"fd");
  (*pcVar11)(this,asStack_260,asStack_218);
  std::string::~string(asStack_218);
  nop();
  local_258 = 0x1400;
  AutoBuffer::AutoBuffer((AutoBuffer *)local_228,0x1400);
  puVar6 = (uchar *)FUN_04ab9c28(local_228[0]);
  puVar7 = (uchar *)FUN_0547429c(asStack_260);
  uVar3 = FUN_05474178(asStack_260);
  base64_url_safe(puVar7,uVar3);
  puVar7 = (uchar *)FUN_0547429c(asStack_250);
  uVar8 = FUN_05474178(asStack_250);
  iVar4 = gzcompress(puVar7,uVar8,puVar6,&local_258);
  if (iVar4 == 0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_218);
    std::string::string(asStack_238,"dpi");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,asStack_238);
    Sexy::StrFormat("%d",(string *)&local_230,(ulong)*(uint *)(this + 0x88));
    FUN_05474278(uVar9,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    std::string::string(asStack_238,"r");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,asStack_238);
    Sexy::StrFormat("%d",(string *)&local_230,(ulong)*(uint *)(this + 0x110));
    FUN_05474278(uVar9,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    std::string::string(asStack_238,"cc");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,asStack_238);
    Sexy::StrFormat("%d",(string *)&local_230,(ulong)*(uint *)(this + 0x114));
    FUN_05474278(uVar9,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    std::string::string(asStack_238,"mc");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,asStack_238);
    Sexy::StrFormat("%d",(string *)&local_230,(ulong)*(uint *)(this + 0x11c));
    FUN_05474278(uVar9,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    std::string::string(asStack_238,"agc");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,asStack_238);
    Sexy::StrFormat("%d",(string *)&local_230,(ulong)*(uint *)(this + 0x118));
    FUN_05474278(uVar9,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    std::string::string(asStack_238,"t");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,asStack_238);
    Sexy::StrFormat("%d",(string *)&local_230,(ulong)*(uint *)(this + 0xf4));
    FUN_05474278(uVar9,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    std::string::string(asStack_238,"v");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,asStack_238);
    Sexy::StrFormat("%d",(string *)&local_230,(ulong)*(uint *)(this + 0xf8));
    FUN_05474278(uVar9,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    uVar5 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar5);
    std::string::string((string *)&local_230,"");
    FUN_05462980(auStack_178,(string *)&local_230);
    std::string::~string((string *)&local_230);
    nop();
    thunk_FUN_0546069c(auStack_168,*(undefined8 *)(this + 0x128));
    std::string::string(asStack_238,"ri");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,asStack_238);
    FUN_05462824((string *)&local_230,auStack_178);
    FUN_05474278(uVar9,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    FUN_05477b24(aSStack_248,this + 0x100);
    cVar1 = FUN_054765e8(aSStack_248);
    if (cVar1 != '\0') {
      std::string::string(asStack_238,"[PVP_PLAYBACK_EMPTYNAME]");
      StringHelper::ToStringValue(asStack_238);
      FUN_054766c8(aSStack_248,(string *)&local_230);
      FUN_05476c50((string *)&local_230);
      std::string::~string(asStack_238);
      nop();
    }
    std::string::string(asStack_238,"dn");
    auVar12 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_218,asStack_238);
    StringHelper::ToServerString(aSStack_248,auVar12._8_8_);
    FUN_05474278(auVar12._0_8_,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    base64_url_safe(puVar6,(uint)local_258);
    std::string::string((string *)&local_230,"fd");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,(string *)&local_230);
    thunk_FUN_05475e00(uVar9,asStack_240);
    std::string::~string((string *)&local_230);
    nop();
    std::string::string(asStack_238,"m");
    uVar9 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_218,asStack_238);
    MD5::MD5(aMStack_1e8,asStack_240);
    MD5::toString();
    FUN_05474278(uVar9,(string *)&local_230);
    std::string::~string((string *)&local_230);
    std::string::~string(asStack_238);
    nop();
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
    INetworkMsgProcess::RequestPlaybackUpload(this_02,(map *)asStack_218);
    std::string::~string(asStack_240);
    FUN_05476c50(aSStack_248);
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_218);
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"==== PlaybackData::SaveToServer === Client Failed! ===");
  }
  std::string::~string(asStack_250);
  AutoBuffer::~AutoBuffer((AutoBuffer *)local_228);
  std::string::~string(asStack_260);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlaybackData::AddTrigger(PTrigger*) */

void __thiscall PlaybackData::AddTrigger(PlaybackData *this,PTrigger *param_1)

{
  PFrame *this_00;
  
  this_00 = (PFrame *)getCurFrame(this);
  if (this_00 != (PFrame *)0x0) {
    PFrame::AddTrigger(this_00,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackData::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall PlaybackData::Serialize(PlaybackData *this,RtSerializeContext *param_1)

{
  RtSerialRtonSync RVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  RtClass *this_00;
  RClass *this_01;
  RtSerialRtonSync *this_02;
  RtSerialRtonKey *pRVar6;
  CRefNamedSymbolCollection *this_03;
  RAttribute *this_04;
  char *__s;
  RtSerialRtonReader *pRVar7;
  RtSerialRtonWriter *this_05;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong extraout_x1;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  uint local_4c;
  string asStack_48 [8];
  RtSerialRtonKey aRStack_40 [8];
  TGABagData aTStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtClass *)(*(code *)**(undefined8 **)this)();
  this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
  if (this_01 != (RClass *)0x0) {
    this_02 = (RtSerialRtonSync *)FUN_04ab9b04(*(undefined8 *)(param_1 + 8));
    pRVar6 = (RtSerialRtonKey *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                        *)param_1);
    cVar2 = Sexy::RtSerialRtonSync::SyncBeginObject(this_02,pRVar6);
    if (cVar2 != '\0') {
      this_03 = (CRefNamedSymbolCollection *)Reflection::RClass::GetFields(this_01,true);
      uVar5 = Reflection::CRefNamedSymbolCollection::GetCount(this_03);
      if (uVar5 != 0) {
        uVar13 = 0;
LAB_04ac075c:
        do {
          this_04 = (RAttribute *)
                    Reflection::TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
                              ((TRefNamedSymbolCollection<Reflection::RField> *)this_03,uVar13);
          __s = (char *)Reflection::RAttribute::GetName(this_04);
          std::string::string(asStack_48,__s);
          nop();
          cVar3 = FUN_04ab9aec(this_02[0x10]);
          if (cVar3 == '\0') {
LAB_04ac07bc:
            bVar4 = std::operator==(asStack_48,"fs");
            if (!bVar4) {
              uVar13 = uVar13 + 1;
              TGABagData::TGABagData(aTStack_38,(TGABagData *)asStack_48);
              Reflection::RField::InstanceRtonSync
                        ((RField *)this_04,this,this_02,(RtSerialRtonKey *)aTStack_38);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_38);
              std::string::~string(asStack_48);
              if (uVar13 == uVar5) break;
              goto LAB_04ac075c;
            }
            RVar1 = this_02[0x10];
            cVar3 = FUN_04ab9af0(RVar1);
            if (cVar3 == '\0') {
              cVar3 = FUN_04ab9aec(RVar1);
              if (cVar3 != '\0') {
                pRVar7 = (RtSerialRtonReader *)FUN_04ab9afc(*(undefined8 *)this_02);
                local_4c = 0;
                TGABagData::TGABagData(aTStack_38,(TGABagData *)asStack_48);
                Sexy::RtSerialRtonReader::BeginArray(pRVar7,(RtSerialRtonKey *)aTStack_38,&local_4c)
                ;
                std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                          ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_38);
                uVar11 = 0;
                if (local_4c != 0) {
                  do {
                    uVar11 = uVar11 + 1;
                    PFrame::PFrame((PFrame *)aTStack_38);
                    std::vector<PFrame,std::allocator<PFrame>>::push_back
                              ((vector<PFrame,std::allocator<PFrame>> *)(this + 8),
                               (PFrame *)aTStack_38);
                    PFrame::~PFrame((PFrame *)aTStack_38);
                    plVar10 = (long *)std::
                                      vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                                      ::back((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                                              *)(this + 8));
                    pcVar14 = *(code **)(*plVar10 + 0x30);
                    Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,(char *)0x0);
                    Sexy::RtSerializeContext::RtSerializeContext
                              ((RtSerializeContext *)aTStack_38,this_02,aRStack_40,0);
                    (*pcVar14)(plVar10,aTStack_38);
                    Sexy::RtSerializeContext::~RtSerializeContext((RtSerializeContext *)aTStack_38);
                    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
                  } while (uVar11 < local_4c);
                }
                Sexy::RtSerialRtonReader::EndArray(pRVar7);
              }
            }
            else {
              this_05 = (RtSerialRtonWriter *)FUN_04ab9b00(*(undefined8 *)(this_02 + 8));
              TGABagData::TGABagData(aTStack_38,(TGABagData *)asStack_48);
              uVar8 = FUN_04ab9c70(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
              Sexy::RtSerialRtonWriter::BeginArray(this_05,aTStack_38,uVar8,0xfd);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_38);
              uVar12 = 0;
              while( true ) {
                uVar8 = *(undefined8 *)(this + 8);
                uVar9 = FUN_04ab9c70(uVar8,*(undefined8 *)(this + 0x10));
                if (uVar9 <= uVar12) break;
                plVar10 = (long *)FUN_04ab9ca0(uVar8,uVar12);
                pcVar14 = *(code **)(*plVar10 + 0x30);
                Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,(char *)0x0);
                Sexy::RtSerializeContext::RtSerializeContext
                          ((RtSerializeContext *)aTStack_38,this_02,aRStack_40,0);
                (*pcVar14)(plVar10,aTStack_38);
                Sexy::RtSerializeContext::~RtSerializeContext((RtSerializeContext *)aTStack_38);
                std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                          ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
                uVar12 = uVar12 + 1;
              }
              Sexy::RtSerialRtonWriter::EndArray(this_05);
            }
          }
          else {
            pRVar7 = (RtSerialRtonReader *)FUN_04ab9afc(*(undefined8 *)this_02);
            auVar15 = Sexy::RtSerialRtonReader::GetCurrentScope(pRVar7);
            FUN_04abac88(auVar15._0_8_,auVar15._8_8_,asStack_48);
            cVar3 = FUN_04ab9ae0(extraout_x1 & 0xffffffff);
            if (cVar3 != '\0') goto LAB_04ac07bc;
          }
          uVar13 = uVar13 + 1;
          std::string::~string(asStack_48);
        } while (uVar13 != uVar5);
      }
      Sexy::RtSerialRtonSync::SyncEndObject(this_02);
      goto LAB_04ac0820;
    }
  }
  cVar2 = '\0';
LAB_04ac0820:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* PlaybackData::~PlaybackData() */

void __thiscall PlaybackData::~PlaybackData(PlaybackData *this)

{
  *(undefined ***)this = &PTR_GetClass_06948e10;
  Widget_Button_Stats::~Widget_Button_Stats((Widget_Button_Stats *)(this + 0xe0));
  std::vector<ZombieRecord,std::allocator<ZombieRecord>>::~vector
            ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 200));
  std::vector<PlaybackZombieData,std::allocator<PlaybackZombieData>>::~vector
            ((vector<PlaybackZombieData,std::allocator<PlaybackZombieData>> *)(this + 0xb0));
  std::vector<PlaybackZombieData,std::allocator<PlaybackZombieData>>::~vector
            ((vector<PlaybackZombieData,std::allocator<PlaybackZombieData>> *)(this + 0x98));
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)(this + 0x80));
  PlayerPlantData::~PlayerPlantData((PlayerPlantData *)(this + 0x30));
  std::vector<PFrame,std::allocator<PFrame>>::~vector
            ((vector<PFrame,std::allocator<PFrame>> *)(this + 8));
  nop();
  return;
}


/* PlaybackData::~PlaybackData() */

void __thiscall PlaybackData::~PlaybackData(PlaybackData *this)

{
  ~PlaybackData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackData::ClearData() */

void __thiscall PlaybackData::ClearData(PlaybackData *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  PFrame *pPVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    pPVar2 = (PFrame *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    PFrame::PFrame((PFrame *)&local_60,pPVar2);
    PFrame::ClearTriggers((PFrame *)&local_60);
    PFrame::~PFrame((PFrame *)&local_60);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_70);
  }
  std::vector<PFrame,std::allocator<PFrame>>::clear
            ((vector<PFrame,std::allocator<PFrame>> *)this_00);
  std::vector<ZombieRecord,std::allocator<ZombieRecord>>::clear
            ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 200));
  PlayerPlantData::PlayerPlantData((PlayerPlantData *)&local_60);
  PlayerPlantData::operator=((PlayerPlantData *)(this + 0x30),(PlayerPlantData *)&local_60);
  PlayerPlantData::~PlayerPlantData((PlayerPlantData *)&local_60);
  DefenderInfo::DefenderInfo((DefenderInfo *)&local_60);
  DefenderInfo::operator=((DefenderInfo *)(this + 0x80),(DefenderInfo *)&local_60);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)&local_60);
  local_60 = 0;
  local_58 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_50 = bVar1;
  PlaybackBrief::PlaybackBrief((PlaybackBrief *)&local_60);
  PlaybackBrief::operator=((PlaybackBrief *)(this + 0xe0),(PlaybackBrief *)&local_60);
  Widget_Button_Stats::~Widget_Button_Stats((Widget_Button_Stats *)&local_60);
  std::vector<PlaybackZombieData,std::allocator<PlaybackZombieData>>::clear
            ((vector<PlaybackZombieData,std::allocator<PlaybackZombieData>> *)(this + 0x98));
  std::vector<PlaybackZombieData,std::allocator<PlaybackZombieData>>::clear
            ((vector<PlaybackZombieData,std::allocator<PlaybackZombieData>> *)(this + 0xb0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlaybackData::Destroy() */

void __thiscall PlaybackData::Destroy(PlaybackData *this)

{
  ClearData(this);
  if (this != (PlaybackData *)0x0) {
    (**(code **)(*(long *)this + 0x18))(this);
  }
  return;
}


/* PlaybackData::StartRecording() */

void __thiscall PlaybackData::StartRecording(PlaybackData *this)

{
  *(undefined4 *)(this + 0x2c) = 1;
  ClearData(this);
  *(undefined4 *)(this + 0x24) = 0x32;
  *(undefined4 *)(this + 0x20) = 0x33;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  return;
}

