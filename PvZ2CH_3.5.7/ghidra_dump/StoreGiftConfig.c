// Class: StoreGiftConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreGiftConfig::StaticClassInit() */

void StoreGiftConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiftPlantData");
    (*pcVar3)(plVar2,asStack_10,FUN_04494230,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GiftPlantAvatarData");
    (*pcVar3)(plVar2,asStack_10,FUN_0449406c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"StoreGiftDataInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_044952b8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"StoreGiftConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_0449567c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoreGiftConfig::StaticGetClass() */

long * StoreGiftConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StoreGiftConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StoreGiftConfig::GetClass() const */

long * StoreGiftConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"StoreGiftConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StoreGiftConfig::GetGiftCoin(std::string const&) */

undefined4 __thiscall StoreGiftConfig::GetGiftCoin(StoreGiftConfig *this,string *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar4 = uVar3;
    uVar5 = *(undefined8 *)(this + 8);
    uVar3 = FUN_04493ef8(uVar5,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar4) {
      return 0;
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04493f28(uVar5,uVar4);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = std::operator==(param_1,(string *)(lVar2 + 0x10));
    uVar3 = uVar4 + 1;
  } while (cVar1 == '\0');
  lVar2 = FUN_04493f28(*(undefined8 *)(this + 8),uVar4);
  return *(undefined4 *)(lVar2 + 8);
}


/* StoreGiftConfig::GetGiftImage(std::string const&, std::string&) */

char __thiscall StoreGiftConfig::GetGiftImage(StoreGiftConfig *this,string *param_1,string *param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar4 = uVar3;
    uVar5 = *(undefined8 *)(this + 8);
    uVar3 = FUN_04493ef8(uVar5,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar4) {
      return '\0';
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04493f28(uVar5,uVar4);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = std::operator==(param_1,(string *)(lVar2 + 0x10));
    uVar3 = uVar4 + 1;
  } while (cVar1 == '\0');
  lVar2 = FUN_04493f28(*(undefined8 *)(this + 8),uVar4);
  thunk_FUN_05475e00(param_2,lVar2 + 0x58);
  return cVar1;
}


/* StoreGiftConfig::StoreGiftConfig() */

void __thiscall StoreGiftConfig::StoreGiftConfig(StoreGiftConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06851140;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* StoreGiftConfig::StaticNew() */

StoreGiftConfig * StoreGiftConfig::StaticNew(void)

{
  StoreGiftConfig *this;
  
  this = ::operator_new(0x20);
  StoreGiftConfig(this);
  return this;
}


/* StoreGiftConfig::GetGiftPlantArray(std::string const&, std::vector<GiftPlantData,
   std::allocator<GiftPlantData> > const*&) */

char __thiscall
StoreGiftConfig::GetGiftPlantArray(StoreGiftConfig *this,string *param_1,vector **param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 8);
  lVar3 = FUN_04493ef8(uVar6,*(undefined8 *)(this + 0x10));
  if (lVar3 != 0) {
    do {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04493f28(uVar6,uVar5);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      cVar1 = std::operator==(param_1,(string *)(lVar3 + 0x10));
      if (cVar1 != '\0') {
        lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar5);
        cVar2 = std::vector<GiftPlantData,std::allocator<GiftPlantData>>::empty
                          ((vector<GiftPlantData,std::allocator<GiftPlantData>> *)(lVar3 + 0x10));
        if (cVar2 == '\0') {
          lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar5);
          *param_2 = (vector *)(lVar3 + 0x10);
          return cVar1;
        }
      }
      uVar6 = *(undefined8 *)(this + 8);
      uVar5 = uVar5 + 1;
      uVar4 = FUN_04493ef8(uVar6,*(undefined8 *)(this + 0x10));
    } while (uVar5 < uVar4);
  }
  return '\0';
}


/* StoreGiftConfig::GetGiftAvatarPlantPieceArray(std::string const&,
   std::vector<GiftPlantAvatarData, std::allocator<GiftPlantAvatarData> > const*&) */

char __thiscall
StoreGiftConfig::GetGiftAvatarPlantPieceArray
          (StoreGiftConfig *this,string *param_1,vector **param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 8);
  lVar3 = FUN_04493ef8(uVar6,*(undefined8 *)(this + 0x10));
  if (lVar3 != 0) {
    do {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04493f28(uVar6,uVar5);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      cVar1 = std::operator==(param_1,(string *)(lVar3 + 0x10));
      if (cVar1 != '\0') {
        lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar5);
        cVar2 = std::vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>>::empty
                          ((vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>> *)
                           (lVar3 + 0x28));
        if (cVar2 == '\0') {
          lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar5);
          *param_2 = (vector *)(lVar3 + 0x28);
          return cVar1;
        }
      }
      uVar6 = *(undefined8 *)(this + 8);
      uVar5 = uVar5 + 1;
      uVar4 = FUN_04493ef8(uVar6,*(undefined8 *)(this + 0x10));
    } while (uVar5 < uVar4);
  }
  return '\0';
}


/* StoreGiftConfig::GetGiftUnlockAvatarPlantArray(std::string const&, std::vector<std::string,
   std::allocator<std::string > > const*&) */

char __thiscall
StoreGiftConfig::GetGiftUnlockAvatarPlantArray
          (StoreGiftConfig *this,string *param_1,vector **param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 8);
  lVar3 = FUN_04493ef8(uVar6,*(undefined8 *)(this + 0x10));
  if (lVar3 != 0) {
    do {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04493f28(uVar6,uVar5);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      cVar1 = std::operator==(param_1,(string *)(lVar3 + 0x10));
      if (cVar1 != '\0') {
        lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar5);
        cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                          ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x40));
        if (cVar2 == '\0') {
          lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar5);
          *param_2 = (vector *)(lVar3 + 0x40);
          return cVar1;
        }
      }
      uVar6 = *(undefined8 *)(this + 8);
      uVar5 = uVar5 + 1;
      uVar4 = FUN_04493ef8(uVar6,*(undefined8 *)(this + 0x10));
    } while (uVar5 < uVar4);
  }
  return '\0';
}


/* StoreGiftConfig::ActiveGift(std::string const&) */

char __thiscall StoreGiftConfig::ActiveGift(StoreGiftConfig *this,string *param_1)

{
  char cVar1;
  char cVar2;
  PlayerInfo *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  uVar4 = 0;
  do {
    uVar7 = uVar4;
    uVar6 = *(undefined8 *)(this + 8);
    uVar4 = FUN_04493ef8(uVar6,*(undefined8 *)(this + 0x10));
    if (uVar4 <= uVar7) {
      return '\0';
    }
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04493f28(uVar6,uVar7);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    cVar1 = std::operator==(param_1,(string *)(lVar3 + 0x10));
    uVar4 = uVar7 + 1;
  } while (cVar1 == '\0');
  lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
  if (0 < *(int *)(lVar3 + 8)) {
    PlayerInfo::AddCoins(this_00,*(int *)(lVar3 + 8));
    lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
  }
  cVar2 = std::vector<GiftPlantData,std::allocator<GiftPlantData>>::empty
                    ((vector<GiftPlantData,std::allocator<GiftPlantData>> *)(lVar3 + 0x10));
  if (cVar2 == '\0') {
    uVar4 = 0;
    while( true ) {
      lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
      uVar6 = *(undefined8 *)(lVar3 + 0x10);
      uVar5 = FUN_04493f34(uVar6,*(undefined8 *)(lVar3 + 0x18));
      if (uVar5 <= uVar4) break;
      lVar3 = FUN_04493f64(uVar6,uVar4);
      PlayerInfo::AddPlantPieceCount
                ((string *)this_00,(int)lVar3,SUB41(*(undefined4 *)(lVar3 + 0x10),0));
      uVar4 = uVar4 + 1;
    }
  }
  else {
    lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
  }
  cVar2 = std::vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>>::empty
                    ((vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>> *)
                     (lVar3 + 0x28));
  if (cVar2 == '\0') {
    uVar4 = 0;
    while( true ) {
      lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      uVar5 = FUN_04493f70(uVar6,*(undefined8 *)(lVar3 + 0x30));
      if (uVar5 <= uVar4) break;
      lVar3 = FUN_04493fa0(uVar6,uVar4);
      PlayerInfo::AddAvatarPiecesCount(this_00,lVar3,0,*(undefined4 *)(lVar3 + 0x10),1);
      uVar4 = uVar4 + 1;
    }
  }
  else {
    lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
  }
  cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x40));
  uVar4 = 0;
  if (cVar2 == '\0') {
    while( true ) {
      lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
      uVar6 = *(undefined8 *)(lVar3 + 0x40);
      uVar5 = FUN_04493fac(uVar6,*(undefined8 *)(lVar3 + 0x48));
      if (uVar5 <= uVar4) break;
      uVar6 = FUN_04493fb8(uVar6,uVar4);
      cVar2 = PlayerInfo::IsPlantAvatarUnLocked(this_00,uVar6,0,0);
      if (cVar2 == '\0') {
        lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
        uVar6 = FUN_04493fb8(*(undefined8 *)(lVar3 + 0x40),uVar4);
        PlayerInfo::UnlockPlantAvatar(this_00,uVar6,0);
        lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
        uVar6 = FUN_04493fb8(*(undefined8 *)(lVar3 + 0x40),uVar4);
        PlayerInfo::SetPlantAvatar(this_00,uVar6,0);
        uVar4 = uVar4 + 1;
      }
      else {
        lVar3 = FUN_04493f28(*(undefined8 *)(this + 8),uVar7);
        uVar6 = FUN_04493fb8(*(undefined8 *)(lVar3 + 0x40),uVar4);
        PlayerInfo::AddAvatarPiecesCount(this_00,uVar6,0,0xf,0);
        uVar4 = uVar4 + 1;
      }
    }
  }
  return cVar1;
}


/* StoreGiftConfig::~StoreGiftConfig() */

void __thiscall StoreGiftConfig::~StoreGiftConfig(StoreGiftConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06851140;
  std::vector<StoreGiftDataInfo,std::allocator<StoreGiftDataInfo>>::~vector
            ((vector<StoreGiftDataInfo,std::allocator<StoreGiftDataInfo>> *)(this + 8));
  nop();
  return;
}


/* StoreGiftConfig::~StoreGiftConfig() */

void __thiscall StoreGiftConfig::~StoreGiftConfig(StoreGiftConfig *this)

{
  ~StoreGiftConfig(this);
  AK::FreeHook(this);
  return;
}

