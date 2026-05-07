// Class: PlantIcyCurrant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::StaticClassInit() */

void PlantIcyCurrant::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantIcyCurrant");
    (*pcVar2)(plVar1,asStack_10,FUN_03c256fc,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcyCurrant::StaticGetClass() */

long * PlantIcyCurrant::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantIcyCurrant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIcyCurrant::GetClass() const */

long * PlantIcyCurrant::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantIcyCurrant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::GetPrimaryDamage() */

void __thiscall PlantIcyCurrant::GetPrimaryDamage(PlantIcyCurrant *this)

{
  char cVar1;
  long lVar2;
  PlantAction *pPVar3;
  Plant *this_00;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  PlantAction aPStack_80 [44];
  int local_54;
  long local_8;
  
  fVar5 = 1.0;
  local_8 = ___stack_chk_guard;
  FUN_03c22db4(aRStack_88,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
  pPVar3 = (PlantAction *)FUN_03c22e34(*(undefined8 *)(lVar2 + 0x70),0);
  PlantAction::PlantAction(aPStack_80,pPVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  this_00 = *(Plant **)(this + 0x10);
  cVar1 = FUN_03c22dd8(this_00);
  if (cVar1 != '\0') {
    fVar5 = 1.5;
  }
  fVar4 = (float)Plant::GetTotalDamageRate(this_00);
  PlantAction::~PlantAction(aPStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5 * fVar4 * (float)local_54);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantIcyCurrant::onAnimStoppedCallback(PlantIcyCurrant *this,string *param_1)

{
  char cVar1;
  PlantAnimRig_IcyCurrant *this_00;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  (**(code **)(*(long *)this_00 + 0x1f0))(asStack_40);
  cVar1 = std::operator==(param_1,asStack_40);
  std::string::~string(asStack_40);
  if (cVar1 == '\0') {
    PlantAnimRig_IcyCurrant::getAttackStopAnimationName(this_00);
    cVar1 = std::operator==(param_1,asStack_40);
    std::string::~string(asStack_40);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this_00 + 0x118))(this_00);
    }
  }
  else {
    PlantAnimRig_Mandrake::getPlantFoodMainAnimName((PlantAnimRig_Mandrake *)this_00);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this_00,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::PlantIcyCurrant() */

void __thiscall PlantIcyCurrant::PlantIcyCurrant(PlantIcyCurrant *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06749bc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x30] = (PlantIcyCurrant)0x0;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar2;
  uVar2 = PVZ_EOT();
  this[0x31] = (PlantIcyCurrant)0x0;
  *(undefined4 *)(this + 0x2c) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnd);
  Sexy::Delegate0::Delegate0<PlantIcyCurrant,void(PlantIcyCurrant::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRailcartMoved);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<GridItemRailcart*,Sexy::CBMemberTranslatorX<PlantIcyCurrant,void(PlantIcyCurrant::*)(GridItemRailcart*)>>
            ((MessageRouter *)puVar1,Message::RailcartMoved,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcyCurrant::StaticNew() */

PlantIcyCurrant * PlantIcyCurrant::StaticNew(void)

{
  PlantIcyCurrant *this;
  
  this = ::operator_new(0x50);
  PlantIcyCurrant(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::setState(unsigned int) */

void __thiscall PlantIcyCurrant::setState(PlantIcyCurrant *this,uint param_1)

{
  PlantAnimRig_IcyCurrant *extraout_x0;
  long *extraout_x0_00;
  long lVar1;
  long *plVar2;
  PlantAnimRig_IcyCurrant *extraout_x0_01;
  UIEasyButtonWidget *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this_00 + 200) != param_1) {
    if (param_1 == 5) {
      fVar3 = (float)PVZ_T();
      lVar1 = FUN_03c243d8(*(undefined8 *)(this + 0x10));
      fVar5 = *(float *)(lVar1 + 0x2c4);
      plVar2 = (long *)FUN_03c244b8(*(undefined8 *)(this + 0x10));
      fVar4 = (float)(**(code **)(*plVar2 + 0x1b8))(plVar2,0);
      *(float *)(this + 0x2c) = fVar3 + fVar4 + fVar5;
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
    }
    else {
      if (param_1 == 10) {
        UIEasyButtonWidget::GetImageNormal(this_00);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        PlantAnimRig_IcyCurrant::StartAttack(extraout_x0,aRStack_50);
      }
      else {
        if (param_1 != 4) {
          *(uint *)(this_00 + 200) = param_1;
          goto LAB_03c245e4;
        }
        if (*(uint *)(this_00 + 200) != 10) {
          UIEasyButtonWidget::GetImageNormal(this_00);
          nop();
          (**(code **)(*extraout_x0_00 + 0x118))();
          *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
          goto LAB_03c245e4;
        }
        UIEasyButtonWidget::GetImageNormal(this_00);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        PlantAnimRig_IcyCurrant::StopAttack(extraout_x0_01,aRStack_50);
      }
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
    }
  }
LAB_03c245e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcyCurrant::ApplyPlantfood() */

void __thiscall PlantIcyCurrant::ApplyPlantfood(PlantIcyCurrant *this)

{
  this[0x30] = (PlantIcyCurrant)0x1;
  setState(this,5);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantIcyCurrant::CancelPlantfood() */

void __thiscall PlantIcyCurrant::CancelPlantfood(PlantIcyCurrant *this)

{
  this[0x30] = (PlantIcyCurrant)0x0;
  setState(this,0xb);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::DoAttack(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall PlantIcyCurrant::DoAttack(PlantIcyCurrant *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PlantAction *pPVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e0 [16];
  undefined1 auStack_d0 [80];
  PlantAction aPStack_80 [120];
  long local_8;
  
  lVar10 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_03c22da4(*(undefined4 *)(lVar10 + 0x50));
  if (iVar3 == 2) {
    fVar13 = (float)RandRangeFloat(0.0,1.0);
    lVar9 = FUN_03c243d8(*(undefined8 *)(this + 0x10));
    lVar10 = *(long *)(this + 0x10);
    bVar1 = fVar13 < *(float *)(lVar9 + 0x2b8);
  }
  else if (iVar3 < 3) {
    bVar1 = false;
  }
  else {
    fVar13 = (float)RandRangeFloat(0.0,1.0);
    lVar9 = FUN_03c243d8(*(undefined8 *)(this + 0x10));
    lVar10 = *(long *)(this + 0x10);
    bVar1 = fVar13 < *(float *)(lVar9 + 700);
  }
  uVar11 = 0;
  FUN_03c22db4(aRStack_e0,lVar10);
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
  pPVar4 = (PlantAction *)FUN_03c22e34(*(undefined8 *)(lVar10 + 0x70),bVar1);
  PlantAction::PlantAction(aPStack_80,pPVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  operator|=(auStack_d0,0x1000000000000);
  uVar12 = *(undefined8 *)param_1;
  lVar10 = FUN_03c22e44(uVar12,*(undefined8 *)(param_1 + 8));
  if (lVar10 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03c22e50(uVar12,uVar11);
      plVar7 = (long *)0x0;
      if ((RtObject *)*puVar5 == (RtObject *)0x0) {
LAB_03c24a4c:
        (**(code **)(*plVar7 + 0x110))(plVar7,aRStack_e0);
      }
      else {
        pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if ((pZVar6 == (Zombie *)0x0) ||
           ((cVar2 = Zombie::HasCondition(pZVar6,0x65), cVar2 == '\0' &&
            (cVar2 = RealObject::IsOnOpposingTeam
                               (*(RealObject **)(this + 0x10),(RealObject *)pZVar6), cVar2 != '\0'))
           )) {
          puVar5 = (undefined8 *)FUN_03c22e50(*(undefined8 *)param_1,uVar11);
          plVar7 = (long *)*puVar5;
          goto LAB_03c24a4c;
        }
      }
      uVar12 = *(undefined8 *)param_1;
      uVar11 = uVar11 + 1;
      uVar8 = FUN_03c22e44(uVar12,*(undefined8 *)(param_1 + 8));
    } while (uVar11 < uVar8);
  }
  FUN_03c22db4(aRStack_e8,*(undefined8 *)(this + 0x10));
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
  lVar10 = FUN_03c22e34(*(undefined8 *)(lVar10 + 0x70),bVar1);
  fVar14 = *(float *)(lVar10 + 0x28);
  fVar13 = (float)PVZ_T();
  *(float *)(this + 0x28) = fVar13 + fVar14;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_e0);
  PlantAction::~PlantAction(aPStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::UpdateActions() */

void __thiscall PlantIcyCurrant::UpdateActions(PlantIcyCurrant *this)

{
  char cVar1;
  int iVar2;
  UIEasyButtonWidget *this_00;
  Effect_AngerFlame *this_01;
  long lVar3;
  float fVar4;
  float fVar5;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    iVar2 = *(int *)(this_00 + 200);
    if (iVar2 == 1) {
      setState(this,4);
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      iVar2 = *(int *)(this_00 + 200);
    }
    if (iVar2 == 4) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      Sexy::Insets::Insets
                (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),
                 *(int *)(*(long *)(this + 0x10) + 0x110),1,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                 aIStack_30);
      lVar3 = FUN_03c22e44(local_20,local_18);
      if (lVar3 != 0) {
        setState(this,10);
      }
    }
    else {
      if (iVar2 != 10) {
        if (iVar2 == 5) {
          fVar5 = *(float *)(this + 0x2c);
          fVar4 = (float)PVZ_T();
          if (fVar5 <= fVar4) {
            (**(code **)(*(long *)this + 0x228))(this);
          }
        }
        else if (iVar2 == 0xb) {
          this_01 = (Effect_AngerFlame *)UIEasyButtonWidget::GetImageNormal(this_00);
          iVar2 = Effect_AngerFlame::GetFlameCol(this_01);
          if (iVar2 == 1) {
            setState(this,4);
          }
        }
        goto LAB_03c24bc0;
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      Sexy::Insets::Insets
                (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),
                 *(int *)(*(long *)(this + 0x10) + 0x110),1,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                 aIStack_30);
      lVar3 = FUN_03c22e44(local_20,local_18);
      if (lVar3 == 0) {
        setState(this,4);
      }
      else {
        fVar5 = *(float *)(this + 0x28);
        fVar4 = (float)PVZ_T();
        if (fVar5 <= fVar4) {
          DoAttack(this,(vector *)&local_20);
        }
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
LAB_03c24bc0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::Explode() */

void __thiscall PlantIcyCurrant::Explode(PlantIcyCurrant *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  PlantAction *pPVar6;
  float *pfVar7;
  undefined8 *puVar8;
  Zombie *pZVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  FastCurve aFStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e0 [16];
  undefined1 auStack_d0 [80];
  PlantAction aPStack_80 [20];
  float local_6c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03c22db4(aRStack_e0,*(undefined8 *)(this + 0x10));
  uVar11 = 0;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
  pPVar6 = (PlantAction *)FUN_03c22e34(*(undefined8 *)(lVar5 + 0x70),2);
  PlantAction::PlantAction(aPStack_80,pPVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  operator|=(auStack_d0,0x1000000000000);
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar13 = *pfVar7;
  fVar14 = pfVar7[1];
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_f8);
  uVar4 = operator|(2,4);
  Sexy::FastCurve::SetOutRange(aFStack_100,fVar13,fVar14);
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar3 * SQRT(local_6c),
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_f8,uVar4,
             aFStack_100,iVar1 - (int)local_6c / 2,(int)local_6c / 2 + iVar1);
  uVar12 = local_f8;
  lVar5 = FUN_03c22e44(local_f8,local_f0);
  if (lVar5 != 0) {
    do {
      puVar8 = (undefined8 *)FUN_03c22e50(uVar12,uVar11);
      pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
      if ((pZVar9 == (Zombie *)0x0) ||
         ((cVar2 = Zombie::HasCondition(pZVar9,0x65), cVar2 == '\0' &&
          (cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(this + 0x10),(RealObject *)pZVar9),
          cVar2 != '\0')))) {
        puVar8 = (undefined8 *)FUN_03c22e50(local_f8,uVar11);
        (**(code **)(*(long *)*puVar8 + 0x110))((long *)*puVar8,aRStack_e0);
      }
      uVar12 = local_f8;
      uVar11 = uVar11 + 1;
      uVar10 = FUN_03c22e44(local_f8,local_f0);
    } while (uVar11 < uVar10);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_f8);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_e0);
  PlantAction::~PlantAction(aPStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcyCurrant::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantIcyCurrant::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    Explode((PlantIcyCurrant *)param_1);
  }
  return 1;
}


/* PlantIcyCurrant::~PlantIcyCurrant() */

void __thiscall PlantIcyCurrant::~PlantIcyCurrant(PlantIcyCurrant *this)

{
  *(undefined ***)this = &PTR_GetClass_06749bc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>::
  ~vector((vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>
           *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantIcyCurrant::~PlantIcyCurrant() */

void __thiscall PlantIcyCurrant::~PlantIcyCurrant(PlantIcyCurrant *this)

{
  ~PlantIcyCurrant(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::RemoveFence(Sexy::RtWeakPtr<IcyCurrantFence>) */

void __thiscall PlantIcyCurrant::RemoveFence(PlantIcyCurrant *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_03c25a94:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,pRVar3);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>
      ::erase((vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>
               *)this_00,local_10);
      goto LAB_03c25a94;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::ReleaseFence() */

void __thiscall PlantIcyCurrant::ReleaseFence(PlantIcyCurrant *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  long *plVar7;
  PlantIcyCurrant *extraout_x0;
  undefined8 local_20;
  RtWeakPtrBase aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,pRVar3);
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar5 + 0x10));
    if (*(ResourceInfo **)(this + 0x10) == pRVar6) {
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x18);
LAB_03c25cec:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      nop();
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar3);
      RemoveFence(extraout_x0,
                  (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    else {
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar5 + 0x18));
      if (*(ResourceInfo **)(this + 0x10) == pRVar6) {
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x10);
        goto LAB_03c25cec;
      }
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>::
    erase((vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>
           *)this_00,local_10);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar2 != '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      (**(code **)(*plVar7 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::OnRelocationBegun() */

void __thiscall PlantIcyCurrant::OnRelocationBegun(PlantIcyCurrant *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  long *plVar7;
  PlantIcyCurrant *extraout_x0;
  undefined8 uStack_20;
  RtWeakPtrBase aRStack_18 [8];
  undefined8 uStack_10;
  long lStack_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  lStack_8 = ___stack_chk_guard;
  uStack_20 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
  do {
    uStack_10 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_20,(__normal_iterator *)&uStack_10);
    if (!bVar1) {
      if (lStack_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,pRVar3);
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar5 + 0x10));
    if (*(ResourceInfo **)(this + 0x10) == pRVar6) {
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x18);
LAB_03c25cec:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      nop();
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&uStack_10,pRVar3);
      RemoveFence(extraout_x0,
                  (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   *)&uStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_10);
    }
    else {
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar5 + 0x18));
      if (*(ResourceInfo **)(this + 0x10) == pRVar6) {
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x10);
        goto LAB_03c25cec;
      }
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&uStack_10,(__normal_iterator *)&uStack_20);
    std::vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>::
    erase((vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>
           *)this_00,uStack_10);
    uStack_20 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar2 != '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      (**(code **)(*plVar7 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::onDestroy() */

void __thiscall PlantIcyCurrant::onDestroy(PlantIcyCurrant *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ReleaseFence(this);
  local_18 = FUN_03c23f34(stIcyCurrantList);
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)&stIcyCurrantList);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
LAB_03c25df8:
      PlantFramework::onDestroy((PlantFramework *)this);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if (this == (PlantIcyCurrant *)*puVar2) {
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
                 (TextureInfo ***)&local_18);
      FUN_03c2401c(local_10);
      goto LAB_03c25df8;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::onApplyCondition(PlantConditions) */

void __thiscall PlantIcyCurrant::onApplyCondition(PlantIcyCurrant *this,int param_2)

{
  char cVar1;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if ((((cVar1 == '\0') &&
       (cVar1 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10)), cVar1 == '\0')) &&
      (param_2 != 0x15)) && (_FUN_03c25eb0 < *(float *)(*(long *)(this + 0x10) + 0xd8))) {
    return;
  }
  ReleaseFence(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::onLevelEnd() */

void __thiscall PlantIcyCurrant::onLevelEnd(PlantIcyCurrant *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this[0x31] = (PlantIcyCurrant)0x1;
  local_8 = ___stack_chk_guard;
  ReleaseFence(this);
  local_18 = FUN_03c23f34(stIcyCurrantList);
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)&stIcyCurrantList);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
LAB_03c25f44:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if (this == (PlantIcyCurrant *)*puVar2) {
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
                 (TextureInfo ***)&local_18);
      FUN_03c2401c(local_10);
      goto LAB_03c25f44;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* PlantIcyCurrant::AddFence(Sexy::RtWeakPtr<IcyCurrantFence>) */

void __thiscall PlantIcyCurrant::AddFence(PlantIcyCurrant *this,RtWeakPtr *param_2)

{
  bool bVar1;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (!bVar1) {
    return;
  }
  std::vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>::
  push_back((vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>
             *)(this + 0x38),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::CreateFence() */

void __thiscall PlantIcyCurrant::CreateFence(PlantIcyCurrant *this)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  PlantIcyCurrant *pPVar4;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = FUN_03c23f34(stIcyCurrantList);
  local_20 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)&stIcyCurrantList);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20), bVar1
        ) {
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
    pPVar4 = (PlantIcyCurrant *)*puVar2;
    if ((pPVar4 != this) && (lVar3 = IcyCurrantFence::CreateFence(this,pPVar4), lVar3 != 0)) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      std::vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>
      ::push_back((vector<Sexy::RtWeakPtr<IcyCurrantFence>,std::allocator<Sexy::RtWeakPtr<IcyCurrantFence>>>
                   *)(this + 0x38),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      AddFence(pPVar4,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::Initialize() */

void __thiscall PlantIcyCurrant::Initialize(PlantIcyCurrant *this)

{
  char cVar1;
  long extraout_x0;
  UIEasyButtonWidget *this_00;
  undefined4 uVar2;
  PlantIcyCurrant *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x30] = (PlantIcyCurrant)0x0;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar2;
  uVar2 = PVZ_EOT();
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this_00 + 200) = 1;
  UIEasyButtonWidget::GetImageNormal(this_00);
  nop();
  uVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  FUN_03c22df8(extraout_x0 + 0x3b8,uVar2);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    CreateFence(this);
  }
  local_10 = this;
  std::list<PlantIcyCurrant*,std::allocator<PlantIcyCurrant*>>::push_back
            ((list<PlantIcyCurrant*,std::allocator<PlantIcyCurrant*>> *)&stIcyCurrantList,&local_10)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcyCurrant::OnRelocationComplete() */

void __thiscall PlantIcyCurrant::OnRelocationComplete(PlantIcyCurrant *this)

{
  char cVar1;
  
  cVar1 = Plant::IsOnBoardGrid(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  CreateFence(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::onEndCondition(PlantConditions) */

void __thiscall PlantIcyCurrant::onEndCondition(PlantIcyCurrant *this,int param_2)

{
  char cVar1;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if ((((cVar1 == '\0') &&
       (cVar1 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10)), cVar1 == '\0')) &&
      (_FUN_03c26c18 < *(float *)(*(long *)(this + 0x10) + 0xd8))) &&
     ((this[0x31] == (PlantIcyCurrant)0x0 &&
      (((param_2 - 1U < 2 || (param_2 == 6)) || ((param_2 - 0x15U < 2 || (param_2 == 0x1d)))))))) {
    CreateFence(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcyCurrant::onRailcartMoved(GridItemRailcart*) */

void PlantIcyCurrant::onRailcartMoved(GridItemRailcart *param_1)

{
  char cVar1;
  TPoint<int> aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  GridItem::GetGridLocation();
  cVar1 = Sexy::TPoint<int>::operator==(aTStack_18,aTStack_10);
  if (cVar1 != '\0') {
    ReleaseFence((PlantIcyCurrant *)param_1);
    CreateFence((PlantIcyCurrant *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

