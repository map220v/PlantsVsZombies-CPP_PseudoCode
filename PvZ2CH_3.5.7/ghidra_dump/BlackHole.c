// Class: BlackHole


/* BlackHole::onInitialized() */

void __thiscall BlackHole::onInitialized(BlackHole *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHole::StaticClassInit() */

void BlackHole::StaticClassInit(void)

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
    std::string::string(asStack_10,"BlackHole");
    (*pcVar2)(plVar1,asStack_10,FUN_044f69c8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlackHole::StaticGetClass() */

long * BlackHole::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BlackHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlackHole::GetClass() const */

long * BlackHole::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BlackHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlackHole::~BlackHole() */

void __thiscall BlackHole::~BlackHole(BlackHole *this)

{
  *(undefined ***)this = &PTR_GetClass_06856e50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* BlackHole::~BlackHole() */

void __thiscall BlackHole::~BlackHole(BlackHole *this)

{
  ~BlackHole(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHole::BlackHole() */

void __thiscall BlackHole::BlackHole(BlackHole *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06856e50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1c));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"BlackHole");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlackHole::StaticNew() */

BlackHole * BlackHole::StaticNew(void)

{
  BlackHole *this;
  
  this = ::operator_new(0x28);
  BlackHole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHole::onDestroy() */

void __thiscall BlackHole::onDestroy(BlackHole *this)

{
  LawnApp *this_00;
  bool bVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x10));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    (**(code **)(*plVar2 + 0x48))();
  }
  this_00 = gLawnApp;
  std::string::string(asStack_10,"BlackHole");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHole::setPlantingStatus(bool) const */

void __thiscall BlackHole::setPlantingStatus(BlackHole *this,bool param_1)

{
  char cVar1;
  UINewPVPTopZombieQueue *this_00;
  UIWidget *pUVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  for (iVar3 = 0; cVar1 = FUN_044f43cc(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
    UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
    pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    UIWidget::SetClickable(pUVar2,!param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::string((string *)aRStack_10,"UIPlantfood");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,!param_1);
  }
  if (param_1) {
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlackHole::onBlackHoleOutAnimCompleted(StandaloneEffect*) */

void __thiscall BlackHole::onBlackHoleOutAnimCompleted(BlackHole *this,StandaloneEffect *param_1)

{
  StandaloneEffect::SetVisibility(param_1,false);
  setPlantingStatus(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHole::InitBlackHoleEffectPam(std::string) */

void __thiscall BlackHole::InitBlackHoleEffectPam(BlackHole *this,string *param_2)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GetPAMByName(param_2);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar1,true);
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(this_01,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHole::onBlackHoleInAnimCompleted(StandaloneEffect*) */

void BlackHole::onBlackHoleInAnimCompleted(StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  StandaloneEffect *pSVar10;
  undefined8 uVar11;
  Board *this;
  PlantGroup *pPVar12;
  undefined8 *puVar13;
  RtWeakPtrBase *pRVar14;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar15;
  long lVar16;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var17;
  Plant *pPVar18;
  ResourceInfo *pRVar19;
  int iVar20;
  code *pcVar21;
  bool bVar22;
  int iVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  float local_98;
  undefined4 local_90;
  undefined8 local_80;
  float local_78;
  undefined4 local_74;
  float local_6c;
  float local_68;
  undefined1 local_64;
  undefined4 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x18);
  local_8 = ___stack_chk_guard;
  pSVar10 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_b8);
  std::string::string((string *)&local_80,"onBlackHoleAbsorbAnimCompleted");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
             (RtId *)&local_b0,(string *)&local_80);
  StandaloneEffect::SetCompletionCallback(pSVar10,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_80);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_b0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
  uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
  std::string::string((string *)&local_80,"BLACK_HOLE");
  Effect_PopAnim::PlayLoopingAnimation
            ((Effect_PopAnim *)((float)iVar1 + 2.0),uVar11,(string *)&local_80,0);
  std::string::~string((string *)&local_80);
  nop();
  this = *(Board **)(gLawnApp + 0x9f0);
  if (*(int *)(this + 0xfc) < 1) {
LAB_044f7458:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar20 = 1;
LAB_044f7324:
  puVar4 = gMessageRouter;
  iVar2 = iVar20 + -1;
  Sexy::Point::Point((Point *)&local_80,*(int *)(this + 0xf8) + -1,iVar2);
  MessageRouter::Post<Sexy::Point_const&,float,Sexy::Point,float>
            ((MessageRouter *)((float)iVar1 + 2.0),puVar4,Message::PlantAbsorbed,(string *)&local_80
            );
  this = *(Board **)(gLawnApp + 0x9f0);
  iVar23 = *(int *)(this + 0xf8);
  iVar8 = iVar23 - *(int *)(param_1 + 0x18);
  if (iVar8 < iVar23) {
    do {
      iVar9 = iVar23 + -1;
      pPVar12 = (PlantGroup *)Board::GetPlantGroupAt(this,iVar9,iVar2);
      if (pPVar12 != (PlantGroup *)0x0) {
        puVar13 = (undefined8 *)PlantGroup::Plants();
        local_b0 = FUN_044f603c(*puVar13);
        local_80 = FUN_044f608c(puVar13[1]);
        while (bVar5 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_80),
              bVar5) {
          pRVar14 = (RtWeakPtrBase *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_b8,pRVar14);
          cVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_b8);
          if (cVar6 != '\0') {
            uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
            cVar6 = Plant::HasCondition(uVar11,0x22);
            if (cVar6 != '\0') goto LAB_044f742c;
            uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
            cVar6 = Plant::HasCondition(uVar11,0x21);
            if (cVar6 != '\0') goto LAB_044f742c;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
        }
        cVar6 = PlantGroup::CanAttackRelocateGroup(pPVar12,(BoardEntity *)0x0);
        if (cVar6 != '\0') {
          local_b0 = FUN_044f603c(*puVar13);
          local_80 = FUN_044f608c(puVar13[1]);
          bVar24 = false;
          bVar22 = false;
          bVar5 = false;
          while (bVar7 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_80),
                bVar7) {
            pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
            pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar15);
            cVar6 = PlantTurnip::WhetherCanBePulled
                              ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
            if (cVar6 == '\0') {
              bVar5 = true;
            }
            pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar15);
            cVar6 = PlantMagicbeans::WhetherCanBePulled
                              ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
            if (cVar6 == '\0') {
              bVar24 = true;
            }
            pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar15);
            cVar6 = PlantNightcap::WhetherCanBePulled
                              ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
            if (cVar6 == '\0') {
              bVar22 = true;
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
          }
          if ((bVar24 || bVar22) || (bVar5)) {
            this = *(Board **)(gLawnApp + 0x9f0);
            iVar8 = *(int *)(this + 0xf8) - *(int *)(param_1 + 0x18);
            break;
          }
          local_c0 = FUN_044f603c(*puVar13);
          local_b8 = FUN_044f608c(puVar13[1]);
          while (bVar5 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
                bVar5) {
            pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
            pcVar21 = *(code **)(**(long **)(lVar16 + 0xa8) + 0x440);
            if (pcVar21 != PlantFramework::stopSpecialEffect) {
              (*pcVar21)();
            }
            p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
            lVar16 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(p_Var17);
            uVar25 = *(undefined4 *)(lVar16 + 4);
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_b0);
            iVar8 = BoardTransforms::GridToBoardSpaceX(iVar9);
            local_b0 = CONCAT44(uVar25,(float)iVar8);
            local_9c = PVZ_T();
            local_98 = (float)PVZ_T();
            local_98 = local_98 + 2.0;
            local_90 = 5;
            local_a8 = (float)local_b0 + 8.0;
            local_a4 = local_b0._4_4_;
            pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
            Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_b0);
            if (iVar23 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8)) {
              RelocationEvent::RelocationEvent((RelocationEvent *)&local_80);
              iVar8 = BoardTransforms::GridToBoardSpaceX(iVar9);
              local_80 = CONCAT44(uVar25,(float)iVar8);
              local_6c = (float)PVZ_T();
              local_6c = local_6c + 2.0;
              iVar8 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
              local_68 = local_6c + (float)(iVar8 - iVar23);
              iVar8 = BoardTransforms::GridToBoardSpaceX(iVar8 + -1);
              local_78 = (float)iVar8;
              local_60 = 1;
              local_64 = 1;
              local_74 = uVar25;
              pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
              Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_80);
            }
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_80);
            iVar8 = BoardTransforms::GridToBoardSpaceX
                              (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
            local_80 = CONCAT44(uVar25,(float)iVar8);
            local_6c = (float)PVZ_T();
            local_78 = *(float *)(param_1 + 0x1c);
            local_74 = *(undefined4 *)(param_1 + 0x20);
            local_60 = 3;
            local_6c = (float)(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar23) + 2.0 +
                       local_6c;
            local_68 = local_6c + 1.0;
            pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
            Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_80);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
          }
        }
      }
      this = *(Board **)(gLawnApp + 0x9f0);
      iVar8 = *(int *)(this + 0xf8) - *(int *)(param_1 + 0x18);
      iVar23 = iVar9;
    } while (iVar8 < iVar9);
  }
LAB_044f74c4:
  do {
    if (iVar8 < 1) goto LAB_044f7440;
    iVar23 = iVar8 + -1;
    pPVar12 = (PlantGroup *)Board::GetPlantGroupAt(this,iVar23,iVar2);
    if (pPVar12 != (PlantGroup *)0x0) {
      puVar13 = (undefined8 *)PlantGroup::Plants();
      local_b0 = FUN_044f603c(*puVar13);
      local_80 = FUN_044f608c(puVar13[1]);
      while (bVar5 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_80),
            bVar5) {
        pRVar14 = (RtWeakPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_b8,pRVar14);
        cVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_b8);
        if (cVar6 != '\0') {
          uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
          cVar6 = Plant::HasCondition(uVar11,0x22);
          if (cVar6 != '\0') goto LAB_044f742c;
          uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
          cVar6 = Plant::HasCondition(uVar11,0x21);
          if (cVar6 != '\0') goto LAB_044f742c;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
      }
      cVar6 = PlantGroup::CanAttackRelocateGroup(pPVar12,(BoardEntity *)0x0);
      if (cVar6 != '\0') {
        local_b0 = FUN_044f603c(*puVar13);
        local_80 = FUN_044f608c(puVar13[1]);
        bVar5 = false;
        bVar22 = false;
        bVar24 = false;
        while (bVar7 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_80),
              bVar7) {
          pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
          pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar15);
          cVar6 = PlantTurnip::WhetherCanBePulled
                            ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
          if (cVar6 == '\0') {
            bVar5 = true;
          }
          pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar15);
          cVar6 = PlantMagicbeans::WhetherCanBePulled
                            ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
          if (cVar6 == '\0') {
            bVar24 = true;
          }
          pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar15);
          cVar6 = PlantNightcap::WhetherCanBePulled
                            ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
          if (cVar6 == '\0') {
            bVar22 = true;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
        }
        if ((bVar5) || (bVar24)) goto LAB_044f7434;
        if (!bVar22) {
          local_c0 = FUN_044f603c(*puVar13);
          local_b8 = FUN_044f608c(puVar13[1]);
          while (bVar5 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
                bVar5) {
            pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
            pcVar21 = *(code **)(**(long **)(lVar16 + 0xa8) + 0x440);
            if (pcVar21 != PlantFramework::stopSpecialEffect) {
              (*pcVar21)();
            }
            p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
            puVar13 = (undefined8 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var17);
            uVar25 = *(undefined4 *)((long)puVar13 + 4);
            uVar3 = *puVar13;
            uVar11 = *puVar13;
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_b0);
            local_b0 = uVar11;
            local_9c = PVZ_T();
            local_98 = (float)PVZ_T();
            local_98 = local_98 + 2.0;
            local_90 = 5;
            local_a8 = (float)local_b0 + 8.0;
            local_a4 = local_b0._4_4_;
            pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
            Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_b0);
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_80);
            local_80 = uVar3;
            local_6c = (float)PVZ_T();
            local_6c = local_6c + 2.0;
            local_68 = local_6c + (float)*(int *)(param_1 + 0x18);
            iVar9 = BoardTransforms::GridToBoardSpaceX(iVar8 + *(int *)(param_1 + 0x18) + -1);
            local_78 = (float)iVar9;
            local_60 = 1;
            local_64 = 1;
            local_74 = uVar25;
            pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
            Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_80);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
          }
          this = *(Board **)(gLawnApp + 0x9f0);
          iVar8 = iVar23;
          goto LAB_044f74c4;
        }
      }
    }
    this = *(Board **)(gLawnApp + 0x9f0);
    iVar8 = iVar23;
  } while( true );
LAB_044f742c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
LAB_044f7434:
  this = *(Board **)(gLawnApp + 0x9f0);
LAB_044f7440:
  iVar20 = iVar20 + 1;
  if (*(int *)(this + 0xfc) < iVar20) goto LAB_044f7458;
  goto LAB_044f7324;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHole::onBlackHoleAbsorbAnimCompleted(StandaloneEffect*) */

void BlackHole::onBlackHoleAbsorbAnimCompleted(StandaloneEffect *param_1)

{
  StandaloneEffect *pSVar1;
  Effect_PopAnim *pEVar2;
  char *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBlackHoleOutAnimCompleted");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
             asStack_58);
  StandaloneEffect::SetCompletionCallback(pSVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
  std::string::string(asStack_58,"BALCKHOLE_OUT");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_58,0);
  std::string::~string(asStack_58);
  nop();
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_BlackHole_Disappear");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHole::dragPlantsToblackHoleDirection(int, Sexy::SexyVector2 const&) */

void __thiscall
BlackHole::dragPlantsToblackHoleDirection(BlackHole *this,int param_1,SexyVector2 *param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  StandaloneEffect *pSVar7;
  Effect_PopAnim *pEVar8;
  char *pcVar9;
  PlantGroup *this_01;
  undefined8 *puVar10;
  ResourceInfo *pRVar11;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar12;
  long lVar13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PopAnimRig *this_03;
  Plant *this_04;
  int iVar14;
  code *pcVar15;
  Board *pBVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 local_a0;
  undefined8 local_98;
  RtMixedPtr aRStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  undefined4 local_74;
  undefined4 local_6c;
  float local_68;
  undefined4 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_1) {
    setPlantingStatus(this,true);
    pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((string *)&local_80,L"[BLACKHOLE_WARNING]",(RtId *)&local_88);
    Board::DisplayAdviceAgain(pBVar16,(string *)&local_80,7,0);
    FUN_05476c50((string *)&local_80);
    nop();
    *(int *)(this + 0x18) = param_1;
    iVar14 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
    if (iVar14 < param_1) {
      *(int *)(this + 0x18) = iVar14;
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10);
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)param_2;
    pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
    std::string::string((string *)&local_80,"onBlackHoleInAnimCompleted");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
               (RtId *)&local_88,(string *)&local_80);
    StandaloneEffect::SetCompletionCallback(pSVar7,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_80);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_80,*(float *)(this + 0x1c),*(float *)(this + 0x20),0.0);
    StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)&local_80,800000);
    pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    StandaloneEffect::SetVisibility(pSVar7,true);
    pEVar8 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    std::string::string((string *)&local_80,"BLACKHOLE_IN");
    Effect_PopAnim::PlaySingleAnimation(pEVar8,(string *)&local_80,0);
    std::string::~string((string *)&local_80);
    nop();
    pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar9,"Play_BlackHole_Appear");
    pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    if (0 < *(int *)(pBVar16 + 0xfc)) {
      iVar14 = 1;
LAB_044f9900:
      do {
        iVar1 = *(int *)(pBVar16 + 0xf8);
        while (0 < iVar1) {
          iVar1 = iVar1 + -1;
          this_01 = (PlantGroup *)Board::GetPlantGroupAt(pBVar16,iVar1,iVar14 + -1);
          if ((this_01 != (PlantGroup *)0x0) &&
             (cVar3 = PlantGroup::CanAttackRelocateGroup(this_01,(BoardEntity *)0x0), cVar3 != '\0')
             ) {
            bVar2 = false;
            bVar5 = false;
            puVar10 = (undefined8 *)PlantGroup::Plants();
            local_88 = FUN_044f603c(*puVar10);
            local_80 = FUN_044f608c(puVar10[1]);
            while (bVar4 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80)
                  , bVar4) {
              pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
              pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar12);
              cVar3 = PlantTurnip::WhetherCanBePulled
                                ((Plant *)pRVar11,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1)
              ;
              if (cVar3 == '\0') {
                bVar5 = true;
              }
              pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar12);
              cVar3 = PlantMagicbeans::WhetherCanBePulled
                                ((Plant *)pRVar11,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1)
              ;
              if (cVar3 == '\0') {
                bVar2 = true;
              }
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
            }
            if ((bVar5) || (bVar2)) {
              iVar14 = iVar14 + 1;
              pBVar16 = *(Board **)(gLawnApp + 0x9f0);
              if (*(int *)(pBVar16 + 0xfc) < iVar14) goto LAB_044f9b64;
              goto LAB_044f9900;
            }
            local_a0 = FUN_044f603c(*puVar10);
            local_98 = FUN_044f608c(puVar10[1]);
            while (bVar5 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98)
                  , bVar5) {
              pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
              pcVar15 = *(code **)(**(long **)(lVar13 + 0xa8) + 0x440);
              if (pcVar15 != PlantFramework::stopSpecialEffect) {
                (*pcVar15)();
              }
              this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
              lVar13 = std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(this_02);
              uVar18 = *(undefined4 *)(lVar13 + 4);
              RelocationEvent::RelocationEvent((RelocationEvent *)&local_80);
              iVar6 = BoardTransforms::GridToBoardSpaceX(iVar1);
              local_80 = CONCAT44(uVar18,(float)iVar6);
              local_6c = PVZ_T();
              fVar17 = (float)PVZ_T();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
              Effect_PopAnim::GetPopAnimRigPtr();
              this_03 = (PopAnimRig *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              std::string::string((string *)&local_88,"BLACKHOLE_IN");
              local_68 = (float)PopAnimRig::CalcAnimLengthSeconds(this_03,(string *)&local_88);
              local_68 = local_68 + fVar17;
              std::string::~string((string *)&local_88);
              nop();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
              local_60 = 4;
              local_78 = (float)local_80 + 8.0;
              local_74 = local_80._4_4_;
              this_04 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
              Plant::addRelocationEvent(this_04,(RelocationEvent *)&local_80);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
            }
          }
          pBVar16 = *(Board **)(gLawnApp + 0x9f0);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 <= *(int *)(pBVar16 + 0xfc));
    }
  }
LAB_044f9b64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

