// Class: OutroManager


/* OutroManager::~OutroManager() */

void __thiscall OutroManager::~OutroManager(OutroManager *this)

{
  *(undefined ***)this = &PTR_GetClass_067938a0;
  nop();
  return;
}


/* OutroManager::~OutroManager() */

void __thiscall OutroManager::~OutroManager(OutroManager *this)

{
  ~OutroManager(this);
  AK::FreeHook(this);
  return;
}


/* OutroManager::OutroManager() */

void __thiscall OutroManager::OutroManager(OutroManager *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_067938a0;
  return;
}


/* OutroManager::StaticNew() */

OutroManager * OutroManager::StaticNew(void)

{
  OutroManager *this;
  
  this = ::operator_new(8);
  OutroManager(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OutroManager::StaticClassInit() */

void OutroManager::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"OutroManager");
    (*pcVar2)(plVar1,asStack_10,FUN_03f0afc4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OutroManager::StaticGetClass() */

long * OutroManager::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OutroManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OutroManager::GetClass() const */

long * OutroManager::GetClass(void)

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
  (*pcVar3)(plVar1,"OutroManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OutroManager::VerifyEntries() */

void OutroManager::VerifyEntries(void)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  bool *pbVar9;
  bool *pbVar10;
  ulong uVar11;
  RtId *pRVar12;
  code *pcVar13;
  undefined1 uVar14;
  bool abStack_68 [8];
  bool abStack_60 [8];
  RtId aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  Sexy aSStack_48 [8];
  string asStack_40 [8];
  Sexy aSStack_38 [8];
  string asStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  pRVar12 = (RtId *)&DAT_06ae1dc8;
  uVar14 = 1;
  do {
    Sexy::RtId::RtId(aRStack_58,pRVar12);
    uVar2 = Sexy::RtId::GetAliasNameIndex(aRStack_58);
    Sexy::RtName::RtName(aRStack_28,uVar2);
    uVar2 = Sexy::RtId::GetPackageNameIndex(aRStack_58);
    Sexy::RtName::RtName(aRStack_18,uVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aRStack_58);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
    if (cVar1 == '\0') {
      pbVar10 = abStack_60;
      uVar4 = Sexy::RtName::GetString();
      pbVar9 = abStack_68;
      FUN_05478178(aSStack_48,uVar4);
      Sexy::WStringToString(aSStack_48,(wstring *)0x0,pbVar9);
      uVar4 = FUN_0547429c(asStack_40);
      uVar5 = Sexy::RtName::GetString();
      FUN_05478178(aSStack_38,uVar5);
      Sexy::WStringToString(aSStack_38,(wstring *)0x0,pbVar10);
      uVar5 = FUN_0547429c(asStack_30);
      Sexy::OutputDebugStrF
                ((wchar_t *)" - [%d] \'%s\'@\'%s\' could not be found!\n",uVar11,uVar4,uVar5);
      std::string::~string(asStack_30);
      FUN_05476c50(aSStack_38);
LAB_03f0acd8:
      uVar14 = 0;
      nop();
      std::string::~string(asStack_40);
      FUN_05476c50(aSStack_48);
      nop();
    }
    else {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      pcVar13 = *(code **)(*plVar3 + 0x20);
      uVar4 = OutroModuleProperties::StaticGetClass();
      cVar1 = (*pcVar13)(plVar3,uVar4);
      if (cVar1 == '\0') {
        pbVar10 = abStack_60;
        uVar4 = Sexy::RtName::GetString();
        pbVar9 = abStack_68;
        FUN_05478178(aSStack_48,uVar4);
        Sexy::WStringToString(aSStack_48,(wstring *)0x0,pbVar9);
        uVar4 = FUN_0547429c(asStack_40);
        uVar5 = Sexy::RtName::GetString();
        FUN_05478178(aSStack_38,uVar5);
        Sexy::WStringToString(aSStack_38,(wstring *)0x0,pbVar10);
        uVar5 = FUN_0547429c(asStack_30);
        puVar6 = (undefined8 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        lVar7 = (**(code **)*puVar6)();
        uVar8 = FUN_03f0a9b0(*(undefined8 *)(lVar7 + 8));
        Sexy::OutputDebugStrF
                  ((wchar_t *)
                   " - [%d] \'%s\'@\'%s\' does not point to a OutroModuleProperties object! Actual object type is %s! \n"
                   ,uVar11,uVar4,uVar5,uVar8);
        std::string::~string(asStack_30);
        FUN_05476c50(aSStack_38);
        goto LAB_03f0acd8;
      }
    }
    uVar2 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar2;
    pRVar12 = pRVar12 + 0x10;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtName::~RtName(aRStack_28);
    Sexy::RtId::~RtId(aRStack_58);
    if (uVar2 == 0xd) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar14);
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OutroManager::GetOutro(OutroType) */

void __thiscall OutroManager::GetOutro(RtWeakPtr<Sexy::SoundResource> *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar2 + 0x78));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              (param_1,(RtWeakPtrBase *)(&DAT_06ae1dc8 + (long)param_2 * 0x10));
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

