// Class: CamelMinigameModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::StaticClassInit() */

void CamelMinigameModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"CamelMinigameModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03bb29bc,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CamelMinigameModule::StaticGetClass() */

long * CamelMinigameModule::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"CamelMinigameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CamelMinigameModule::getProgress() */

float CamelMinigameModule::getProgress(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  WaveManager *this;
  
  lVar3 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if (lVar3 == 0) {
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_03bb10a0(*(undefined4 *)(lVar3 + 0x24));
    if (iVar1 == 0) {
      return 0.0;
    }
    iVar2 = FUN_03bb109c(*(undefined4 *)(lVar3 + 0x20));
  }
  this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this != (WaveManager *)0x0) {
    iVar1 = WaveManager::GetWaveCount(this);
    if (iVar1 == 0) {
      return 0.0;
    }
    iVar2 = FUN_03bb10a4(*(undefined4 *)(this + 0x28));
  }
  return (float)iVar2 / (float)iVar1;
}


/* CamelMinigameModule::onEndLevel() */

void __thiscall CamelMinigameModule::onEndLevel(CamelMinigameModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  AnimationMgr *this_01;
  long *plVar2;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(this_01);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* CamelMinigameModule::addToRenderQueue(RenderQueue*) */

void __thiscall
CamelMinigameModule::addToRenderQueue(CamelMinigameModule *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::introduceDave() */

void __thiscall CamelMinigameModule::introduceDave(CamelMinigameModule *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"4200");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<CamelMinigameModule,void(CamelMinigameModule::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CamelMinigameModule::setupDaveProlog() */

void __thiscall CamelMinigameModule::setupDaveProlog(CamelMinigameModule *this)

{
  introduceDave(this);
  Board::PlaceLawnItems();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::setCardState(CamelMinigameModule::CardState) */

void __thiscall CamelMinigameModule::setCardState(CamelMinigameModule *this,int param_2)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  bool bVar1;
  ZombieCamelTouch *this_02;
  ZombieCamelTouch *this_03;
  RtObject *pRVar2;
  ZombieCamelTouch *pZVar3;
  undefined4 uVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 100) != param_2) {
    if (*(int *)(this + 100) == 4) {
      this_00 = (RtWeakPtr *)(this + 0x70);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        pRVar2 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pZVar3 = Sexy::RtObject::Cast<ZombieCamelTouch>(pRVar2);
        ZombieCamelTouch::FlipCard(pZVar3,false);
      }
      this_01 = (RtWeakPtr *)(this + 0x78);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar1) {
        pRVar2 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pZVar3 = Sexy::RtObject::Cast<ZombieCamelTouch>(pRVar2);
        ZombieCamelTouch::FlipCard(pZVar3,false);
      }
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
    *(int *)(this + 100) = param_2;
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x68) = uVar4;
    if (param_2 == 0) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x78),(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
    else if (param_2 == 3) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
      nop();
      ZombieCamelTouch::TriggerMatched(this_02);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
      nop();
      ZombieCamelTouch::TriggerMatched(this_03);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x78),(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CamelMinigameModule::CamelMinigameModule() */

void __thiscall CamelMinigameModule::CamelMinigameModule(CamelMinigameModule *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06737be0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  Sexy::Point::Point((Point *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  return;
}


/* CamelMinigameModule::StaticNew() */

CamelMinigameModule * CamelMinigameModule::StaticNew(void)

{
  CamelMinigameModule *this;
  
  this = ::operator_new(0xa0);
  CamelMinigameModule(this);
  return this;
}


/* CamelMinigameModule::~CamelMinigameModule() */

void __thiscall CamelMinigameModule::~CamelMinigameModule(CamelMinigameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06737be0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x80));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* CamelMinigameModule::~CamelMinigameModule() */

void __thiscall CamelMinigameModule::~CamelMinigameModule(CamelMinigameModule *this)

{
  ~CamelMinigameModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::getUnmatchedLeftCardType() */

void __thiscall CamelMinigameModule::getUnmatchedLeftCardType(CamelMinigameModule *this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar12;
  RtObject *pRVar13;
  ZombieCamelTouch *pZVar14;
  int extraout_w1;
  int extraout_w1_00;
  uint uVar15;
  undefined8 *puVar16;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar2 = *(uint *)(pRVar8 + 0x7c);
  lVar3 = -((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2) + 0x12 &
           0xfffffffffffffff0);
  if (0 < (int)uVar2) {
    uVar1 = (uVar2 - 4 >> 2) + 1;
    uVar7 = uVar1 * 4;
    if (uVar2 - 1 < 3) {
      uVar7 = 0;
    }
    else {
      uVar15 = 0;
      puVar16 = (undefined8 *)(&stack0xffffffffffffff70 + lVar3);
      do {
        puVar16[1] = 0;
        *puVar16 = 0;
        uVar15 = uVar15 + 1;
        puVar16 = puVar16 + 2;
      } while (uVar15 < uVar1);
      if (uVar2 == uVar7) goto LAB_03bb25c0;
    }
    *(undefined4 *)(&stack0xffffffffffffff70 + (long)(int)uVar7 * 4 + lVar3) = 0;
    if ((int)(uVar7 + 1) < (int)uVar2) {
      *(undefined4 *)(&stack0xffffffffffffff70 + (long)(int)(uVar7 + 1) * 4 + lVar3) = 0;
      if ((int)(uVar7 + 2) < (int)uVar2) {
        *(undefined4 *)(&stack0xffffffffffffff70 + (long)(int)(uVar7 + 2) * 4 + lVar3) = 0;
      }
    }
  }
LAB_03bb25c0:
  uVar9 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar9,0x29);
  while (bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar4) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    cVar5 = (**(code **)(*plVar11 + 0x328))();
    if (cVar5 == '\0') {
      pRVar13 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pZVar14 = Sexy::RtObject::Cast<ZombieCamelTouch>(pRVar13);
      uVar10 = ZombieCamelTouch::GetCardType(pZVar14);
      if (((int)uVar10 < (int)uVar2) && (-1 < (int)uVar10)) {
        uVar10 = -(uVar10 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar10 & 0xffffffff) << 2;
        *(int *)(&stack0xffffffffffffff70 + uVar10 + lVar3) =
             *(int *)(&stack0xffffffffffffff70 + uVar10 + lVar3) + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar9 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar9,0x29);
  do {
    bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar4) {
      iVar6 = -1;
LAB_03bb2734:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar6);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    cVar5 = (**(code **)(*plVar11 + 0x328))();
    if (cVar5 == '\0') {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pfVar12 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(this_00);
      if (*pfVar12 < 400.0) {
        pRVar13 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        pZVar14 = Sexy::RtObject::Cast<ZombieCamelTouch>(pRVar13);
        iVar6 = ZombieCamelTouch::GetCardType(pZVar14);
        if (((iVar6 < (int)uVar2) && (-1 < iVar6)) &&
           (*(int *)(&stack0xffffffffffffff70 + (long)iVar6 * 4 + lVar3) == 1)) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          goto LAB_03bb2734;
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_00);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::slowDownLeftMostZombies() */

void CamelMinigameModule::slowDownLeftMostZombies(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  float *pfVar5;
  Zombie *pZVar6;
  int extraout_w1;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var4);
    if (320.0 <= *pfVar5) {
LAB_03bb27e8:
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var4);
      if (400.0 <= *pfVar5) goto LAB_03bb2800;
LAB_03bb28c8:
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar3,9);
      if (cVar2 == '\0') goto LAB_03bb2800;
      pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      Zombie::EndCondition(pZVar6,9);
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var4);
      if (*pfVar5 < 480.00003) goto LAB_03bb2908;
LAB_03bb2818:
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var4);
      fVar7 = *pfVar5;
    }
    else {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar3,8);
      if (cVar2 == '\0') goto LAB_03bb27e8;
      pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      Zombie::EndCondition(pZVar6,8);
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var4);
      if (*pfVar5 < 400.0) goto LAB_03bb28c8;
LAB_03bb2800:
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var4);
      if (480.00003 <= *pfVar5) goto LAB_03bb2818;
LAB_03bb2908:
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar3,10);
      if (cVar2 == '\0') goto LAB_03bb2818;
      pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      Zombie::EndCondition(pZVar6,10);
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var4);
      fVar7 = *pfVar5;
    }
    if (fVar7 < 600.0) {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar3,0xb);
      if (cVar2 != '\0') {
        pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        Zombie::EndCondition(pZVar6,0xb);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* CamelMinigameModule::checkCurrentPairForMatchAndChangeState() */

void __thiscall
CamelMinigameModule::checkCurrentPairForMatchAndChangeState(CamelMinigameModule *this)

{
  int iVar1;
  int iVar2;
  RtObject *pRVar3;
  ZombieCamelTouch *pZVar4;
  char *pcVar5;
  
  pRVar3 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  pZVar4 = Sexy::RtObject::Cast<ZombieCamelTouch>(pRVar3);
  iVar1 = ZombieCamelTouch::GetCardType(pZVar4);
  pRVar3 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  pZVar4 = Sexy::RtObject::Cast<ZombieCamelTouch>(pRVar3);
  iVar2 = ZombieCamelTouch::GetCardType(pZVar4);
  if (iVar1 != iVar2) {
    setCardState(this,4);
    return;
  }
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_Zomb_Egypt_Match_Success");
  setCardState(this,3);
  return;
}


/* CamelMinigameModule::updateCardState() */

void __thiscall CamelMinigameModule::updateCardState(CamelMinigameModule *this)

{
  int iVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = *(int *)(this + 100);
  do {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    iVar1 = *(int *)(this + 100);
    if (iVar1 == 3) {
      fVar5 = (float)PVZ_T();
      if (*(float *)(pRVar3 + 0x84) + *(float *)(this + 0x68) < fVar5) {
LAB_03bb3078:
        setCardState(this,0);
        iVar1 = *(int *)(this + 100);
      }
      else {
LAB_03bb3040:
        iVar1 = *(int *)(this + 100);
      }
    }
    else {
      if (iVar1 == 4) {
        fVar5 = (float)PVZ_T();
        if (*(float *)(pRVar3 + 0x88) + *(float *)(this + 0x68) < fVar5) goto LAB_03bb3078;
        goto LAB_03bb3040;
      }
      if (iVar1 == 2) {
        fVar5 = (float)PVZ_T();
        if (fVar5 <= *(float *)(pRVar3 + 0x80) + *(float *)(this + 0x68)) goto LAB_03bb3040;
        checkCurrentPairForMatchAndChangeState(this);
        iVar1 = *(int *)(this + 100);
      }
    }
    bVar2 = iVar4 == iVar1;
    iVar4 = iVar1;
    if (bVar2) {
      return;
    }
  } while( true );
}


/* CamelMinigameModule::OnCamelTouch(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
CamelMinigameModule::OnCamelTouch(CamelMinigameModule *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  char cVar2;
  ZombieCamelTouch *this_00;
  RtObject *pRVar3;
  ZombieCamelTouch *pZVar4;
  
  if (*(int *)(this + 100) == 2) {
    checkCurrentPairForMatchAndChangeState(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  nop();
  cVar2 = ZombieCamelTouch::HasBeenMatched(this_00);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 100);
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
      }
      else {
        if (iVar1 != 4) {
          return;
        }
        *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
        setCardState(this);
      }
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)param_2);
      pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      pZVar4 = Sexy::RtObject::Cast<ZombieCamelTouch>(pRVar3);
      ZombieCamelTouch::FlipCard(pZVar4,true);
      setCardState(this,1);
      return;
    }
    cVar2 = Sexy::RtWeakPtrBase::operator!=((RtWeakPtrBase *)param_2,(RtWeakPtrBase *)(this + 0x70))
    ;
    if (cVar2 != '\0') {
      *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
      pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      pZVar4 = Sexy::RtObject::Cast<ZombieCamelTouch>(pRVar3);
      ZombieCamelTouch::FlipCard(pZVar4,true);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x78),(RtWeakPtr *)param_2);
      setCardState(this,2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::onGameplayStarted() */

void CamelMinigameModule::onGameplayStarted(void)

{
  UIWidget *this;
  PowerupManager *this_00;
  string *psVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPowerupHolder");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    this_00 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
    std::string::string(asStack_18,"powerup_special_item_x_ray");
    ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar1);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
    lVar3 = PowerupManager::GetBasePowerup(this_00,(PowerupType *)pRVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    if (lVar3 == 0) {
      UIWidget::SetVisible(this,false);
    }
    else {
      UIWidget::SetVisible(this,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::showTools(bool) */

void __thiscall CamelMinigameModule::showTools(CamelMinigameModule *this,bool param_1)

{
  UIWidget *pUVar1;
  PowerupManager *this_00;
  string *psVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIProgressBar");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIPauseButton");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,param_1);
  }
  std::string::string(asStack_10,"UICoinBank");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,param_1);
  }
  std::string::string(asStack_10,"UIPowerupHolder");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    this_00 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
    std::string::string(asStack_18,"powerup_special_item_x_ray");
    ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar2);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
    lVar4 = PowerupManager::GetBasePowerup(this_00,(PowerupType *)pRVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    if (lVar4 == 0) {
      UIWidget::SetVisible(pUVar1,false);
    }
    else {
      UIWidget::SetVisible(pUVar1,true);
    }
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::setState(CamelMinigameModule::State) */

void __thiscall CamelMinigameModule::setState(CamelMinigameModule *this,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  AnimationMgr *pAVar5;
  long lVar6;
  ResilienceTutorialIntroProperties *pRVar7;
  string *psVar8;
  Zombie *pZVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *extraout_x0;
  long *extraout_x0_00;
  ProfileMgr *pPVar13;
  PlayerInfo *pPVar14;
  ulong uVar15;
  Board *pBVar16;
  long *plVar17;
  code *pcVar18;
  int local_30 [2];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x60) == param_2) goto switchD_03bb3650_caseD_2;
  *(int *)(this + 0x60) = param_2;
  switch(param_2) {
  case 1:
    setupDaveProlog(this);
    showTools(this,false);
    break;
  case 3:
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
    pAVar5 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationMgr::Clear(pAVar5);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_03bb108c(lVar6 + 0x10);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    pAVar5 = (AnimationMgr *)FUN_03bb1098(*(undefined4 *)(lVar6 + 0x10));
    FUN_05478178((Point *)&local_20,L"[CAMEL_MINIGAME_TUTORIAL_1]",
                 (RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    ShowAdvice::Create((Point *)&local_20,8);
    FUN_05476c50((Point *)&local_20);
    nop();
    uVar3 = Board::MakeRenderOrder(900000,0,1);
    Sexy::Point::Point((Point *)&local_20,(TPoint *)(this + 0x58));
    FUN_03bb1cd8((Point *)&local_20,uVar3);
    uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)asStack_28);
    AnimationMgr::Add(pAVar5,uVar11,(Point *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    goto LAB_03bb3a48;
  case 4:
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
    pAVar5 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationMgr::Clear(pAVar5);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_03bb108c(lVar6 + 0x10);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    pAVar5 = (AnimationMgr *)FUN_03bb1098(*(undefined4 *)(lVar6 + 0x10));
    FUN_05478178((Point *)&local_20,L"[CAMEL_MINIGAME_TUTORIAL_2]",
                 (RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    ShowAdvice::Create((Point *)&local_20,8);
    FUN_05476c50((Point *)&local_20);
    nop();
    uVar3 = Board::MakeRenderOrder(900000,0,1);
    Sexy::Point::Point((Point *)local_30,(TPoint *)(this + 0x58));
    iVar4 = FUN_03bb129c();
    local_30[0] = local_30[0] + iVar4;
    Sexy::Point::Point((Point *)&local_20,(TPoint *)local_30);
    FUN_03bb1cd8((Point *)&local_20,uVar3);
    uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)asStack_28);
    AnimationMgr::Add(pAVar5,uVar11,(Point *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
LAB_03bb3a48:
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)asStack_28);
    AnimationMgr::Add(pAVar5,uVar11,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    break;
  case 6:
    pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(&local_20,L"[WARNING_CAMELMINIGAME_1]",asStack_28);
    Board::DisplayAdviceAgain(pBVar16,&local_20,0x16,0);
    FUN_05476c50(&local_20);
    nop();
    pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar10,"Play_UI_Game_Wave_Ready_x1");
    break;
  case 7:
    pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(&local_20,L"[WARNING_CAMELMINIGAME_2]",asStack_28);
    Board::DisplayAdviceAgain(pBVar16,&local_20,0x16,0);
    FUN_05476c50(&local_20);
    nop();
    pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar10,"Play_UI_Game_Wave_Set");
    break;
  case 8:
    pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(&local_20,L"[WARNING_CAMELMINIGAME_3]",asStack_28);
    Board::DisplayAdviceAgain(pBVar16,&local_20,0x17,0);
    FUN_05476c50(&local_20);
    nop();
    pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar10,"Play_UI_Game_Wave_Match");
    break;
  case 9:
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
    pAVar5 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    AnimationMgr::Clear(pAVar5);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    FUN_03bb108c(lVar6 + 0x10);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar7[0x78] != (ResilienceTutorialIntroProperties)0x0) {
      pPVar13 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar14 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar13);
      cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar14);
      if (cVar2 == '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        pAVar5 = (AnimationMgr *)FUN_03bb1098(*(undefined4 *)(lVar6 + 0x10));
        FUN_05478178((RtWeakPtr<Sexy::SoundResource> *)&local_20,L"[CAMEL_MINIGAME_TUTORIAL_3]",
                     (RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
        ShowAdvice::Create((RtWeakPtr<Sexy::SoundResource> *)&local_20,0xc);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_20);
        nop();
        uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)asStack_28);
        AnimationMgr::Add(pAVar5,uVar11,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        EntityFinder::GetEntities((RtWeakPtr<Sexy::SoundResource> *)&local_20,2);
        uVar15 = 0;
        while (uVar11 = local_20, uVar12 = FUN_03bb10bc(local_20,local_18), uVar15 < uVar12) {
          FUN_03bb10c8(uVar11,uVar15);
          nop();
          cVar2 = (**(code **)(*extraout_x0 + 0x328))();
          if (cVar2 == '\0') {
            FUN_03bb10c8(local_20,uVar15);
            nop();
            (**(code **)(*extraout_x0_00 + 0x260))();
            uVar15 = uVar15 + 1;
          }
          else {
            uVar15 = uVar15 + 1;
          }
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      }
    }
    plVar17 = *(long **)(gLawnApp + 0x9f0);
    pcVar18 = *(code **)(*plVar17 + 0x318);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_28,"camel_onehump_touch");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
    pZVar9 = (Zombie *)(*pcVar18)(plVar17,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    std::string::~string(asStack_28);
    nop();
    Board::PlaceZombieInRow(*(Board **)(gLawnApp + 0x9f0),pZVar9,2,true,true);
    pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar7[0x78] == (ResilienceTutorialIntroProperties)0x0) {
LAB_03bb3748:
      plVar17 = *(long **)(gLawnApp + 0x9f0);
      pcVar18 = *(code **)(*plVar17 + 0x318);
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string(asStack_28,"camel_twohump_touch");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
      pZVar9 = (Zombie *)(*pcVar18)(plVar17,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,0,0);
    }
    else {
      pPVar13 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar14 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar13);
      cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar14);
      if (cVar2 != '\0') goto LAB_03bb3748;
      plVar17 = *(long **)(gLawnApp + 0x9f0);
      pcVar18 = *(code **)(*plVar17 + 0x318);
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string(asStack_28,"camel_onehump_touch");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
      pZVar9 = (Zombie *)(*pcVar18)(plVar17,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,0,0);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    std::string::~string(asStack_28);
    nop();
    Board::PlaceZombieInRow(*(Board **)(gLawnApp + 0x9f0),pZVar9,4,true,true);
    Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
    showTools(this,true);
  }
switchD_03bb3650_caseD_2:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CamelMinigameModule::onNarrationFinished() */

void __thiscall CamelMinigameModule::onNarrationFinished(CamelMinigameModule *this)

{
  if (*(int *)(this + 0x60) != 2) {
    return;
  }
  setState(this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::doMinigameIntro() */

void __thiscall CamelMinigameModule::doMinigameIntro(CamelMinigameModule *this)

{
  RtMixedPtrBase *this_00;
  ResilienceTutorialIntroProperties RVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  undefined4 *puVar6;
  WaveGenerator *this_01;
  WaveManager *this_02;
  long *plVar7;
  ProfileMgr *this_03;
  PlayerInfo *pPVar8;
  string *psVar9;
  SexyVector3 *this_04;
  ZombieCamelSubSystem *pZVar10;
  ZombieCamelTouch *this_05;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  showTools(this,false);
  if (0 < *(int *)(pRVar5 + 0x7c)) {
    uVar13 = *(undefined8 *)(this + 0x80);
    lVar12 = 0;
    do {
      puVar6 = (undefined4 *)FUN_03bb10b4(uVar13,lVar12);
      *puVar6 = 0;
      iVar4 = (int)lVar12;
      lVar12 = lVar12 + 1;
    } while (iVar4 + 1 < *(int *)(pRVar5 + 0x7c));
  }
  RVar1 = pRVar5[0x78];
  *(undefined4 *)(this + 0x9c) = 0;
  if (RVar1 != (ResilienceTutorialIntroProperties)0x0) {
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
    cVar3 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar8);
    if (cVar3 == '\0') {
      plVar7 = *(long **)(gLawnApp + 0x9f0);
      pcVar11 = *(code **)(*plVar7 + 0x318);
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string((string *)&local_28,"camel_onehump_touch");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar9);
      (*pcVar11)(plVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      std::string::~string((string *)&local_28);
      nop();
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)&local_20,0.0,0.0,0.0);
      local_20 = CONCAT44(local_20._4_4_,0x44020000);
      iVar4 = BoardTransforms::GridToBoardSpaceY(1);
      local_20 = CONCAT44((float)iVar4,(float)local_20);
      BoardEntity::PlaceOnBoard(this_04);
      ZombieCamelTouch::SetIsTutorialCamel((ZombieCamelTouch *)this_04,true);
      fVar15 = *(float *)(pRVar5 + 0x8c);
      ZombieCamelTouch::RiseFromGround(this_04,fVar15);
      pZVar10 = Board::GetGameSubSystem<ZombieCamelSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
      ZombieCamelSubSystem::GetNextZombie(aRStack_38,pZVar10,(string *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      while (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38), cVar3 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        nop();
        fVar15 = fVar15 + *(float *)(pRVar5 + 0x90);
        ZombieCamelTouch::SetIsTutorialCamel(this_05,true);
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_05);
        ZombieCamelTouch::RiseFromGround((SexyVector3 *)this_05,fVar15);
        pZVar10 = Board::GetGameSubSystem<ZombieCamelSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_38);
        ZombieCamelSubSystem::GetNextZombie
                  ((string *)&local_28,pZVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)aRStack_38,(RtWeakPtr *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      }
      fVar15 = (float)FUN_03bb12b0((float)(int)(float)local_20 + 20.0);
      fVar14 = (float)FUN_03bb12b0((float)(int)local_20._4_4_ - 140.0);
      Sexy::Point::Point((Point *)&local_28,(int)fVar15,(int)fVar14);
      *(undefined8 *)(this + 0x58) = local_28;
      setState(this,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      goto LAB_03bb3e00;
    }
  }
  setState(this,5);
LAB_03bb3e00:
  *(undefined4 *)(this + 0x98) = 0;
  this_01 = (WaveGenerator *)Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if (this_01 != (WaveGenerator *)0x0) {
    iVar4 = FUN_03bb10a0(*(undefined4 *)(this_01 + 0x24));
    lVar12 = WaveGenerator::GetWaveDefinition(this_01,iVar4 + -1);
    local_28 = FUN_03bb1ef8(*(undefined8 *)(lVar12 + 0x38));
    local_20 = FUN_03bb1f48(*(undefined8 *)(lVar12 + 0x40));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2)
    {
      lVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      this_00 = (RtMixedPtrBase *)(lVar12 + 0x10);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar3 == '\0') break;
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar2 = std::operator==((string *)(lVar12 + 8),"camel_onehump_touch");
      if (bVar2) {
        *(int *)(this + 0x98) = *(int *)(this + 0x98) + 3;
      }
      else {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        bVar2 = std::operator==((string *)(lVar12 + 8),"camel_twohump_touch");
        if (bVar2) {
          *(int *)(this + 0x98) = *(int *)(this + 0x98) + 4;
        }
        else {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          bVar2 = std::operator==((string *)(lVar12 + 8),"camel_manyhump_touch");
          if (bVar2) {
            *(int *)(this + 0x98) = *(int *)(this + 0x98) + 6;
          }
        }
      }
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_28);
    }
  }
  this_02 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this_02 != (WaveManager *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    iVar4 = WaveManager::GetWaveCount(this_02);
    WaveManager::GetZombiesForWave(this_02,iVar4 + -1,(vector *)&local_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      psVar9 = (string *)(*plVar7 + 8);
      bVar2 = std::operator==(psVar9,"camel_onehump_touch");
      if (bVar2) {
        *(int *)(this + 0x98) = *(int *)(this + 0x98) + 3;
      }
      else {
        bVar2 = std::operator==(psVar9,"camel_twohump_touch");
        if (bVar2) {
          *(int *)(this + 0x98) = *(int *)(this + 0x98) + 4;
        }
        else {
          bVar2 = std::operator==(psVar9,"camel_manyhump_touch");
          if (bVar2) {
            *(int *)(this + 0x98) = *(int *)(this + 0x98) + 6;
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::~vector
              ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)&local_20);
  }
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  FUN_03bb108c(lVar12 + 0x10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::onStandardIntroComplete() */

void __thiscall CamelMinigameModule::onStandardIntroComplete(CamelMinigameModule *this)

{
  RtMixedPtrBase *this_00;
  ResilienceTutorialIntroProperties RVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  undefined4 *puVar6;
  WaveGenerator *this_01;
  WaveManager *this_02;
  long *plVar7;
  ProfileMgr *this_03;
  PlayerInfo *pPVar8;
  string *psVar9;
  SexyVector3 *this_04;
  ZombieCamelSubSystem *pZVar10;
  ZombieCamelTouch *this_05;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  showTools(this,false);
  if (0 < *(int *)(pRVar5 + 0x7c)) {
    uVar13 = *(undefined8 *)(this + 0x80);
    lVar12 = 0;
    do {
      puVar6 = (undefined4 *)FUN_03bb10b4(uVar13,lVar12);
      *puVar6 = 0;
      iVar4 = (int)lVar12;
      lVar12 = lVar12 + 1;
    } while (iVar4 + 1 < *(int *)(pRVar5 + 0x7c));
  }
  RVar1 = pRVar5[0x78];
  *(undefined4 *)(this + 0x9c) = 0;
  if (RVar1 != (ResilienceTutorialIntroProperties)0x0) {
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
    cVar3 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar8);
    if (cVar3 == '\0') {
      plVar7 = *(long **)(gLawnApp + 0x9f0);
      pcVar11 = *(code **)(*plVar7 + 0x318);
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string((string *)&uStack_28,"camel_onehump_touch");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar9);
      (*pcVar11)(plVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&uStack_20,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_20);
      std::string::~string((string *)&uStack_28);
      nop();
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)&uStack_20,0.0,0.0,0.0);
      uStack_20 = CONCAT44(uStack_20._4_4_,0x44020000);
      iVar4 = BoardTransforms::GridToBoardSpaceY(1);
      uStack_20 = CONCAT44((float)iVar4,(float)uStack_20);
      BoardEntity::PlaceOnBoard(this_04);
      ZombieCamelTouch::SetIsTutorialCamel((ZombieCamelTouch *)this_04,true);
      fVar15 = *(float *)(pRVar5 + 0x8c);
      ZombieCamelTouch::RiseFromGround(this_04,fVar15);
      pZVar10 = Board::GetGameSubSystem<ZombieCamelSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&uStack_28,(RtWeakPtrBase *)&uStack_30);
      ZombieCamelSubSystem::GetNextZombie(aRStack_38,pZVar10,(string *)&uStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_30);
      while (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38), cVar3 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        nop();
        fVar15 = fVar15 + *(float *)(pRVar5 + 0x90);
        ZombieCamelTouch::SetIsTutorialCamel(this_05,true);
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_05);
        ZombieCamelTouch::RiseFromGround((SexyVector3 *)this_05,fVar15);
        pZVar10 = Board::GetGameSubSystem<ZombieCamelSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&uStack_30,(RtWeakPtrBase *)aRStack_38);
        ZombieCamelSubSystem::GetNextZombie
                  ((string *)&uStack_28,pZVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&uStack_30);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)aRStack_38,(RtWeakPtr *)&uStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_30)
        ;
      }
      fVar15 = (float)FUN_03bb12b0((float)(int)(float)uStack_20 + 20.0);
      fVar14 = (float)FUN_03bb12b0((float)(int)uStack_20._4_4_ - 140.0);
      Sexy::Point::Point((Point *)&uStack_28,(int)fVar15,(int)fVar14);
      *(undefined8 *)(this + 0x58) = uStack_28;
      setState(this,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      goto LAB_03bb3e00;
    }
  }
  setState(this,5);
LAB_03bb3e00:
  *(undefined4 *)(this + 0x98) = 0;
  this_01 = (WaveGenerator *)Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if (this_01 != (WaveGenerator *)0x0) {
    iVar4 = FUN_03bb10a0(*(undefined4 *)(this_01 + 0x24));
    lVar12 = WaveGenerator::GetWaveDefinition(this_01,iVar4 + -1);
    uStack_28 = FUN_03bb1ef8(*(undefined8 *)(lVar12 + 0x38));
    uStack_20 = FUN_03bb1f48(*(undefined8 *)(lVar12 + 0x40));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_28,(__normal_iterator *)&uStack_20),
          bVar2) {
      lVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_28);
      this_00 = (RtMixedPtrBase *)(lVar12 + 0x10);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar3 == '\0') break;
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar2 = std::operator==((string *)(lVar12 + 8),"camel_onehump_touch");
      if (bVar2) {
        *(int *)(this + 0x98) = *(int *)(this + 0x98) + 3;
      }
      else {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        bVar2 = std::operator==((string *)(lVar12 + 8),"camel_twohump_touch");
        if (bVar2) {
          *(int *)(this + 0x98) = *(int *)(this + 0x98) + 4;
        }
        else {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          bVar2 = std::operator==((string *)(lVar12 + 8),"camel_manyhump_touch");
          if (bVar2) {
            *(int *)(this + 0x98) = *(int *)(this + 0x98) + 6;
          }
        }
      }
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&uStack_28);
    }
  }
  this_02 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this_02 != (WaveManager *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_20);
    iVar4 = WaveManager::GetWaveCount(this_02);
    WaveManager::GetZombiesForWave(this_02,iVar4 + -1,(vector *)&uStack_20);
    uStack_30 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&uStack_20);
    uStack_28 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&uStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_30,(__normal_iterator *)&uStack_28),
          bVar2) {
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_30);
      psVar9 = (string *)(*plVar7 + 8);
      bVar2 = std::operator==(psVar9,"camel_onehump_touch");
      if (bVar2) {
        *(int *)(this + 0x98) = *(int *)(this + 0x98) + 3;
      }
      else {
        bVar2 = std::operator==(psVar9,"camel_twohump_touch");
        if (bVar2) {
          *(int *)(this + 0x98) = *(int *)(this + 0x98) + 4;
        }
        else {
          bVar2 = std::operator==(psVar9,"camel_manyhump_touch");
          if (bVar2) {
            *(int *)(this + 0x98) = *(int *)(this + 0x98) + 6;
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_30);
    }
    std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::~vector
              ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)&uStack_20);
  }
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  FUN_03bb108c(lVar12 + 0x10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::initializeModule() */

void __thiscall CamelMinigameModule::initializeModule(CamelMinigameModule *this)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  local_8 = ___stack_chk_guard;
  setState(this,0);
  *(undefined4 *)(this + 100) = 0;
  std::vector<int,std::allocator<int>>::resize((vector<int,std::allocator<int>> *)(this + 0x80),7);
  uVar3 = *(undefined8 *)(this + 0x80);
  puVar2 = (undefined4 *)FUN_03bb10b4(uVar3,0);
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_03bb10b4(uVar3,1);
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_03bb10b4(uVar3,2);
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_03bb10b4(uVar3,3);
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_03bb10b4(uVar3,4);
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_03bb10b4(uVar3,5);
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_03bb10b4(uVar3,6);
  *puVar2 = 0;
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar4 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x4c) = uVar4;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::FinalWaveCheck() */

void __thiscall CamelMinigameModule::FinalWaveCheck(CamelMinigameModule *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  WaveManager *pWVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long *plVar7;
  RtObject *this_00;
  ZombieCamelTouch *this_01;
  int *piVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  Point aPStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if (lVar3 == 0) {
LAB_03bb44f8:
    pWVar4 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    if (pWVar4 == (WaveManager *)0x0) goto LAB_03bb452c;
    iVar1 = FUN_03bb10a4(*(undefined4 *)(pWVar4 + 0x28));
    iVar2 = WaveManager::GetWaveCount(pWVar4);
    if (iVar1 != iVar2) goto LAB_03bb452c;
  }
  else {
    iVar1 = FUN_03bb109c(*(undefined4 *)(lVar3 + 0x20));
    iVar2 = FUN_03bb10a0(*(undefined4 *)(lVar3 + 0x24));
    if (iVar1 != iVar2 + -1) goto LAB_03bb44f8;
    pWVar4 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    if (pWVar4 != (WaveManager *)0x0) {
      WaveManager::GetWaveCount(pWVar4);
    }
  }
  fVar14 = (float)PVZ_EOT();
  if (*(float *)(this + 0x4c) == fVar14) {
    fVar14 = (float)PVZ_T();
    *(float *)(this + 0x4c) = fVar14 + 10.0;
    fVar14 = (float)PVZ_T();
    if (fVar14 <= *(float *)(this + 0x4c)) goto LAB_03bb452c;
  }
  else {
    fVar14 = (float)PVZ_T();
    if (fVar14 <= *(float *)(this + 0x4c)) goto LAB_03bb452c;
  }
  uVar12 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_98);
  std::vector<int,std::allocator<int>>::resize((vector<int,std::allocator<int>> *)local_98,7);
  uVar11 = local_98[0];
  puVar5 = (undefined4 *)FUN_03bb10b4(local_98[0],0);
  *puVar5 = 0;
  puVar5 = (undefined4 *)FUN_03bb10b4(uVar11,1);
  *puVar5 = 0;
  puVar5 = (undefined4 *)FUN_03bb10b4(uVar11,2);
  *puVar5 = 0;
  puVar5 = (undefined4 *)FUN_03bb10b4(uVar11,3);
  *puVar5 = 0;
  puVar5 = (undefined4 *)FUN_03bb10b4(uVar11,4);
  *puVar5 = 0;
  puVar5 = (undefined4 *)FUN_03bb10b4(uVar11,5);
  *puVar5 = 0;
  puVar5 = (undefined4 *)FUN_03bb10b4(uVar11,6);
  *puVar5 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,2);
  uVar13 = local_78;
  uVar11 = local_80;
  uVar6 = FUN_03bb10bc(local_80,local_78);
  if (uVar6 != 0) {
    do {
      plVar7 = (long *)FUN_03bb10c8(uVar11,uVar12);
      if ((*plVar7 != 0) && (nop(), this_00 != (RtObject *)0x0)) {
        this_01 = Sexy::RtObject::Cast<ZombieCamelTouch>(this_00);
        uVar13 = local_78;
        uVar11 = local_80;
        if (this_01 == (ZombieCamelTouch *)0x0) {
          uVar6 = FUN_03bb10bc(local_80,local_78);
        }
        else {
          iVar1 = ZombieCamelTouch::GetCardType(this_01);
          piVar8 = (int *)FUN_03bb10b4(local_98[0],(long)iVar1);
          uVar13 = local_78;
          uVar11 = local_80;
          *piVar8 = *piVar8 + 1;
          uVar6 = FUN_03bb10bc(local_80,local_78);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar6);
  }
  piVar8 = (int *)FUN_03bb10b4(local_98[0],0);
  if ((((*piVar8 < 2) && (piVar8 = (int *)FUN_03bb10b4(local_98[0],1), *piVar8 < 2)) &&
      (piVar8 = (int *)FUN_03bb10b4(local_98[0],2), *piVar8 < 2)) &&
     (((piVar8 = (int *)FUN_03bb10b4(local_98[0],3), *piVar8 < 2 &&
       (piVar8 = (int *)FUN_03bb10b4(local_98[0],4), *piVar8 < 2)) &&
      ((piVar8 = (int *)FUN_03bb10b4(local_98[0],5), *piVar8 < 2 &&
       (piVar8 = (int *)FUN_03bb10b4(local_98[0],6), *piVar8 < 2)))))) {
    for (uVar12 = 0; uVar12 < uVar6; uVar12 = uVar12 + 1) {
      puVar9 = (undefined8 *)FUN_03bb10c8(uVar11,uVar12);
      plVar7 = (long *)*puVar9;
      if (plVar7 != (long *)0x0) {
        pcVar10 = *(code **)(*plVar7 + 0x120);
        Sexy::Point::Point(aPStack_a8,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_a0,local_9c,aDStack_68,aPStack_a8,0);
        (*pcVar10)(plVar7,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
        uVar11 = local_80;
        uVar13 = local_78;
      }
      uVar6 = FUN_03bb10bc(uVar11,uVar13);
    }
    fVar14 = (float)PVZ_T();
    *(float *)(this + 0x4c) = fVar14 + 10.0;
  }
  else {
    fVar14 = (float)PVZ_T();
    *(float *)(this + 0x4c) = fVar14 + 2.0;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_98);
LAB_03bb452c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CamelMinigameModule::onUpdate() */

void __thiscall CamelMinigameModule::onUpdate(CamelMinigameModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  long lVar2;
  AnimationMgr *this_01;
  PrimeText *this_02;
  int iVar3;
  int iVar4;
  float fVar5;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
  iVar4 = *(int *)(this + 0x60);
  do {
    switch(iVar4) {
    case 1:
      setState(this,2);
      iVar3 = *(int *)(this + 0x60);
      break;
    default:
      iVar3 = iVar4;
      goto LAB_03bb48e4;
    case 3:
      if (*(int *)(this + 0x9c) < 1) goto LAB_03bb49c4;
      setState(this,4);
      iVar3 = *(int *)(this + 0x60);
      break;
    case 4:
      if (1 < *(int *)(this + 0x9c)) goto LAB_03bb4a30;
      goto LAB_03bb49c4;
    case 5:
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar5 = (float)FUN_03bb1098(*(undefined4 *)(lVar2 + 0x10));
      if (0.5 < fVar5) {
        setState(this,6);
        iVar3 = *(int *)(this + 0x60);
        break;
      }
      goto LAB_03bb4920;
    case 6:
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar5 = (float)FUN_03bb1098(*(undefined4 *)(lVar2 + 0x10));
      if (fVar5 <= 1.0) goto LAB_03bb4920;
      setState(this,7);
      iVar3 = *(int *)(this + 0x60);
      break;
    case 7:
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar5 = (float)FUN_03bb1098(*(undefined4 *)(lVar2 + 0x10));
      if (fVar5 <= 1.5) goto LAB_03bb4920;
      setState(this,8);
      iVar3 = *(int *)(this + 0x60);
      break;
    case 8:
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar5 = (float)FUN_03bb1098(*(undefined4 *)(lVar2 + 0x10));
      if (fVar5 <= 3.32) goto LAB_03bb4920;
      this_02 = (PrimeText *)Sexy::PrimeText::Instance();
      Sexy::PrimeText::ClearGlyphCache(this_02);
LAB_03bb4a30:
      setState(this,9);
LAB_03bb4920:
      iVar3 = *(int *)(this + 0x60);
    }
    bVar1 = iVar4 != iVar3;
    iVar4 = iVar3;
  } while (bVar1);
LAB_03bb48e4:
  if (iVar3 == 9) {
    slowDownLeftMostZombies();
  }
LAB_03bb49c4:
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Update(this_01);
  updateCardState(this);
  FinalWaveCheck(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::pickSpotForNewCamelChain(ZombieCamelTouch*) */

void __thiscall
CamelMinigameModule::pickSpotForNewCamelChain(CamelMinigameModule *this,ZombieCamelTouch *param_1)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  SharkMinion *this_00;
  pair<GridItemConditions,float> *ppVar4;
  float *pfVar5;
  void *__base;
  size_t __nmemb;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::resize
            ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)&local_38,
             (long)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  local_58 = 0.0;
  while( true ) {
    uVar10 = local_38;
    uVar8 = (ulong)(int)local_58;
    uVar3 = FUN_03bb10d0(local_38,local_30);
    if (uVar3 <= uVar8) break;
    ppVar4 = (pair<GridItemConditions,float> *)FUN_03bb10dc(uVar10,uVar8);
    local_48 = local_48 & 0xffffffff00000000;
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
              ((pair<wchar_t_const,wchar_t> *)&local_20,(wchar_t *)&local_58,(wchar_t *)&local_48);
    std::pair<GridItemConditions,float>::operator=(ppVar4,(pair *)&local_20);
    local_58 = (float)((int)local_58 + 1);
  }
  uVar3 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities((pair<wchar_t_const,wchar_t> *)&local_20,2);
  uVar10 = local_20;
  uVar8 = FUN_03bb10bc(local_20,local_18);
  if (uVar8 != 0) {
    do {
      FUN_03bb10c8(uVar10,uVar3);
      nop();
      if (this_00 != (SharkMinion *)param_1) {
        local_58 = (float)SharkMinion::getRow(this_00);
        ppVar4 = (pair<GridItemConditions,float> *)FUN_03bb10dc(local_38);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        pfVar5 = eastl::max_alt<float>((float *)(ppVar4 + 4),pfVar5);
        FUN_03bb1be0(*pfVar5,(pair *)&local_48,(DVec3 *)&local_58);
        std::pair<GridItemConditions,float>::operator=(ppVar4,(pair *)&local_48);
        uVar10 = local_20;
        uVar8 = FUN_03bb10bc(local_20,local_18);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar8);
  }
  uVar10 = local_38;
  __base = (void *)FUN_03bb10dc(local_38,0);
  __nmemb = FUN_03bb10d0(uVar10,local_30);
  qsort(__base,__nmemb,8,FUN_03bb0ff0);
  uVar10 = local_38;
  lVar6 = FUN_03bb10dc(local_38,0);
  fVar11 = *(float *)(lVar6 + 4);
  uVar8 = FUN_03bb10d0(uVar10,local_30);
  uVar3 = 1;
  do {
    uVar9 = uVar3;
    if (uVar8 <= uVar9) break;
    lVar6 = FUN_03bb10dc(uVar10,uVar9);
    uVar3 = uVar9 + 1;
  } while (*(float *)(lVar6 + 4) - fVar11 < 100.0);
  iVar1 = Sexy::Rand((int)uVar9);
  piVar7 = (int *)FUN_03bb10dc(local_38,(long)iVar1);
  local_60 = (float)piVar7[1];
  iVar1 = *piVar7;
  DVec3::DVec3((DVec3 *)&local_58);
  getProgress();
  local_5c = CurveEvaluate<float>(pRVar2 + 0x94,pRVar2 + 0x98,1);
  pfVar5 = eastl::max_alt<float>(&local_5c,&local_60);
  fVar11 = *pfVar5;
  local_60 = fVar11;
  if (fVar11 < *(float *)(pRVar2 + 0x9c)) {
    fVar11 = (float)RandRangeFloat(fVar11,*(float *)(pRVar2 + 0x9c));
  }
  local_58 = fVar11 + *(float *)(pRVar2 + 0xa0);
  iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1);
  fStack_54 = (float)iVar1;
  local_40 = local_50;
  local_48._0_4_ = local_58;
  local_48._4_4_ = fStack_54;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::~vector
            ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)local_48,local_48._4_4_,local_40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::onZombieSpawned(Zombie*) */

void CamelMinigameModule::onZombieSpawned(Zombie *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ZombieCamelTouch *pZVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  int *piVar7;
  ZombieCamelSubSystem *pZVar8;
  long lVar9;
  WaveManager *this;
  RtObject *in_x1;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  Zombie *pZVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((in_x1 == (RtObject *)0x0) ||
     (pZVar5 = Sexy::RtObject::Cast<ZombieCamelTouch>(in_x1), pZVar5 == (ZombieCamelTouch *)0x0))
  goto LAB_03bb4ffc;
  pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  iVar1 = *(int *)(pRVar6 + 0x7c);
  if (*(int *)(param_1 + 0x60) == 9) {
    iVar3 = 0;
    pZVar8 = Board::GetGameSubSystem<ZombieCamelSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    ZombieCamelSubSystem::GetPreviousZombie
              ((RtWeakPtr<Sexy::ResourceInfo> *)local_18,pZVar8,aRStack_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    while (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30), cVar2 != '\0') {
      iVar3 = iVar3 + 1;
      pZVar8 = Board::GetGameSubSystem<ZombieCamelSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_30);
      ZombieCamelSubSystem::GetPreviousZombie
                ((RtWeakPtr<Sexy::ResourceInfo> *)local_18,pZVar8,aRStack_20);
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_30,(RtWeakPtrBase *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    if (iVar3 == 0) {
      local_18[0] = pickSpotForNewCamelChain((CamelMinigameModule *)param_1,pZVar5);
      (**(code **)(*(long *)pZVar5 + 0x78))(pZVar5,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    }
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)pZVar5);
    ZombieCamelTouch::RiseFromGround((SexyVector3 *)pZVar5,(float)iVar3 * *(float *)(pRVar6 + 0x90))
    ;
    lVar9 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
    if (lVar9 == 0) {
LAB_03bb51f4:
      this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (this != (WaveManager *)0x0) goto LAB_03bb520c;
LAB_03bb52b0:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    }
    else {
      iVar3 = FUN_03bb109c(*(undefined4 *)(lVar9 + 0x20));
      iVar4 = FUN_03bb10a0(*(undefined4 *)(lVar9 + 0x24));
      if (iVar3 == iVar4 + -1) {
        iVar3 = *(int *)(param_1 + 0x98);
        *(int *)(param_1 + 0x98) = iVar3 + -1;
        if ((iVar3 + -1 < 4) && (0 < iVar1)) {
          uVar11 = *(undefined8 *)(param_1 + 0x80);
          uVar10 = 0;
          do {
            piVar7 = (int *)FUN_03bb10b4(uVar11,uVar10);
            if (*piVar7 % 2 == 1) {
              pZVar5 = Sexy::RtObject::Cast<ZombieCamelTouch>(in_x1);
              ZombieCamelTouch::SetCardType(pZVar5,uVar10 & 0xffffffff);
              piVar7 = (int *)FUN_03bb10b4(*(undefined8 *)(param_1 + 0x80),uVar10);
              *piVar7 = *piVar7 + 1;
              goto LAB_03bb51f4;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar1);
        }
LAB_03bb53d4:
        iVar3 = Sexy::Rand(iVar1);
      }
      else {
        iVar3 = getUnmatchedLeftCardType((CamelMinigameModule *)param_1);
        if (iVar3 == -1) goto LAB_03bb53d4;
      }
      pZVar5 = Sexy::RtObject::Cast<ZombieCamelTouch>(in_x1);
      ZombieCamelTouch::SetCardType(pZVar5,iVar3);
      piVar7 = (int *)FUN_03bb10b4(*(undefined8 *)(param_1 + 0x80),(long)iVar3);
      *piVar7 = *piVar7 + 1;
      this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (this == (WaveManager *)0x0) goto LAB_03bb52b0;
LAB_03bb520c:
      iVar3 = FUN_03bb10a4(*(undefined4 *)(this + 0x28));
      iVar4 = WaveManager::GetWaveCount(this);
      if (iVar3 == iVar4 + -1) {
        iVar3 = *(int *)(param_1 + 0x98);
        *(int *)(param_1 + 0x98) = iVar3 + -1;
        if ((iVar3 + -1 < 4) && (0 < iVar1)) {
          uVar11 = *(undefined8 *)(param_1 + 0x80);
          uVar10 = 0;
          do {
            piVar7 = (int *)FUN_03bb10b4(uVar11,uVar10);
            if (*piVar7 % 2 == 1) {
              pZVar5 = Sexy::RtObject::Cast<ZombieCamelTouch>(in_x1);
              ZombieCamelTouch::SetCardType(pZVar5,uVar10 & 0xffffffff);
              piVar7 = (int *)FUN_03bb10b4(*(undefined8 *)(param_1 + 0x80),uVar10);
              *piVar7 = *piVar7 + 1;
              goto LAB_03bb52b0;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar1);
        }
LAB_03bb53e4:
        iVar3 = Sexy::Rand(iVar1);
      }
      else {
        iVar3 = getUnmatchedLeftCardType((CamelMinigameModule *)param_1);
        if (iVar3 == -1) goto LAB_03bb53e4;
      }
      pZVar5 = Sexy::RtObject::Cast<ZombieCamelTouch>(in_x1);
      ZombieCamelTouch::SetCardType(pZVar5,iVar3);
      piVar7 = (int *)FUN_03bb10b4(*(undefined8 *)(param_1 + 0x80),(long)iVar3);
      *piVar7 = *piVar7 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    }
    iVar1 = *(int *)(param_1 + 0x60);
  }
  else {
    pZVar5 = Sexy::RtObject::Cast<ZombieCamelTouch>(in_x1);
    ZombieCamelTouch::SetCardType(pZVar5,0);
    piVar7 = (int *)FUN_03bb10b4(*(undefined8 *)(param_1 + 0x80),0);
    iVar1 = *(int *)(param_1 + 0x60);
    *piVar7 = *piVar7 + 1;
  }
  if (iVar1 == 9) {
    fVar12 = (float)getProgress();
    if (0.75 < fVar12) {
      pZVar13._0_4_ = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar13._0_4_,0);
    }
    else if (0.5 < fVar12) {
      pZVar13._0_4_ = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar13._0_4_,0);
    }
    else {
      pZVar13._0_4_ = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar13._0_4_,0);
    }
  }
LAB_03bb4ffc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameModule::registerForEvents() */

void __thiscall CamelMinigameModule::registerForEvents(CamelMinigameModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<CamelMinigameModule,void(CamelMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<CamelMinigameModule,void(CamelMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<CamelMinigameModule,void(CamelMinigameModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<CamelMinigameModule,void(CamelMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<CamelMinigameModule,void(CamelMinigameModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

