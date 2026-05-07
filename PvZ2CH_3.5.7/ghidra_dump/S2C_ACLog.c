// Class: S2C_ACLog


/* S2C_ACLog::ClearLogIndex() */

void S2C_ACLog::ClearLogIndex(void)

{
  m_logIndex = 0;
  return;
}


/* S2C_ACLog::S2C_ACLog(S2C_ACLog const&) */

void __thiscall S2C_ACLog::S2C_ACLog(S2C_ACLog *this,S2C_ACLog *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined ***)this = &PTR_GetClass_0660f780;
  *(undefined4 *)(this + 0xc) = uVar1;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<ACLOG_PlantStarLevel,std::allocator<ACLOG_PlantStarLevel>>::vector
            ((vector<ACLOG_PlantStarLevel,std::allocator<ACLOG_PlantStarLevel>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<ACLOG_PlantPieceRecord,std::allocator<ACLOG_PlantPieceRecord>>::vector
            ((vector<ACLOG_PlantPieceRecord,std::allocator<ACLOG_PlantPieceRecord>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<ACLOG_PlantAvatarInfo,std::allocator<ACLOG_PlantAvatarInfo>>::vector
            ((vector<ACLOG_PlantAvatarInfo,std::allocator<ACLOG_PlantAvatarInfo>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  std::vector<ACLOG_PlantAvatarPiecesInfo,std::allocator<ACLOG_PlantAvatarPiecesInfo>>::vector
            ((vector<ACLOG_PlantAvatarPiecesInfo,std::allocator<ACLOG_PlantAvatarPiecesInfo>> *)
             (this + 0x78),(vector *)(param_1 + 0x78));
  std::vector<ACLOG_AccessoryPiece,std::allocator<ACLOG_AccessoryPiece>>::vector
            ((vector<ACLOG_AccessoryPiece,std::allocator<ACLOG_AccessoryPiece>> *)(this + 0x90),
             (vector *)(param_1 + 0x90));
  std::vector<ACLOG_MaterialInfo,std::allocator<ACLOG_MaterialInfo>>::vector
            ((vector<ACLOG_MaterialInfo,std::allocator<ACLOG_MaterialInfo>> *)(this + 0xa8),
             (vector *)(param_1 + 0xa8));
  return;
}


/* S2C_ACLog::TEMPNAMEPLACEHOLDERVALUE(S2C_ACLog const&) */

S2C_ACLog * __thiscall S2C_ACLog::operator=(S2C_ACLog *this,S2C_ACLog *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<ACLOG_PlantStarLevel,std::allocator<ACLOG_PlantStarLevel>>::operator=
            ((vector<ACLOG_PlantStarLevel,std::allocator<ACLOG_PlantStarLevel>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<ACLOG_PlantPieceRecord,std::allocator<ACLOG_PlantPieceRecord>>::operator=
            ((vector<ACLOG_PlantPieceRecord,std::allocator<ACLOG_PlantPieceRecord>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<ACLOG_PlantAvatarInfo,std::allocator<ACLOG_PlantAvatarInfo>>::operator=
            ((vector<ACLOG_PlantAvatarInfo,std::allocator<ACLOG_PlantAvatarInfo>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  std::vector<ACLOG_PlantAvatarPiecesInfo,std::allocator<ACLOG_PlantAvatarPiecesInfo>>::operator=
            ((vector<ACLOG_PlantAvatarPiecesInfo,std::allocator<ACLOG_PlantAvatarPiecesInfo>> *)
             (this + 0x78),(vector *)(param_1 + 0x78));
  std::vector<ACLOG_AccessoryPiece,std::allocator<ACLOG_AccessoryPiece>>::operator=
            ((vector<ACLOG_AccessoryPiece,std::allocator<ACLOG_AccessoryPiece>> *)(this + 0x90),
             (vector *)(param_1 + 0x90));
  std::vector<ACLOG_MaterialInfo,std::allocator<ACLOG_MaterialInfo>>::operator=
            ((vector<ACLOG_MaterialInfo,std::allocator<ACLOG_MaterialInfo>> *)(this + 0xa8),
             (vector *)(param_1 + 0xa8));
  return this;
}


/* S2C_ACLog::~S2C_ACLog() */

void __thiscall S2C_ACLog::~S2C_ACLog(S2C_ACLog *this)

{
  *(undefined ***)this = &PTR_GetClass_0660f780;
  std::vector<ACLOG_MaterialInfo,std::allocator<ACLOG_MaterialInfo>>::~vector
            ((vector<ACLOG_MaterialInfo,std::allocator<ACLOG_MaterialInfo>> *)(this + 0xa8));
  std::vector<ACLOG_AccessoryPiece,std::allocator<ACLOG_AccessoryPiece>>::~vector
            ((vector<ACLOG_AccessoryPiece,std::allocator<ACLOG_AccessoryPiece>> *)(this + 0x90));
  std::vector<ACLOG_PlantAvatarPiecesInfo,std::allocator<ACLOG_PlantAvatarPiecesInfo>>::~vector
            ((vector<ACLOG_PlantAvatarPiecesInfo,std::allocator<ACLOG_PlantAvatarPiecesInfo>> *)
             (this + 0x78));
  std::vector<ACLOG_PlantAvatarInfo,std::allocator<ACLOG_PlantAvatarInfo>>::~vector
            ((vector<ACLOG_PlantAvatarInfo,std::allocator<ACLOG_PlantAvatarInfo>> *)(this + 0x60));
  std::vector<ACLOG_PlantPieceRecord,std::allocator<ACLOG_PlantPieceRecord>>::~vector
            ((vector<ACLOG_PlantPieceRecord,std::allocator<ACLOG_PlantPieceRecord>> *)(this + 0x48))
  ;
  std::vector<ACLOG_PlantStarLevel,std::allocator<ACLOG_PlantStarLevel>>::~vector
            ((vector<ACLOG_PlantStarLevel,std::allocator<ACLOG_PlantStarLevel>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  nop();
  return;
}


/* S2C_ACLog::~S2C_ACLog() */

void __thiscall S2C_ACLog::~S2C_ACLog(S2C_ACLog *this)

{
  ~S2C_ACLog(this);
  AK::FreeHook(this);
  return;
}


/* S2C_ACLog::S2C_ACLog(S2C_ACLog&&) */

void __thiscall S2C_ACLog::S2C_ACLog(S2C_ACLog *this,S2C_ACLog *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined ***)this = &PTR_GetClass_0660f780;
  *(undefined4 *)(this + 0xc) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x78),(vector *)(param_1 + 0x78));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x90),(vector *)(param_1 + 0x90));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0xa8),(vector *)(param_1 + 0xa8));
  return;
}


/* S2C_ACLog::RefreshLogIndex() */

void S2C_ACLog::RefreshLogIndex(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  m_logIndex = PlayerInfo::GetACLogIndex(this_00);
  return;
}


/* S2C_ACLog::S2C_ACLog() */

void __thiscall S2C_ACLog::S2C_ACLog(S2C_ACLog *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0660f780;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)(this + 8) = m_logIndex;
  m_logIndex = m_logIndex + 1;
  return;
}


/* S2C_ACLog::StaticNew() */

S2C_ACLog * S2C_ACLog::StaticNew(void)

{
  S2C_ACLog *this;
  
  this = ::operator_new(0xc0);
  S2C_ACLog(this);
  return this;
}


/* S2C_ACLog::SetUnlockPlant(int) */

void __thiscall S2C_ACLog::SetUnlockPlant(S2C_ACLog *this,int param_1)

{
  int local_4;
  
  local_4 = param_1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x18),&local_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ACLog::SetPlantLevel(int, int) */

void __thiscall S2C_ACLog::SetPlantLevel(S2C_ACLog *this,int param_1,int param_2)

{
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WeeklyGameModesCount::WeeklyGameModesCount((WeeklyGameModesCount *)&local_10);
  local_10 = param_1;
  local_c = param_2;
  std::vector<ACLOG_PlantStarLevel,std::allocator<ACLOG_PlantStarLevel>>::push_back
            ((vector<ACLOG_PlantStarLevel,std::allocator<ACLOG_PlantStarLevel>> *)(this + 0x30),
             (ACLOG_PlantStarLevel *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ACLog::SetPlantPieces(int, int) */

void __thiscall S2C_ACLog::SetPlantPieces(S2C_ACLog *this,int param_1,int param_2)

{
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WeeklyGameModesCount::WeeklyGameModesCount((WeeklyGameModesCount *)&local_10);
  local_10 = param_1;
  local_c = param_2;
  std::vector<ACLOG_PlantPieceRecord,std::allocator<ACLOG_PlantPieceRecord>>::push_back
            ((vector<ACLOG_PlantPieceRecord,std::allocator<ACLOG_PlantPieceRecord>> *)(this + 0x48),
             (ACLOG_PlantPieceRecord *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ACLog::SetAccessoryPieces(std::string const&, int) */

void __thiscall S2C_ACLog::SetAccessoryPieces(S2C_ACLog *this,string *param_1,int param_2)

{
  PlantGiftBaseData aPStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantGiftBaseData::PlantGiftBaseData(aPStack_18);
  thunk_FUN_05475e00(aPStack_18,param_1);
  local_10 = param_2;
  std::vector<ACLOG_AccessoryPiece,std::allocator<ACLOG_AccessoryPiece>>::push_back
            ((vector<ACLOG_AccessoryPiece,std::allocator<ACLOG_AccessoryPiece>> *)(this + 0x90),
             (ACLOG_AccessoryPiece *)aPStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ACLog::SetMaterial(int, int) */

void __thiscall S2C_ACLog::SetMaterial(S2C_ACLog *this,int param_1,int param_2)

{
  int local_18;
  LawnKeyField aLStack_14 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ACLOG_MaterialInfo::ACLOG_MaterialInfo((ACLOG_MaterialInfo *)&local_18);
  local_18 = param_1;
  LawnKeyField::operator=(aLStack_14,param_2);
  std::vector<ACLOG_MaterialInfo,std::allocator<ACLOG_MaterialInfo>>::push_back
            ((vector<ACLOG_MaterialInfo,std::allocator<ACLOG_MaterialInfo>> *)(this + 0xa8),
             (ACLOG_MaterialInfo *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ACLog::StaticClassInit() */

void S2C_ACLog::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_20,"ACLOG_PlantPieceRecord");
      (*pcVar3)(plVar2,asStack_20,FUN_03257650,8,0);
      std::string::~string(asStack_20);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"ACLOG_PlantStarLevel");
    (*pcVar3)(plVar2,asStack_20,FUN_032574fc,8,0);
    std::string::~string(asStack_20);
    nop();
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_38[0] = 0xffffffff;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"none",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"normal",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PlantAvatarType");
    (*pcVar3)(plVar2,apStack_30,asStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)asStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"ACLOG_PlantAvatarInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_03258358,0x20,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"ACLOG_PlantAvatarPiecesInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_0325851c,0x20,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"ACLOG_AccessoryPiece");
    (*pcVar3)(plVar2,asStack_20,FUN_03257868,0x10,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"ACLOG_MaterialInfo");
    (*pcVar3)(plVar2,asStack_20,FUN_032573a8,0xc,0);
    std::string::~string(asStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"S2C_ACLog");
    (*pcVar3)(plVar2,asStack_20,FUN_0325a804,0xc0,0);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* S2C_ACLog::StaticGetClass() */

long * S2C_ACLog::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ACLog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ACLog::GetClass() const */

long * S2C_ACLog::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ACLog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ACLog::SetPlantAvatar(int, PlantAvatarType) */

void __thiscall S2C_ACLog::SetPlantAvatar(S2C_ACLog *this,undefined4 param_1,int param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  PlantAvatarInfo::PlantAvatarInfo((PlantAvatarInfo *)&local_28);
  uVar5 = local_20;
  local_28 = param_1;
  local_24 = param_3;
  lVar1 = FUN_03257370(local_20,local_18);
  if (lVar1 != 0) {
    do {
      if (param_3 == (int)uVar4) {
        puVar2 = (undefined1 *)FUN_032577ac(uVar5,uVar4);
        *puVar2 = 1;
      }
      else {
        puVar2 = (undefined1 *)FUN_032577ac(uVar5,uVar4);
        *puVar2 = 0;
      }
      uVar5 = local_20;
      uVar4 = uVar4 + 1;
      uVar3 = FUN_03257370(local_20,local_18);
    } while (uVar4 < uVar3);
  }
  std::vector<ACLOG_PlantAvatarInfo,std::allocator<ACLOG_PlantAvatarInfo>>::push_back
            ((vector<ACLOG_PlantAvatarInfo,std::allocator<ACLOG_PlantAvatarInfo>> *)(this + 0x60),
             (ACLOG_PlantAvatarInfo *)&local_28);
  PlantAvatarInfo::~PlantAvatarInfo((PlantAvatarInfo *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ACLog::SetPlantAvatarPieces(int, PlantAvatarType, int) */

void __thiscall
S2C_ACLog::SetPlantAvatarPieces(S2C_ACLog *this,undefined4 param_1,int param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  PlantAvatarPiecesInfo::PlantAvatarPiecesInfo((PlantAvatarPiecesInfo *)local_28);
  local_28[0] = param_1;
  lVar1 = FUN_03257398(local_20,local_18);
  if (lVar1 != 0) {
    do {
      if (param_3 == (int)lVar3) {
        puVar2 = (undefined4 *)FUN_032577b4(local_20,lVar3);
        *puVar2 = param_4;
      }
      else {
        puVar2 = (undefined4 *)FUN_032577b4(local_20,lVar3);
        *puVar2 = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar1);
  }
  std::vector<ACLOG_PlantAvatarPiecesInfo,std::allocator<ACLOG_PlantAvatarPiecesInfo>>::push_back
            ((vector<ACLOG_PlantAvatarPiecesInfo,std::allocator<ACLOG_PlantAvatarPiecesInfo>> *)
             (this + 0x78),(ACLOG_PlantAvatarPiecesInfo *)local_28);
  std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
            ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

