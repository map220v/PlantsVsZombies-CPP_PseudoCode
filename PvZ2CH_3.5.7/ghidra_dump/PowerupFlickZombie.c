// Class: PowerupFlickZombie


/* PowerupFlickZombie::cancelTouch() */

void __thiscall PowerupFlickZombie::cancelTouch(PowerupFlickZombie *this)

{
  *(undefined8 *)(this + 200) = 0;
  return;
}


/* PowerupFlickZombie::onEnterState_Idle(PowerupState) */

void __thiscall PowerupFlickZombie::onEnterState_Idle(PowerupFlickZombie *this,int param_2)

{
  BasePowerup::onEnterState_Idle();
  if (param_2 != -1) {
    cancelTouch(this);
    return;
  }
  return;
}


/* PowerupFlickZombie::PowerupFlickZombie() */

void __thiscall PowerupFlickZombie::PowerupFlickZombie(PowerupFlickZombie *this)

{
  BasePowerup::BasePowerup((BasePowerup *)this);
  *(undefined8 *)(this + 200) = 0;
  *(undefined ***)this = &PTR_GetClass_06831d80;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xd0));
  return;
}


/* PowerupFlickZombie::StaticNew() */

PowerupFlickZombie * PowerupFlickZombie::StaticNew(void)

{
  PowerupFlickZombie *this;
  
  this = ::operator_new(0xd8);
  PowerupFlickZombie(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupFlickZombie::StaticClassInit() */

void PowerupFlickZombie::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupFlickZombie");
    (*pcVar2)(plVar1,asStack_10,FUN_0430608c,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupFlickZombie::StaticGetClass() */

long * PowerupFlickZombie::StaticGetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupFlickZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupFlickZombie::GetClass() const */

long * PowerupFlickZombie::GetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupFlickZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupFlickZombie::~PowerupFlickZombie() */

void __thiscall PowerupFlickZombie::~PowerupFlickZombie(PowerupFlickZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_06831d80;
  BasePowerup::~BasePowerup((BasePowerup *)this);
  return;
}


/* PowerupFlickZombie::~PowerupFlickZombie() */

void __thiscall PowerupFlickZombie::~PowerupFlickZombie(PowerupFlickZombie *this)

{
  ~PowerupFlickZombie(this);
  AK::FreeHook(this);
  return;
}


/* PowerupFlickZombie::isValidTarget(Zombie*) */

bool __thiscall PowerupFlickZombie::isValidTarget(PowerupFlickZombie *this,Zombie *param_1)

{
  char cVar1;
  ZombieTosserSubSystem *pZVar2;
  ZombiePirateCannon *pZVar3;
  
  pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if ((cVar1 == '\0') && (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')) {
      cVar1 = Zombie::IsFlickedOff(param_1);
    }
    else {
      cVar1 = ZombieTosserSubSystem::IsTossed((Zombie *)pZVar2);
      if (cVar1 == '\0') {
        return false;
      }
      cVar1 = Zombie::IsFlickedOff(param_1);
    }
    if (cVar1 == '\0') {
      pZVar3 = Sexy::RtObject::Cast<ZombiePirateCannon>((RtObject *)param_1);
      return pZVar3 == (ZombiePirateCannon *)0x0;
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupFlickZombie::registerForEvents() */

void __thiscall PowerupFlickZombie::registerForEvents(PowerupFlickZombie *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PowerupFlickZombie,bool(PowerupFlickZombie::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<PowerupFlickZombie,void(PowerupFlickZombie::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,4,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupFlickZombie::findTargetZombie(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&,
   std::vector<Zombie*, std::allocator<Zombie*> >&) */

void __thiscall
PowerupFlickZombie::findTargetZombie
          (PowerupFlickZombie *this,SexyVector2 *param_1,SexyVector2 *param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar5;
  Insets *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_70;
  float local_6c;
  Zombie *local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_40,(int)*(float *)param_1,(int)*(float *)(param_1 + 4),1,1);
  fVar10 = *(float *)param_2;
  uVar7 = 0;
  Sexy::TRect<int>::ExpandToContain
            ((TRect<int> *)aIStack_40,(int)fVar10,(int)*(float *)(param_2 + 4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_40
             ,0xfffffffe,7);
  local_70 = Sexy::SexyVector2::operator-(param_2,param_1);
  local_6c = fVar10;
  fVar10 = (float)DVec2::dot((DVec2 *)&local_70,(DVec2 *)&local_70);
  uVar8 = local_20;
  lVar3 = FUN_04305df4(local_20,local_18);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_04305e00(uVar8,uVar7);
      local_68 = (Zombie *)*puVar4;
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(local_68);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      bVar1 = std::operator==((string *)(lVar3 + 8),"pirate_captain_parrot");
      if (!bVar1) {
        pIVar6 = (Insets *)(**(code **)(*(long *)local_68 + 0x178))(local_68);
        Sexy::Insets::Insets(aIStack_30,pIVar6);
        Sexy::TRect<int>::GetCenter();
        Sexy::Point::Point((Point *)&local_60,(TPoint *)&local_48);
        fVar11 = (float)local_5c;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,(float)local_60,fVar11);
        local_58 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,param_1);
        local_54 = fVar11;
        fVar9 = (float)DVec2::dot((DVec2 *)&local_70,(DVec2 *)&local_58);
        local_50 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_70,fVar9 * (1.0 / fVar10));
        local_4c = fVar11;
        local_48 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_58,(SexyVector2 *)&local_50);
        local_44 = fVar11;
        fVar9 = (float)VectorNorm((FPoint *)&local_48);
        cVar2 = Zombie::IsControlled(local_68);
        if (cVar2 == '\0') {
          fVar11 = 1600.0;
        }
        else {
          fVar11 = 6400.0;
        }
        if ((fVar9 <= fVar11) && (cVar2 = isValidTarget(this,local_68), cVar2 != '\0')) {
          std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                    ((vector<Zombie*,std::allocator<Zombie*>> *)param_3,&local_68);
        }
      }
      uVar8 = local_20;
      uVar7 = uVar7 + 1;
      uVar5 = FUN_04305df4(local_20,local_18);
    } while (uVar7 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupFlickZombie::flick(Sexy::SexyVector2 const&) */

void PowerupFlickZombie::flick(SexyVector2 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ZombieTosserSubSystem *this;
  float *pfVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  ulong uVar6;
  undefined8 *puVar7;
  SexyVector3 *this_01;
  ZombiePirateSeagull *pZVar8;
  ZombieTosserSubSystem *pZVar9;
  ZombieFutureJetpack *pZVar10;
  SexyVector2 *in_x1;
  Zombie *this_02;
  ulong uVar11;
  float fVar12;
  float fVar13;
  ulong in_d1;
  undefined4 in_s2;
  float fVar14;
  int local_c0;
  int local_bc;
  float local_b8;
  float local_b4;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  float local_88;
  float local_84;
  undefined4 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  local_78 = Sexy::SexyVector2::operator+(param_1 + 0xd0,in_x1);
  uVar11 = 0;
  local_74 = (int)in_d1;
  findTargetZombie((PowerupFlickZombie *)param_1,param_1 + 0xd0,(SexyVector2 *)&local_78,
                   (vector *)&local_68);
  this = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  do {
    uVar1 = local_68;
    fVar13 = (float)in_d1;
    uVar6 = FUN_04305de0(local_68,local_60);
    if (uVar6 <= uVar11) {
      cVar2 = std::vector<Zombie*,std::allocator<Zombie*>>::empty
                        ((vector<Zombie*,std::allocator<Zombie*>> *)&local_68);
      if (cVar2 == '\0') {
        cVar2 = BasePowerup::isInState((BasePowerup *)param_1,1);
        if (cVar2 != '\0') {
          BasePowerup::Activate((BasePowerup *)param_1);
        }
        BasePowerup::DecrementTimeByUseCost((BasePowerup *)param_1);
        cancelTouch((PowerupFlickZombie *)param_1);
      }
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                ((vector<Zombie*,std::allocator<Zombie*>> *)&local_68);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)FUN_04305dec(uVar1,uVar11);
    this_02 = (Zombie *)*puVar7;
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_02);
    fVar14 = *(float *)(this_01 + 8);
    (**(code **)(*(long *)this_02 + 0x178))(this_02);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_c0,(TPoint *)&local_78);
    DVec3::DVec3((DVec3 *)&local_b8);
    fVar12 = (float)Sexy::SexyVector2::Normalize(in_x1);
    if (fVar12 <= 0.5) {
      if (fVar12 < -0.5) {
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        local_b8 = local_b8 - (float)iVar3;
      }
      if (fVar13 <= 0.5) goto LAB_043067b8;
LAB_043069fc:
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar13 = local_b4;
      local_b4 = (float)iVar3 + local_b4;
      cVar2 = Zombie::IsControlled(this_02);
      if (cVar2 == '\0') goto LAB_04306a20;
LAB_043067d8:
      if (fVar12 <= 0.0) goto LAB_04306a20;
      ZombieTosserSubSystem::ReleaseZombie(this,this_02);
      fVar13 = *(float *)this_01;
      fVar12 = *(float *)(this_01 + 4);
      local_88 = 150.0;
      pfVar4 = eastl::max_alt<float>(&local_88,(float *)(this_01 + 8));
      EATextSquish::Vec3::Vec3((Vec3 *)&local_78,fVar13 + 850.0,fVar12,*pfVar4);
      Zombie::FlickOff(this_02,(SexyVector3 *)&local_78);
    }
    else {
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_b8 = (float)iVar3 + local_b8;
      if (0.5 < fVar13) goto LAB_043069fc;
LAB_043067b8:
      if (fVar13 < -0.5) {
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        fVar13 = (float)iVar3;
        local_b4 = local_b4 - fVar13;
      }
      cVar2 = Zombie::IsControlled(this_02);
      if (cVar2 != '\0') goto LAB_043067d8;
LAB_04306a20:
      Board::GetGridBoundingRect();
      local_a8 = (float)Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_b8);
      local_a4 = fVar13;
      local_a0 = in_s2;
      cVar2 = Zombie::IsControlled(this_02);
      if (cVar2 != '\0') {
        local_98 = ZombieTosserSubSystem::GetTargetPosition((Zombie *)this);
        local_94 = fVar13;
        local_90 = in_s2;
        local_88 = (float)Sexy::SexyVector3::operator+
                                    ((SexyVector3 *)&local_98,(SexyVector3 *)&local_b8);
        local_84 = fVar13;
        local_80 = in_s2;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_a8,(SexyVector3 *)&local_88);
        ZombieTosserSubSystem::ReleaseZombie(this,this_02);
      }
      fVar13 = (float)local_78;
      if ((local_a8 < fVar13) || (fVar13 = (float)(local_78 + local_70), fVar13 < local_a8)) {
        local_a8 = fVar13;
      }
      cVar2 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_a8);
      pZVar8 = Sexy::RtObject::Cast<ZombiePirateSeagull>((RtObject *)this_02);
      if (((pZVar8 != (ZombiePirateSeagull *)0x0) ||
          (pZVar10 = Sexy::RtObject::Cast<ZombieFutureJetpack>((RtObject *)this_02),
          pZVar10 != (ZombieFutureJetpack *)0x0)) || (cVar2 == '\0')) {
        if (local_a4 < (float)local_74) {
          do {
            iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
            local_a4 = (float)iVar3 + local_a4;
          } while (local_a4 < (float)local_74);
        }
        if ((float)(local_74 + local_6c) < local_a4) {
          do {
            iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
            local_a4 = local_a4 - (float)iVar3;
          } while ((float)(local_74 + local_6c) < local_a4);
        }
      }
      pZVar9 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)(fVar14 + 150.0),0x3fa00000,pZVar9,this_02,
                 (SexyVector3 *)&local_a8,aRStack_50,1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::string((string *)&local_88,"Play_UI_PowerUp_Flick");
      RealObject::PlayPositionalSound((RealObject *)this_02,(string *)&local_88,0.0);
      std::string::~string((string *)&local_88);
      nop();
    }
    uVar11 = uVar11 + 1;
    Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    nop();
    std::string::string((string *)&local_88,"POPANIM_EFFECTS_POWER_UP_ZOMBIE_FLICK");
    GetPAMByName((string *)&local_88);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_78);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
    std::string::~string((string *)&local_88);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    std::string::string((string *)&local_78,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,(Vec3 *)&local_78,0);
    std::string::~string((string *)&local_78);
    nop();
    in_s2 = 0;
    in_d1 = (ulong)(uint)(float)local_bc;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_78,(float)local_c0,(float)local_bc,0.0);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector3 *)&local_78,800000);
    Effect_PopAnim::SetOrientation(this_00,in_x1);
    MessageRouter::Post<Zombie*,Zombie*>
              ((MessageRouter *)gMessageRouter,Message::ZombieFlicked,this_02);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupFlickZombie::handleTouch(Sexy::Touch const&) */

void __thiscall PowerupFlickZombie::handleTouch(PowerupFlickZombie *this,Touch *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  float fVar7;
  FastCurve aFStack_18 [8];
  undefined4 local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = BasePowerup::isInState((BasePowerup *)this,0);
  if (cVar2 != '\0') {
    uVar6 = 0;
    goto LAB_04306d38;
  }
  if ((*(long *)(this + 200) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    lVar5 = *(long *)param_1;
switchD_04306dd0_caseD_0:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(long *)(this + 200) = lVar5;
    iVar3 = FUN_04305ee0(uVar1);
    iVar4 = FUN_04305ee0(*(undefined4 *)(param_1 + 0x14));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar3,(float)iVar4);
    uVar6 = 1;
    *(ulong *)(this + 0xd0) = CONCAT44(fStack_c,local_10);
  }
  else {
    lVar5 = *(long *)param_1;
    uVar6 = 0;
    if (*(long *)(this + 200) != lVar5) goto LAB_04306d38;
    switch(*(undefined4 *)(param_1 + 0x30)) {
    case 0:
      goto switchD_04306dd0_caseD_0;
    case 1:
      iVar3 = FUN_04305ee0(*(undefined4 *)(param_1 + 0x10));
      iVar4 = FUN_04305ee0(*(undefined4 *)(param_1 + 0x14));
      fVar7 = (float)iVar4;
      Sexy::FastCurve::SetOutRange(aFStack_18,(float)iVar3,fVar7);
      local_10 = Sexy::SexyVector2::operator-
                           ((SexyVector2 *)aFStack_18,(SexyVector2 *)(this + 0xd0));
      fStack_c = fVar7;
      fVar7 = (float)VectorNorm((FPoint *)&local_10);
      if (10000.0 < fVar7) {
        flick((SexyVector2 *)this);
        uVar6 = 1;
        break;
      }
    default:
      uVar6 = 1;
      break;
    case 3:
      iVar3 = FUN_04305ee0(*(undefined4 *)(param_1 + 0x10));
      iVar4 = FUN_04305ee0(*(undefined4 *)(param_1 + 0x14));
      fVar7 = (float)iVar4;
      Sexy::FastCurve::SetOutRange(aFStack_18,(float)iVar3,fVar7);
      local_10 = Sexy::SexyVector2::operator-
                           ((SexyVector2 *)aFStack_18,(SexyVector2 *)(this + 0xd0));
      fStack_c = fVar7;
      fVar7 = (float)VectorNorm((FPoint *)&local_10);
      if (625.0 < fVar7) {
        flick((SexyVector2 *)this);
      }
    case 4:
      cancelTouch(this);
      uVar6 = 1;
    }
  }
LAB_04306d38:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

