// Class: PlantFlamelady


/* PlantFlamelady::onWatered(bool) */

void __thiscall PlantFlamelady::onWatered(PlantFlamelady *this,bool param_1)

{
  if (param_1) {
    (**(code **)(*(long *)this + 0x440))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::onDestroy() */

void __thiscall PlantFlamelady::onDestroy(PlantFlamelady *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Plant_FirePeaShooter_PlantFood_End");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  PlantFramework::onDestroy((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::StaticClassInit() */

void PlantFlamelady::StaticClassInit(void)

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
    std::string::string(asStack_10,"EntityTarget");
    (*pcVar3)(plVar2,asStack_10,FUN_04133790,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantFlamelady");
    (*pcVar3)(plVar2,asStack_10,FUN_04134dec,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFlamelady::StaticGetClass() */

long * PlantFlamelady::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFlamelady",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFlamelady::GetClass() const */

long * PlantFlamelady::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFlamelady",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::CancelLevel5Attack() */

void __thiscall PlantFlamelady::CancelLevel5Attack(PlantFlamelady *this)

{
  RtObject *this_00;
  PlantAnimRig_Flamelady *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x68] != (PlantFlamelady)0x0) {
    this[0x68] = (PlantFlamelady)0x0;
    this[0x69] = (PlantFlamelady)0x1;
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Flamelady>(this_00);
    if (pPVar1 != (PlantAnimRig_Flamelady *)0x0) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnAnimStopped);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantFlamelady,void(PlantFlamelady::*)(std::string_const&)>(aDStack_38,aCStack_50);
      PlantAnimRig_Flamelady::StopLevel5Attack(pPVar1,aDStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::IsTargettedEntity(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantFlamelady::IsTargettedEntity(PlantFlamelady *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x50));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x50));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar3 + 0x10),param_2);
    if (cVar1 != '\0') break;
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::GetFlameSpreadingRect() */

void PlantFlamelady::GetFlameSpreadingRect(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_x0;
  RtWeakPtrBase *pRVar6;
  Effect_AngerFlame *pEVar7;
  TRect *extraout_x1;
  Insets *in_x8;
  int iVar8;
  int iVar9;
  int iVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x28) != '\0') {
    iVar5 = 0;
    iVar8 = 8;
    iVar9 = 0;
    iVar10 = 8;
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(in_x0 + 0x38));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x38));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_28,(__normal_iterator *)&local_18), bVar1)
    {
      pRVar6 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar6);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
      if (bVar1) {
        pEVar7 = (Effect_AngerFlame *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        cVar2 = Effect_AngerFlame::IsSpread(pEVar7);
        if (cVar2 != '\0') {
          pEVar7 = (Effect_AngerFlame *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          iVar3 = Effect_AngerFlame::GetFlameCol(pEVar7);
          pEVar7 = (Effect_AngerFlame *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          iVar4 = Effect_AngerFlame::GetFlameRow(pEVar7);
          if (iVar5 < iVar3) {
            iVar5 = iVar3;
          }
          if (iVar9 < iVar4) {
            iVar9 = iVar4;
          }
          if (iVar3 < iVar8) {
            iVar8 = iVar3;
          }
          if (iVar4 < iVar10) {
            iVar10 = iVar4;
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_28);
    }
    if ((iVar8 <= iVar5) && (iVar10 <= iVar9)) {
      Sexy::Insets::Insets((Insets *)local_28,iVar8,iVar10,(iVar5 - iVar8) + 1,(iVar9 - iVar10) + 1)
      ;
      BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)local_28,extraout_x1);
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      local_10 = local_10 + iVar5 / 2;
      local_18 = CONCAT44(local_18._4_4_,(int)local_18 - iVar5 / 2);
      Sexy::Insets::Insets(in_x8,(Insets *)&local_18);
      goto LAB_04131d34;
    }
  }
  Sexy::Insets::Insets(in_x8,0,0,0,0);
LAB_04131d34:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantFlamelady::PlantFlamelady() */

void __thiscall PlantFlamelady::PlantFlamelady(PlantFlamelady *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantFlamelady)0x0;
  this[0x29] = (PlantFlamelady)0x0;
  *(undefined ***)this = &PTR_GetClass_067eb5a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* PlantFlamelady::StaticNew() */

PlantFlamelady * PlantFlamelady::StaticNew(void)

{
  PlantFlamelady *this;
  
  this = ::operator_new(0x80);
  PlantFlamelady(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::StartLevel5Attack() */

void __thiscall PlantFlamelady::StartLevel5Attack(PlantFlamelady *this)

{
  long lVar1;
  RtObject *this_00;
  PlantAnimRig_Flamelady *pPVar2;
  float fVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x6c) = 0;
  this[0x69] = (PlantFlamelady)0x0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  lVar1 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar1 + 0x2fc));
  *(float *)(this + 0x74) = (float)(int)fVar3;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Flamelady>(this_00);
  if (pPVar2 != (PlantAnimRig_Flamelady *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantFlamelady,void(PlantFlamelady::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PlantAnimRig_Flamelady::PlayLevel5Attack(pPVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::StartPowerAttack() */

void __thiscall PlantFlamelady::StartPowerAttack(PlantFlamelady *this)

{
  long lVar1;
  RtObject *this_00;
  PlantAnimRig_Flamelady *pPVar2;
  float fVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x6c) = 0;
  this[0x29] = (PlantFlamelady)0x0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  lVar1 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar1 + 0x2fc));
  *(float *)(this + 0x74) = (float)(int)fVar3;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Flamelady>(this_00);
  if (pPVar2 != (PlantAnimRig_Flamelady *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantFlamelady,void(PlantFlamelady::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PlantAnimRig_Flamelady::PlayPowerAttack(pPVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFlamelady::setState(unsigned int) */

void __thiscall PlantFlamelady::setState(PlantFlamelady *this,uint param_1)

{
  if (*(uint *)(*(long *)(this + 0x10) + 200) != param_1) {
    *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
    if (param_1 == 0xb) {
      StartPowerAttack(this);
      return;
    }
    if (param_1 == 0xc) {
      StartLevel5Attack(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::OnAnimStopped(std::string const&) */

void __thiscall PlantFlamelady::OnAnimStopped(PlantFlamelady *this,string *param_1)

{
  char cVar1;
  RtObject *this_00;
  PlantAnimRig_Flamelady *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_Flamelady>(this_00);
  if (this_01 != (PlantAnimRig_Flamelady *)0x0) {
    PlantAnimRig_Flamelady::getPowerAttackOnAnimation();
    cVar1 = std::operator==(asStack_10,param_1);
    std::string::~string(asStack_10);
    if (cVar1 == '\0') {
      PlantAnimRig_Flamelady::getLevel5AttackOnAnimation(this_01);
      cVar1 = std::operator==(asStack_10,param_1);
      std::string::~string(asStack_10);
      if (cVar1 == '\0') {
        PlantAnimRig_Flamelady::getPowerAttackOffAnimation();
        cVar1 = std::operator==(asStack_18,param_1);
        if (cVar1 == '\0') {
          PlantAnimRig_Flamelady::getLevel5AttackOffAnimation(this_01);
          cVar1 = std::operator==(asStack_10,param_1);
          std::string::~string(asStack_10);
          std::string::~string(asStack_18);
          if (cVar1 == '\0') goto LAB_041322a0;
        }
        else {
          std::string::~string(asStack_18);
        }
        setState(this,4);
        (**(code **)(*(long *)this_01 + 0x118))(this_01);
      }
      else {
        this[0x68] = (PlantFlamelady)0x1;
        PlantAnimRig_Flamelady::LoopLevel5Attack(this_01);
      }
    }
    else {
      PlantAnimRig_Flamelady::LoopPowerAttack(this_01);
    }
  }
LAB_041322a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantFlamelady::Idle() */

void __thiscall PlantFlamelady::Idle(PlantFlamelady *this)

{
  RtObject *this_00;
  PlantAnimRig_Flamelady *pPVar1;
  
  PlantFramework::Idle((PlantFramework *)this);
  setState(this,4);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Flamelady>(this_00);
  if (pPVar1 != (PlantAnimRig_Flamelady *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x118))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::NeedCombat(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantFlamelady::NeedCombat(PlantFlamelady *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  BoardEntity *this_00;
  Board *this_01;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (gLawnApp != 0) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    BoardEntity::CalcGridPosition();
    if ((this_01 != (Board *)0x0) &&
       (((cVar3 = Board::IsPitOfDoom(this_01,aPStack_10), cVar3 != '\0' ||
         (cVar3 = Board::IsSky(this_01,aPStack_10), cVar3 != '\0')) ||
        (cVar3 = Board::IsShallowWater(this_01,aPStack_10), cVar3 != '\0')))) {
      bVar4 = false;
      goto LAB_041323d8;
    }
  }
  lVar6 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar6 + 0x2c8);
  iVar2 = *(int *)(*(long *)(this + 0x10) + 0x114);
  this_00 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar5 = BoardEntity::CalcColumnPosition(this_00);
  bVar4 = iVar5 <= iVar2 + iVar1;
LAB_041323d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* PlantFlamelady::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantFlamelady::launchProjectileAt
          (PlantFlamelady *this,Projectile *param_1,SexyVector3 *param_2,float param_3,float param_4
          )

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2e4);
  lVar1 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x2e4));
  lVar1 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2e0);
  lVar1 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2e0));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* PlantFlamelady::GetFireState() */

undefined1 __thiscall PlantFlamelady::GetFireState(PlantFlamelady *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  cVar1 = FUN_0412f5ac(uVar4);
  if (cVar1 != '\0') {
    return 2;
  }
  iVar2 = FUN_0412f5a4(uVar4);
  lVar3 = FUN_04131f9c(uVar4);
  return *(int *)(lVar3 + 0x2c4) <= iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::SpawnFireBall(Sexy::RtWeakPtr<BoardEntity>, int, PlantWeapon) */

void PlantFlamelady::SpawnFireBall
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantFlamelady *param_4,RtWeakPtr *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ResourceInfo *pRVar5;
  RtObject *pRVar6;
  Zombie *pZVar7;
  GridItem *pGVar8;
  float *pfVar9;
  Projectile *pPVar10;
  long lVar11;
  Point *extraout_x1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  float fVar16;
  Board *pBVar19;
  float fVar17;
  float fVar18;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_5);
  pPVar10 = (Projectile *)0x0;
  if (pRVar5 == (ResourceInfo *)0x0) goto LAB_041327e4;
  lVar13 = *(long *)(param_4 + 0x10);
  cVar1 = FUN_0412f5ac(lVar13);
  if (cVar1 == '\0') {
    iVar2 = GetFireState(param_4);
    lVar11 = *(long *)param_4;
    *(uint *)(lVar13 + 0x150) = (uint)(iVar2 != 0);
    cVar1 = (**(code **)(lVar11 + 0x180))(param_4);
    if (cVar1 != '\0') {
      *(int *)(*(long *)(param_4 + 0x10) + 0x150) = *(int *)(*(long *)(param_4 + 0x10) + 0x150) + 2;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)param_4 + 0x180))(param_4);
    if ((cVar1 == '\0') ||
       (cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10)), cVar1 == '\0')) {
      iVar2 = PlantFramework::Rand((PlantFramework *)param_4);
      *(int *)(*(long *)(param_4 + 0x10) + 0x150) = iVar2 % 3 + 4;
    }
    else {
      lVar13 = *(long *)(param_4 + 0x10);
      uVar4 = PlantFramework::Rand((PlantFramework *)param_4);
      uVar3 = 5;
      if ((uVar4 & 1) != 0) {
        uVar3 = 6;
      }
      *(undefined4 *)(lVar13 + 0x150) = uVar3;
    }
  }
  DVec3::DVec3((DVec3 *)&local_28);
  pRVar6 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
  pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar6);
  pRVar6 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
  pGVar8 = Sexy::RtObject::Cast<GridItem>(pRVar6);
  if (((pZVar7 == (Zombie *)0x0) ||
      (cVar1 = (**(code **)(*(long *)pZVar7 + 0x328))(pZVar7), cVar1 != '\0')) ||
     (cVar1 = (**(code **)(*(long *)pZVar7 + 0x330))(pZVar7), cVar1 != '\0')) {
LAB_04132630:
    if ((pGVar8 == (GridItem *)0x0) ||
       (cVar1 = (**(code **)(*(long *)pGVar8 + 0x200))(pGVar8), cVar1 == '\0')) {
      p_Var12 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_4 + 0x10);
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var12);
      local_24 = pfVar9[1];
      local_20 = 0;
      fVar16 = *pfVar9 + 600.0;
    }
    else {
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_18,extraout_x1);
      p_Var12 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_4 + 0x10);
      local_20 = 0x41c80000;
      local_24 = (float)local_2c;
      fVar16 = (float)local_30;
    }
  }
  else {
    uVar3 = FUN_0412f4d4(*(undefined4 *)(*(long *)(param_4 + 0x10) + 0x24));
    cVar1 = RealObject::IsOnTeam(pZVar7,uVar3);
    if (cVar1 != '\0') goto LAB_04132630;
    pcVar15 = *(code **)(*(long *)pZVar7 + 0x3b0);
    lVar13 = FUN_04131f9c(*(undefined8 *)(param_4 + 0x10));
    local_18 = (*pcVar15)(*(undefined4 *)(lVar13 + 0x2e0),pZVar7);
    local_14 = param_2;
    local_10 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    fVar17 = local_28;
    p_Var12 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(param_4 + 0x10);
    pfVar9 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var12);
    fVar16 = *pfVar9;
    if (*pfVar9 <= fVar17) {
      fVar16 = local_28;
    }
  }
  local_28 = fVar16;
  FUN_0412f580((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,p_Var12);
  lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar13 = FUN_0412f5ec(*(undefined8 *)(lVar13 + 0x70),
                        (long)*(int *)(*(long *)(param_4 + 0x10) + 0x150));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)(lVar13 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  p_Var12 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(param_4 + 0x10);
  pfVar9 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var12);
  fVar16 = *pfVar9;
  FUN_0412f580((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,p_Var12);
  lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar11 = *(long *)(param_4 + 0x10);
  lVar13 = FUN_0412f5ec(*(undefined8 *)(lVar13 + 0x70),(long)*(int *)(lVar11 + 0x150));
  pBVar19._0_4_ = (Board *)(fVar16 + *(float *)(lVar13 + 0x68) * *(float *)(lVar11 + 0xc4));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  p_Var12 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(param_4 + 0x10);
  lVar13 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var12);
  fVar18 = *(float *)(lVar13 + 4);
  FUN_0412f580((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,p_Var12);
  lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar11 = *(long *)(param_4 + 0x10);
  lVar13 = FUN_0412f5ec(*(undefined8 *)(lVar13 + 0x70),(long)*(int *)(lVar11 + 0x150));
  fVar17 = *(float *)(lVar11 + 0xc4);
  fVar16 = *(float *)(lVar13 + 0x6c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar1 = FUN_0412f5ac(*(undefined8 *)(param_4 + 0x10));
  if (cVar1 != '\0') {
    pBVar19._0_4_ = (Board *)((float)pBVar19._0_4_ - 30.0);
    fVar18 = fVar18 - 20.0;
  }
  uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_30);
  pPVar10 = (Projectile *)
            Board::AddProjectile
                      (pBVar19._0_4_,fVar18,-(fVar16 * fVar17),uVar14,
                       (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(param_4 + 0x10),0)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  launchProjectileAt(param_4,pPVar10,(SexyVector3 *)&local_28,0.1,0.1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
LAB_041327e4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar10);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::UpdateLevel5Attack(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantFlamelady::UpdateLevel5Attack(PlantFlamelady *this,RtWeakPtrBase *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_Dt();
  fVar3 = *(float *)(this + 0x6c);
  *(float *)(this + 0x6c) = fVar2 + fVar3;
  lVar1 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  if (*(float *)(lVar1 + 0x2f4) <= fVar2 + fVar3) {
    *(undefined4 *)(this + 0x70) = 0x3f800000;
    *(undefined4 *)(this + 0x6c) = 0;
    lVar1 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
    fVar2 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar1 + 0x2fc));
    *(float *)(this + 0x74) = (float)(int)fVar2;
  }
  else if (0.0 < *(float *)(this + 0x74)) {
    fVar2 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0x70);
    *(float *)(this + 0x70) = fVar2 + fVar3;
    lVar1 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
    if (*(float *)(lVar1 + 0x2f8) <= fVar2 + fVar3) {
      *(float *)(this + 0x74) = *(float *)(this + 0x74) - 1.0;
      *(undefined4 *)(this + 0x70) = 0;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      SpawnFireBall(this,aRStack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFlamelady::GetMaxFlameCol() */

int __thiscall PlantFlamelady::GetMaxFlameCol(PlantFlamelady *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x2b8);
    iVar2 = FUN_0412f5a4(*(undefined8 *)(this + 0x10));
    if (*(int *)(lVar3 + 0x2c0) <= iVar2) {
      iVar1 = iVar1 + *(int *)(lVar3 + 700);
    }
    return iVar1;
  }
  return 3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::Draw(Sexy::Graphics*) */

void PlantFlamelady::Draw(Graphics *param_1)

{
  char cVar1;
  wchar16 *pwVar2;
  Insets *pIVar3;
  PVPManager *in_x1;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  Insets aIStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Draw(param_1);
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pIVar3 = aIStack_28;
  std::string::string((string *)&local_18,"ShowFlameRect");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)&local_18,(LineBreakCategory *)pIVar3,in_x3,in_x4);
  std::string::~string((string *)&local_18);
  nop();
  if (cVar1 != '\0') {
    pIVar3 = (Insets *)PVPManager::GetSkillDatas(in_x1);
    Sexy::Insets::Insets(aIStack_28,pIVar3);
    Sexy::Color::Color((Color *)&local_18,2);
    Sexy::Graphics::SetColor((Graphics *)in_x1,(Color *)&local_18);
    GetFlameSpreadingRect();
    local_18 = FUN_0412f88c(local_18);
    local_14 = FUN_0412f88c(local_14);
    local_10 = FUN_0412f88c(local_10);
    local_c = FUN_0412f88c(local_c);
    Sexy::Graphics::DrawRect((Graphics *)in_x1,(TRect *)&local_18);
    Sexy::Graphics::SetColor((Graphics *)in_x1,(Color *)aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::FindLeftmostTargetType(BoardEntityTypeFlag, int) */

void __thiscall
PlantFlamelady::FindLeftmostTargetType(PlantFlamelady *this,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  GridItem *pGVar9;
  code *pcVar10;
  RealObject *this_00;
  float fVar11;
  float fVar12;
  RealObject *pRVar13;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pRVar13 = (RealObject *)0x0;
  local_8 = ___stack_chk_guard;
  iVar5 = *(int *)(*(long *)(this + 0x10) + 0x114);
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_30,iVar5,param_3,iVar4,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar12 = 1e+06;
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pRVar13);
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_00 = (RealObject *)*puVar7;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
    cVar2 = IsTargettedEntity(this,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if ((cVar2 == '\0') &&
       (cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10)), cVar2 != '\0'))
    {
      iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar11 = (float)FUN_0412f740(*(undefined4 *)(this_00 + 0x18),*(undefined4 *)(this_00 + 0x1c),
                                   *(undefined4 *)(this_00 + 0x20));
      iVar4 = BoardTransforms::BoardSpaceToGridX(fVar11);
      if (iVar4 < iVar5) {
        pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_00);
        if (pZVar8 == (Zombie *)0x0) {
LAB_04133288:
          pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)this_00);
          if ((((pGVar9 == (GridItem *)0x0) ||
               ((cVar2 = RealObject::IsOnTeam(pGVar9,1), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar9 + 0x208))(pGVar9), cVar2 != '\0')))) ||
              ((cVar2 = RealObject::IsOnTeam(pGVar9,2), cVar2 != '\0' &&
               (cVar2 = (**(code **)(*(long *)pGVar9 + 0x200))(pGVar9), cVar2 != '\0')))) &&
             (fVar11 = (float)FUN_0412f740(*(undefined4 *)(this_00 + 0x18),
                                           *(undefined4 *)(this_00 + 0x1c),
                                           *(undefined4 *)(this_00 + 0x20)), fVar11 < fVar12)) {
            pRVar13 = this_00;
            fVar12 = fVar11;
          }
        }
        else {
          uVar6 = operator|(1,8);
          cVar3 = Zombie::MatchesAny(pZVar8,uVar6);
          if (cVar3 == '\0') {
            pcVar10 = *(code **)(*(long *)pZVar8 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
            cVar3 = (*pcVar10)(pZVar8,aRStack_38,0);
            if ((cVar3 != '\0') && (cVar3 = Zombie::HasCondition(pZVar8,0x27), cVar3 == '\0')) {
              cVar2 = Zombie::HasCondition(pZVar8,0x25);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            if (cVar2 == '\0') goto LAB_04133288;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::FindBestTargetInRow(int) */

void PlantFlamelady::FindBestTargetInRow(int param_1)

{
  long lVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FindLeftmostTargetType((PlantFlamelady *)param_1,2,in_w1);
  if ((lVar1 == 0) &&
     (lVar1 = FindLeftmostTargetType((PlantFlamelady *)param_1,4,in_w1), lVar1 == 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFlamelady::FindBestTarget() */

void PlantFlamelady::FindBestTarget(void)

{
  int in_w0;
  
  FindBestTargetInRow(in_w0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantFlamelady::Fire
          (PlantFlamelady *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  ResourceInfo *pRVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    if (pRVar2 == (ResourceInfo *)0x0) {
      FindBestTarget();
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    uVar3 = SpawnFireBall(this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::FindCombatTarget() */

void PlantFlamelady::FindCombatTarget(void)

{
  char cVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtMixedPtr<Sexy::Image> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindBestTarget();
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_18);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = NeedCombat();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_18);
      goto LAB_041335e0;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
LAB_041335e0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::FindTargetAndFire(PlantWeapon) */

void PlantFlamelady::FindTargetAndFire(PlantFlamelady *param_1)

{
  char cVar1;
  bool bVar2;
  RealObject *this;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if ((cVar1 == '\0') && (1 < *(int *)(*(long *)(param_1 + 0x10) + 200) - 0xbU)) {
    FindCombatTarget();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      setState(param_1,0xb);
    }
    else {
      FindBestTarget();
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (bVar2) {
        cVar1 = FUN_0412f5ac(*(undefined8 *)(param_1 + 0x10));
        if (cVar1 == '\0') {
          (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
          this = *(RealObject **)(param_1 + 0x10);
          std::string::string((string *)aRStack_10,"Play_Plant_PepperPult_Attack");
          RealObject::PlayPositionalSound(this,(string *)aRStack_10,0.0);
          std::string::~string((string *)aRStack_10);
          nop();
        }
        else {
          setState(param_1,0xc);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::ApplyFlameDamage(bool) */

void __thiscall PlantFlamelady::ApplyFlameDamage(PlantFlamelady *this,bool param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  GridItem *pGVar11;
  undefined8 uVar12;
  Plant *this_00;
  Board *this_01;
  float fVar13;
  float fVar14;
  undefined8 local_a8;
  undefined8 local_a0;
  Point aPStack_98 [8];
  Point aPStack_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x28] != (PlantFlamelady)0x0) {
    lVar7 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
    this_00 = *(Plant **)(this + 0x10);
    iVar1 = *(int *)(this_00 + 0x110);
    if (param_1) {
      fVar14 = *(float *)(lVar7 + 0x2d8);
    }
    else {
      fVar14 = 1.0;
      fVar13 = *(float *)(lVar7 + 0x2d4);
      iVar4 = FUN_0412f5a4(this_00);
      for (iVar6 = 1; iVar6 < iVar4; iVar6 = iVar6 + 1) {
        fVar14 = fVar14 * (fVar13 * 0.01 + 1.0);
      }
      fVar14 = fVar14 * *(float *)(lVar7 + 0x2dc);
    }
    fVar13 = (float)Plant::GetExtraDPSmodifier(this_00);
    uVar8 = operator|(0x400,0x1000);
    uVar12 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_90,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)((float)(int)fVar14 * fVar13),local_80,local_7c,aDStack_68,uVar8,uVar12
               ,aPStack_90,0);
    GetFlameSpreadingRect();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesTouchingRectangle
              ((FastCurve *)&local_80,uVar5,aPStack_90,0xffffffff,0xffffffff);
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar3)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8)
      ;
      if ((SharkMinion *)*puVar9 != (SharkMinion *)0x0) {
        iVar6 = SharkMinion::getRow((SharkMinion *)*puVar9);
        if (param_1) {
          if ((iVar1 + -1 <= iVar6) && (iVar6 <= iVar1 + 1)) goto LAB_04134580;
        }
        else if (iVar1 == iVar6) {
LAB_04134580:
          if (gLawnApp != 0) {
            this_01 = *(Board **)(gLawnApp + 0x9f0);
            BoardEntity::CalcGridPosition();
            if ((this_01 != (Board *)0x0) &&
               (((cVar2 = Board::IsPitOfDoom(this_01,aPStack_98), cVar2 != '\0' ||
                 (cVar2 = Board::IsSky(this_01,aPStack_98), cVar2 != '\0')) ||
                (cVar2 = Board::IsShallowWater(this_01,aPStack_98), cVar2 != '\0'))))
            goto LAB_041345b8;
          }
          pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
          pGVar11 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar9);
          if ((((pZVar10 != (Zombie *)0x0) &&
               (cVar2 = (**(code **)(*(long *)pZVar10 + 0x328))(pZVar10), cVar2 == '\0')) &&
              (cVar2 = (**(code **)(*(long *)pZVar10 + 0x330))(pZVar10), cVar2 == '\0')) &&
             (cVar2 = Zombie::HasCondition(pZVar10,0x65), cVar2 == '\0')) {
            uVar5 = FUN_0412f4d4(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
            cVar2 = RealObject::IsOnTeam(pZVar10,uVar5);
            if (cVar2 == '\0') {
              (**(code **)(*(long *)pZVar10 + 0x110))(pZVar10,aDStack_68);
            }
          }
          if ((pGVar11 != (GridItem *)0x0) &&
             (cVar2 = (**(code **)(*(long *)pGVar11 + 0x200))(pGVar11), cVar2 != '\0')) {
            (**(code **)(*(long *)pGVar11 + 0x110))(pGVar11,aDStack_68);
          }
        }
      }
LAB_041345b8:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::CancelFlame() */

void __thiscall PlantFlamelady::CancelFlame(PlantFlamelady *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  Effect_AngerFlame *this_01;
  RealObject *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar2) {
      bVar1 = true;
      this_01 = (Effect_AngerFlame *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      Effect_AngerFlame::EndFlame(this_01);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Effect_AngerFlame>,std::allocator<Sexy::RtWeakPtr<Effect_AngerFlame>>>
  ::clear((vector<Sexy::RtWeakPtr<Effect_AngerFlame>,std::allocator<Sexy::RtWeakPtr<Effect_AngerFlame>>>
           *)this_00);
  if (bVar1) {
    this_02 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_10,"Play_Plant_FirePeaShooter_PlantFood_End");
    RealObject::PlayPositionalSound(this_02,(string *)&local_10,0.0);
    std::string::~string((string *)&local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::CancelPowerAttack() */

void __thiscall PlantFlamelady::CancelPowerAttack(PlantFlamelady *this)

{
  RtObject *this_00;
  PlantAnimRig_Flamelady *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x28] != (PlantFlamelady)0x0) {
    this[0x28] = (PlantFlamelady)0x0;
    this[0x29] = (PlantFlamelady)0x1;
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Flamelady>(this_00);
    if (pPVar1 != (PlantAnimRig_Flamelady *)0x0) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnAnimStopped);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantFlamelady,void(PlantFlamelady::*)(std::string_const&)>(aDStack_38,aCStack_50);
      PlantAnimRig_Flamelady::StopPowerAttack(pPVar1,aDStack_38);
    }
    CancelFlame(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::stopSpecialEffect() */

void __thiscall PlantFlamelady::stopSpecialEffect(PlantFlamelady *this)

{
  RtObject *this_00;
  PlantAnimRig_Flamelady *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (this[0x28] != (PlantFlamelady)0x0) {
    this[0x28] = (PlantFlamelady)0x0;
    this[0x29] = (PlantFlamelady)0x1;
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Flamelady>(this_00);
    if (pPVar1 != (PlantAnimRig_Flamelady *)0x0) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnAnimStopped);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantFlamelady,void(PlantFlamelady::*)(std::string_const&)>(aDStack_38,aCStack_50);
      PlantAnimRig_Flamelady::StopPowerAttack(pPVar1,aDStack_38);
    }
    CancelFlame(this);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFlamelady::ApplyPlantfood() */

void __thiscall PlantFlamelady::ApplyPlantfood(PlantFlamelady *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
    if (iVar2 == 0xb) {
      CancelPowerAttack(this);
      iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
    }
    if (iVar2 == 0xc) {
      CancelLevel5Attack(this);
    }
    setState(this,5);
    PlantFramework::ApplyPlantfood((PlantFramework *)this);
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x78) = uVar3;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04134ae8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantFlamelady::Initialize() */

void __thiscall PlantFlamelady::Initialize(PlantFlamelady *this)

{
  undefined4 uVar1;
  BoardEntity *this_00;
  ComponentWarmingRadius *this_01;
  long lVar2;
  PlantAction *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  string asStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [32];
  float local_60;
  float local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x29] = (PlantFlamelady)0x0;
  this[0x28] = (PlantFlamelady)0x0;
  std::vector<Sexy::RtWeakPtr<Effect_AngerFlame>,std::allocator<Sexy::RtWeakPtr<Effect_AngerFlame>>>
  ::clear((vector<Sexy::RtWeakPtr<Effect_AngerFlame>,std::allocator<Sexy::RtWeakPtr<Effect_AngerFlame>>>
           *)(this + 0x38));
  std::vector<EntityTarget,std::allocator<EntityTarget>>::clear
            ((vector<EntityTarget,std::allocator<EntityTarget>> *)(this + 0x50));
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_98);
  std::string::string(asStack_88,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_00,aRStack_90,asStack_88);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  std::string::~string(asStack_88);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  this_01 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  lVar2 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(lVar2 + 0x318));
  GetFireState(this);
  if ((int)lVar2 != 0) {
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    pPVar3 = (PlantAction *)FUN_0412f5ec(*(undefined8 *)(lVar2 + 0x70),1);
    PlantAction::PlantAction((PlantAction *)aRStack_80,pPVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    Sexy::FastCurve::SetOutRange((FastCurve *)(*(long *)(this + 0x10) + 0xbc),local_60,local_58);
    PlantAction::~PlantAction((PlantAction *)aRStack_80);
  }
  lVar2 = FUN_04131a88(*(undefined8 *)(this + 0x10));
  uVar1 = GetFireState(this);
  FUN_0412f5cc(lVar2 + 0x3b8,uVar1);
  this[0x68] = (PlantFlamelady)0x0;
  this[0x69] = (PlantFlamelady)0x0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x74) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x78) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFlamelady::CancelPlantfood() */

void __thiscall PlantFlamelady::CancelPlantfood(PlantFlamelady *this)

{
  bool bVar1;
  RtObject *this_00;
  PlantAnimRig_Flamelady *pPVar2;
  ComponentWarmingRadius *this_01;
  long lVar3;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    this_01 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    lVar3 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(lVar3 + 0x318));
  }
  std::vector<EntityTarget,std::allocator<EntityTarget>>::clear
            ((vector<EntityTarget,std::allocator<EntityTarget>> *)(this + 0x50));
  CancelFlame(this);
  setState(this,4);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Flamelady>(this_00);
  if (pPVar2 != (PlantAnimRig_Flamelady *)0x0) {
    (**(code **)(*(long *)pPVar2 + 0x118))();
  }
  return;
}


/* PlantFlamelady::~PlantFlamelady() */

void __thiscall PlantFlamelady::~PlantFlamelady(PlantFlamelady *this)

{
  *(undefined ***)this = &PTR_GetClass_067eb5a0;
  std::vector<EntityTarget,std::allocator<EntityTarget>>::~vector
            ((vector<EntityTarget,std::allocator<EntityTarget>> *)(this + 0x50));
  std::vector<Sexy::RtWeakPtr<Effect_AngerFlame>,std::allocator<Sexy::RtWeakPtr<Effect_AngerFlame>>>
  ::~vector((vector<Sexy::RtWeakPtr<Effect_AngerFlame>,std::allocator<Sexy::RtWeakPtr<Effect_AngerFlame>>>
             *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantFlamelady::~PlantFlamelady() */

void __thiscall PlantFlamelady::~PlantFlamelady(PlantFlamelady *this)

{
  ~PlantFlamelady(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::UpdateLevel5OnFoodAttack() */

void __thiscall PlantFlamelady::UpdateLevel5OnFoodAttack(PlantFlamelady *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  int local_20 [4];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_Dt();
  fVar8 = *(float *)(this + 0x6c);
  *(float *)(this + 0x6c) = fVar7 + fVar8;
  lVar5 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
  if (*(float *)(lVar5 + 0x304) <= fVar7 + fVar8) {
    *(undefined4 *)(this + 0x70) = 0x3f800000;
    *(undefined4 *)(this + 0x6c) = 0;
    lVar5 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
    fVar7 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar5 + 0x30c));
    *(float *)(this + 0x74) = (float)(int)fVar7;
  }
  else if (0.0 < *(float *)(this + 0x74)) {
    fVar7 = (float)PVZ_Dt();
    fVar8 = *(float *)(this + 0x70);
    *(float *)(this + 0x70) = fVar7 + fVar8;
    lVar5 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
    if (*(float *)(lVar5 + 0x308) <= fVar7 + fVar8) {
      *(undefined4 *)(this + 0x70) = 0;
      *(float *)(this + 0x74) = *(float *)(this + 0x74) - 1.0;
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar1 == '\0') {
        FindBestTarget();
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_38);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)&local_38);
          SpawnFireBall(this,(RtWeakPtr<Sexy::SoundResource> *)local_20,
                        *(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20)
          ;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      }
      else {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
        for (iVar4 = 0; iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar3; iVar4 = iVar4 + 1)
        {
          FindBestTargetInRow((int)this);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
          if (bVar2) {
            EntityTarget::EntityTarget((EntityTarget *)local_20);
            local_20[0] = iVar4;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      (aRStack_10,(RtWeakPtrBase *)aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            std::vector<EntityTarget,std::allocator<EntityTarget>>::push_back
                      ((vector<EntityTarget,std::allocator<EntityTarget>> *)&local_38,
                       (EntityTarget *)local_20);
            PVPZoneData::~PVPZoneData((PVPZoneData *)local_20);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        }
        lVar5 = FUN_0412f5fc(local_38,local_30);
        if (lVar5 != 0) {
          iVar4 = RandRangeInt(0,(int)lVar5 + -1);
          puVar6 = (undefined4 *)FUN_0412f62c(local_38,(long)iVar4);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)(puVar6 + 4));
          SpawnFireBall(this,(RtWeakPtr<Sexy::SoundResource> *)local_20,*puVar6,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20)
          ;
        }
        std::vector<EntityTarget,std::allocator<EntityTarget>>::~vector
                  ((vector<EntityTarget,std::allocator<EntityTarget>> *)&local_38);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::UpdateActions() */

void __thiscall PlantFlamelady::UpdateActions(PlantFlamelady *this)

{
  char cVar1;
  bool bVar2;
  Plant *this_00;
  undefined4 *puVar3;
  float fVar4;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x78) < fVar4) {
    bVar2 = (bool)(**(code **)(*(long *)this + 0x180))(this);
    ApplyFlameDamage(this,bVar2);
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x78) = fVar4 + 1.0;
  }
  this_00 = *(Plant **)(this + 0x10);
  switch(*(undefined4 *)(this_00 + 200)) {
  case 4:
    FindCombatTarget();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar2) {
      setState(this,0xb);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    cVar1 = Plant::IsWatering(*(Plant **)(this + 0x10));
    break;
  case 5:
    cVar1 = FUN_0412f5ac();
    if (cVar1 == '\0') {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x50));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x50));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar2) {
        puVar3 = (undefined4 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        if ((*(char *)(puVar3 + 1) == '\0') && (fVar4 = (float)PVZ_T(), (float)puVar3[2] < fVar4)) {
          *(undefined1 *)(puVar3 + 1) = 1;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(puVar3 + 4));
          SpawnFireBall(this,aRStack_10,*puVar3,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
      }
    }
    else {
      UpdateLevel5OnFoodAttack(this);
    }
    goto LAB_04135998;
  default:
switchD_041359d8_caseD_6:
    cVar1 = Plant::IsWatering(this_00);
    break;
  case 0xb:
    if ((this[0x29] != (PlantFlamelady)0x0) || (this[0x28] == (PlantFlamelady)0x0))
    goto LAB_04135998;
    FindBestTarget();
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_18);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)&local_18);
      cVar1 = NeedCombat(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar1 != '\0') {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
        if ((bVar2) && (cVar1 = FUN_0412f5ac(*(undefined8 *)(this + 0x10)), cVar1 != '\0')) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)&local_18);
          UpdateLevel5Attack(this,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        this_00 = *(Plant **)(this + 0x10);
        goto switchD_041359d8_caseD_6;
      }
    }
    CancelPowerAttack(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    goto LAB_04135998;
  case 0xc:
    if ((this[0x69] != (PlantFlamelady)0x0) || (this[0x68] == (PlantFlamelady)0x0))
    goto LAB_04135998;
    FindCombatTarget();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_20);
    if (bVar2) {
      CancelLevel5Attack(this);
    }
    else {
      FindBestTarget();
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
      if (bVar2) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)&local_18);
        UpdateLevel5Attack(this,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        this_00 = *(Plant **)(this + 0x10);
        goto switchD_041359d8_caseD_6;
      }
      CancelLevel5Attack(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    goto LAB_04135998;
  }
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x440))(this);
  }
LAB_04135998:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::SpawnFlame(int, int) */

void __thiscall PlantFlamelady::SpawnFlame(PlantFlamelady *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  Effect_PopAnim *this_00;
  PopAnim *pPVar8;
  RtClass *pRVar9;
  Effect_AngerFlame *this_01;
  long lVar10;
  RealObject *this_02;
  Board *pBVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  Point aPStack_38 [8];
  int local_30;
  int local_2c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((-1 < param_1) && (iVar4 = BoardConstants::NUMBER_OF_ROWS(), param_1 < iVar4)) {
    this[0x28] = (PlantFlamelady)0x1;
    uVar5 = Board::MakeRenderOrder(0x65130,param_1,1);
    lVar7 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
    std::string::string((string *)local_18,"POPANIM_EFFECTS_FLAMELADY_GROUNDFLAME");
    GetPAMByName((string *)local_18);
    std::string::~string((string *)local_18);
    nop();
    iVar4 = *(int *)(*(long *)(this + 0x10) + 0x114) + 1;
    if (iVar4 <= param_2) {
      fVar12 = 0.0;
      bVar2 = false;
      do {
        while (((Sexy::Point::Point(aPStack_38,iVar4,param_1), gLawnApp != 0 &&
                (pBVar11 = *(Board **)(gLawnApp + 0x9f0), pBVar11 != (Board *)0x0)) &&
               ((cVar3 = Board::IsPitOfDoom(pBVar11,aPStack_38), cVar3 != '\0' ||
                ((cVar3 = Board::IsSky(pBVar11,aPStack_38), cVar3 != '\0' ||
                 (cVar3 = Board::IsShallowWater(pBVar11,aPStack_38), cVar3 != '\0'))))))) {
LAB_04135fdc:
          iVar4 = iVar4 + 1;
          if (param_2 < iVar4) goto LAB_04136168;
        }
        BoardTransforms::GridToBoardSpace(aPStack_38);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)local_18,(float)local_30 + *(float *)(lVar7 + 0x2ec),
                   (float)local_2c + *(float *)(lVar7 + 0x2f0),0.0);
        pBVar11 = *(Board **)(gLawnApp + 0x9f0);
        if (pBVar11[0x119] == (Board)0x0) {
          local_10 = 0;
        }
        else {
          local_10 = Board::calculateRoofOffsetZ(local_18[0]);
          pBVar11 = *(Board **)(gLawnApp + 0x9f0);
        }
        this_00 = Board::AddEffect<Effect_PopAnim>(pBVar11);
        if (this_00 == (Effect_PopAnim *)0x0) goto LAB_04135fdc;
        bVar2 = true;
        pPVar8 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        pRVar9 = (RtClass *)Effect_AngerFlame::StaticGetClass();
        Effect_PopAnim::CreatePopAnimRig(this_00,pPVar8,pRVar9);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_00,(SexyVector3 *)local_18,-1);
        FUN_0412f570(this_00 + 0x1c,uVar5);
        Effect_PopAnim::SetCentered(this_00,true);
        UIWidget::GetAtlasImage((UIWidget *)this_00);
        nop();
        Effect_AngerFlame::SetFlameDelay(this_01,fVar12);
        iVar1 = iVar4 + 1;
        Effect_AngerFlame::SetFlameCol(this_01,iVar4);
        Effect_AngerFlame::SetFlameRow(this_01,param_1);
        uVar6 = GetFireState(this);
        FUN_0412f5d4(this_01 + 0x210,uVar6);
        Effect_AngerFlame::SetOwningEffect(this_01,this_00);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
        std::
        vector<Sexy::RtWeakPtr<Effect_AngerFlame>,std::allocator<Sexy::RtWeakPtr<Effect_AngerFlame>>>
        ::push_back((vector<Sexy::RtWeakPtr<Effect_AngerFlame>,std::allocator<Sexy::RtWeakPtr<Effect_AngerFlame>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        lVar10 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
        fVar12 = fVar12 + *(float *)(lVar10 + 0x2d0);
        iVar4 = iVar1;
      } while (iVar1 <= param_2);
LAB_04136168:
      if (bVar2) {
        this_02 = *(RealObject **)(this + 0x10);
        std::string::string((string *)local_18,"Play_Plant_FirePeaShooter_PlantFood_Start");
        RealObject::PlayPositionalSound(this_02,(string *)local_18,0.0);
        std::string::~string((string *)local_18);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        goto LAB_04136178;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
LAB_04136178:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall PlantFlamelady::OnAnimCommand(PlantFlamelady *this,string *param_1,string *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  int local_10;
  int local_c;
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==("spawn_flame",param_1);
  if (bVar2) {
    uVar3 = (**(code **)(*(long *)this + 0x180))(this,*(code **)(*(long *)this + 0x180),param_2);
    if ((uVar3 & 0xff) == 0) {
      local_10 = BoardConstants::NUMBER_OF_COLUMNS();
      local_10 = local_10 + -1;
      iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
      local_c = GetMaxFlameCol(this);
      local_c = iVar1 + local_c;
      piVar4 = eastl::min_alt<int>(&local_10,&local_c);
      SpawnFlame(this,*(int *)(*(long *)(this + 0x10) + 0x110),*piVar4);
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)(uVar3 & 0xff);
      (**(code **)(*(long *)this + 0xa8))(this,0);
    }
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    uVar5 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand((string *)this,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlamelady::DoSpecial(int) */

void PlantFlamelady::DoSpecial(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PlantFlamelady *this;
  long lVar4;
  ulong uVar5;
  ComponentWarmingRadius *this_00;
  int iVar6;
  int iVar7;
  Plant *this_01;
  float fVar8;
  undefined4 local_38;
  char local_34;
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  int local_20;
  undefined1 local_1c;
  float local_18;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_10 [8];
  long local_8;
  
  this = (PlantFlamelady *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    lVar4 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar4 + 0x430));
  }
  std::vector<EntityTarget,std::allocator<EntityTarget>>::clear
            ((vector<EntityTarget,std::allocator<EntityTarget>> *)(this + 0x50));
  this_01 = *(Plant **)(this + 0x10);
  cVar2 = FUN_0412f5ac(this_01);
  if (cVar2 == '\0') {
    cVar2 = Plant::GetAvatarEnable(this_01);
    if (cVar2 != '\0') {
      fVar8 = 0.0;
      lVar4 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
      iVar6 = *(int *)(lVar4 + 0x2cc);
      local_38 = 0;
      local_34 = '\0';
      iVar7 = 0;
      while (uVar5 = FUN_0412f5fc(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58)),
            uVar5 < (ulong)(long)iVar6) {
        FindBestTargetInRow(param_1);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
        if (bVar1) {
          EntityTarget::EntityTarget((EntityTarget *)&local_20);
          local_1c = 0;
          local_20 = iVar7 % 5;
          local_18 = (float)PVZ_T();
          local_18 = local_18 + fVar8;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    (aRStack_10,(RtWeakPtrBase *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          std::vector<EntityTarget,std::allocator<EntityTarget>>::push_back
                    ((vector<EntityTarget,std::allocator<EntityTarget>> *)(this + 0x50),
                     (EntityTarget *)&local_20);
          lVar4 = FUN_04131f9c(*(undefined8 *)(this + 0x10));
          fVar8 = fVar8 + *(float *)(lVar4 + 0x2e8);
          PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          iVar7 = iVar7 + 1;
        }
        else {
          *(undefined1 *)((long)&local_38 + (long)(iVar7 % 5)) = 1;
          if (((((char)local_38 != '\0') && (local_38._1_1_ != '\0')) && (local_38._2_1_ != '\0'))
             && ((local_38._3_1_ != '\0' && (local_34 != '\0')))) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            break;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          iVar7 = iVar7 + 1;
        }
      }
    }
  }
  else {
    *(undefined4 *)(this + 0x70) = 0x3f800000;
    *(undefined4 *)(this + 0x6c) = 0;
    lVar4 = FUN_04131f9c();
    fVar8 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar4 + 0x30c));
    *(float *)(this + 0x74) = (float)(int)fVar8;
  }
  iVar6 = *(int *)(*(long *)(this + 0x10) + 0x110) + -1;
  if (iVar6 <= *(int *)(*(long *)(this + 0x10) + 0x110) + 1) {
    do {
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar7 = iVar6 + 1;
      SpawnFlame(this,iVar6,iVar3 + -1);
      iVar6 = iVar7;
    } while (iVar7 <= *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

