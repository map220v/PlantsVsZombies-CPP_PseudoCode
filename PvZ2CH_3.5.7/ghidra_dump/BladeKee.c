// Class: BladeKee


/* BladeKee::onTakePowerEndAnimDone(std::string const&) */

void BladeKee::onTakePowerEndAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BladeKee::StaticClassInit() */

void BladeKee::StaticClassInit(void)

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
    std::string::string(asStack_10,"BladeKee");
    (*pcVar2)(plVar1,asStack_10,FUN_03b77f34,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BladeKee::StaticGetClass() */

long * BladeKee::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"BladeKee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BladeKee::GetClass() const */

long * BladeKee::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"BladeKee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BladeKee::~BladeKee() */

void __thiscall BladeKee::~BladeKee(BladeKee *this)

{
  *(undefined ***)this = &PTR_GetClass_06734240;
  *(undefined ***)(this + 0x10) = &PTR__BladeKee_06734428;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to BladeKee::~BladeKee() */

void __thiscall BladeKee::~BladeKee(BladeKee *this)

{
  ~BladeKee(this + -0x10);
  return;
}


/* BladeKee::~BladeKee() */

void __thiscall BladeKee::~BladeKee(BladeKee *this)

{
  ~BladeKee(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BladeKee::~BladeKee() */

void __thiscall BladeKee::~BladeKee(BladeKee *this)

{
  ~BladeKee(this + -0x10);
  return;
}


/* BladeKee::BladeKee() */

void __thiscall BladeKee::BladeKee(BladeKee *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06734240;
  *(undefined ***)(this + 0x10) = &PTR__BladeKee_06734428;
  *(undefined4 *)(this + 0xa4) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  this[0xb0] = (BladeKee)0x0;
  return;
}


/* BladeKee::StaticNew() */

BladeKee * BladeKee::StaticNew(void)

{
  BladeKee *this;
  
  this = ::operator_new(0xb8);
  BladeKee(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BladeKee::onDraw(Sexy::Graphics*) */

void __thiscall BladeKee::onDraw(BladeKee *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    fVar4 = *(float *)(this + 0x1c);
    fVar3 = (float)FUN_03b778d8(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
    fVar3 = (float)FUN_03b779a4(fVar3 - DAT_06acc708);
    fVar4 = (float)FUN_03b779a4(fVar4 - DAT_06acc70c);
    Sexy::Graphics::Translate(param_1,(int)fVar3,(int)fVar4);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(pPVar2,aSStack_30);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::Draw(pPVar2,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BladeKee::InitializeBladeKee(float, Sexy::SexyVector3 const&) */

void __thiscall BladeKee::InitializeBladeKee(BladeKee *this,float param_1,SexyVector3 *param_2)

{
  int iVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  code *pcVar5;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0xb0] = (BladeKee)0x0;
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  pcVar5 = *(code **)(*(long *)this + 0x78);
  *(float *)(this + 0xa4) = (float)iVar1 * param_1;
  (*pcVar5)(this,param_2);
  std::string::string(asStack_50,"POPANIM_EFFECTS_BLADE_KEE");
  GetPAMByName(asStack_50);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  std::string::string((string *)aRStack_40,"power_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BladeKee::pushPlants() */

void __thiscall BladeKee::pushPlants(BladeKee *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Plant *this_00;
  RtObject *this_01;
  PlantTurnip *this_02;
  long lVar7;
  int iVar8;
  Board *pBVar9;
  float fVar10;
  undefined4 uVar11;
  float local_98;
  undefined4 local_94;
  float local_90;
  undefined4 local_8c;
  float local_84;
  float local_80;
  undefined1 local_7c;
  int local_78;
  float local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  float local_54;
  float local_50;
  undefined1 local_4c;
  undefined4 local_48;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if (iVar4 < 0) {
LAB_03b7843c:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  bVar3 = false;
  iVar6 = iVar4;
  do {
    iVar8 = iVar6 + -1;
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    iVar5 = SharkMinion::getRow((SharkMinion *)this);
    std::string::string((string *)&local_68,"");
    this_00 = (Plant *)Board::GetPlantAt(pBVar9,iVar4,iVar5,(string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    if (this_00 == (Plant *)0x0) {
joined_r0x03b78438:
      if (iVar8 < 0) goto LAB_03b7843c;
    }
    else {
      this_01 = *(RtObject **)(this_00 + 0xa8);
      if (*(code **)(*(long *)this_01 + 0x440) != PlantFramework::stopSpecialEffect) {
        (**(code **)(*(long *)this_01 + 0x440))();
        this_01 = *(RtObject **)(this_00 + 0xa8);
      }
      bVar1 = Sexy::RtObject::IsA<PlantTurnip>(this_01);
      if (bVar3 < bVar1) {
        nop();
        PlantTurnip::DefendBladeKee(this_02);
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        Plant::GetProps();
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_98)
        ;
        local_60 = *(float *)(lVar7 + 0x24) * 0.3;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        (**(code **)(*(long *)this_00 + 0x110))(this_00,(string *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        goto joined_r0x03b78438;
      }
      cVar2 = Plant::IsIgnoreControlAndDmg(this_00);
      if (cVar2 != '\0') goto LAB_03b7843c;
      iVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      cVar2 = PlantTurnip::WhetherCanBePulled(this_00,iVar5);
      if (cVar2 == '\0') {
LAB_03b78438:
        bVar3 = true;
        goto joined_r0x03b78438;
      }
      iVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      cVar2 = PlantNightcap::WhetherCanBePushed(this_00,iVar5);
      if (cVar2 == '\0') goto LAB_03b78438;
      if (iVar4 == 0) {
        Plant::beThrown(this_00);
        goto LAB_03b7843c;
      }
      uVar11 = *(undefined4 *)(this_00 + 0x1c);
      fVar10 = (float)FUN_03b778d8(*(undefined4 *)(this_00 + 0x18),uVar11,
                                   *(undefined4 *)(this_00 + 0x20));
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      iVar5 = SharkMinion::getRow((SharkMinion *)this);
      std::string::string((string *)&local_68,"");
      lVar7 = Board::GetPlantAt(pBVar9,iVar8,iVar5,(string *)&local_68);
      std::string::~string((string *)&local_68);
      nop();
      if ((lVar7 != 0) &&
         (bVar3 = Sexy::RtObject::IsA<PlantTurnip>(*(RtObject **)(lVar7 + 0xa8)), bVar3)) {
        bVar3 = true;
        Plant::beThrown(this_00);
        goto joined_r0x03b78438;
      }
      if (iVar4 != 1) {
        pBVar9 = *(Board **)(gLawnApp + 0x9f0);
        iVar5 = SharkMinion::getRow((SharkMinion *)this);
        std::string::string((string *)&local_68,"");
        lVar7 = Board::GetPlantAt(pBVar9,iVar6 + -2,iVar5,(string *)&local_68);
        std::string::~string((string *)&local_68);
        nop();
        if ((lVar7 != 0) &&
           (bVar3 = Sexy::RtObject::IsA<PlantTurnip>(*(RtObject **)(lVar7 + 0xa8)), bVar3)) {
          RelocationEvent::RelocationEvent((RelocationEvent *)&local_98);
          local_98 = fVar10;
          local_94 = uVar11;
          local_84 = (float)PVZ_T();
          fVar10 = local_98;
          local_80 = local_84 + 1.0;
          iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
          local_78 = 1;
          local_7c = 1;
          local_90 = fVar10 - (float)iVar6;
          local_8c = local_94;
          Plant::addRelocationEvent(this_00,(RelocationEvent *)&local_98);
          RelocationEvent::RelocationEvent((RelocationEvent *)&local_68);
          local_50 = local_80 + 1.0;
          local_54 = local_80;
          local_68 = local_90;
          local_64 = local_8c;
          iVar6 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
          iVar6 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar6);
          local_60 = (float)iVar6;
          local_48 = 2;
          local_4c = 1;
          local_5c = local_64;
          Plant::addRelocationEvent(this_00,(RelocationEvent *)&local_68);
          if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
            cVar2 = Plant::IsInPlantFoodState(this_00);
          }
          else {
            cVar2 = (**(code **)(*(long *)this_00 + 0x1f8))(this_00);
          }
          if (cVar2 != '\0') {
            (**(code **)(**(long **)(this_00 + 0xa8) + 0x228))(*(long **)(this_00 + 0xa8));
          }
          goto LAB_03b78438;
        }
        bVar3 = true;
        RelocationEvent::RelocationEvent((RelocationEvent *)&local_68);
        local_68 = fVar10;
        local_64 = uVar11;
        local_54 = (float)PVZ_T();
        fVar10 = local_68;
        local_50 = local_54 + 2.0;
        iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
        local_48 = 1;
        local_4c = 1;
        local_5c = local_64;
        local_60 = fVar10 - (float)(iVar6 << 1);
        Plant::addRelocationEvent(this_00,(RelocationEvent *)&local_68);
        goto joined_r0x03b78438;
      }
      RelocationEvent::RelocationEvent((RelocationEvent *)&local_98);
      local_98 = fVar10;
      local_94 = uVar11;
      local_84 = (float)PVZ_T();
      fVar10 = local_98;
      local_80 = local_84 + 1.0;
      iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
      local_7c = 1;
      local_90 = fVar10 - (float)iVar6;
      local_8c = local_94;
      local_78 = iVar4;
      Plant::addRelocationEvent(this_00,(RelocationEvent *)&local_98);
      RelocationEvent::RelocationEvent((RelocationEvent *)&local_68);
      local_50 = local_80 + 1.0;
      local_54 = local_80;
      local_68 = local_90;
      local_64 = local_8c;
      iVar6 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
      iVar6 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar6);
      local_4c = 1;
      local_60 = (float)iVar6;
      local_48 = 2;
      local_5c = local_64;
      Plant::addRelocationEvent(this_00,(RelocationEvent *)&local_68);
      cVar2 = (**(code **)(*(long *)this_00 + 0x1f8))(this_00);
      if (cVar2 != '\0') {
        (**(code **)(**(long **)(this_00 + 0xa8) + 0x228))(*(long **)(this_00 + 0xa8));
      }
      bVar3 = true;
    }
    iVar4 = iVar4 + -1;
    iVar6 = iVar8;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BladeKee::onUpdate() */

void __thiscall BladeKee::onUpdate(BladeKee *this)

{
  RtWeakPtr *this_00;
  BladeKee BVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  PopAnimRig *pPVar7;
  Board *this_01;
  float fVar8;
  float fVar9;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar8 = (float)PVZ_T();
    fVar9 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar7,fVar8,fVar9);
    BVar1 = this[0xb0];
  }
  else {
    BVar1 = this[0xb0];
  }
  if (BVar1 == (BladeKee)0x0) {
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_60 = *puVar5;
    fVar9 = *(float *)(this + 0xa4);
    local_58 = *(undefined4 *)(puVar5 + 1);
    fVar8 = (float)PVZ_Dt();
    local_60 = CONCAT44(local_60._4_4_,(float)local_60 - fVar9 * fVar8);
    (**(code **)(*(long *)this + 0x78))(this,&local_60);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar4 = SharkMinion::getRow((SharkMinion *)this);
    std::string::string(asStack_68,"");
    lVar6 = Board::GetPlantAt(this_01,iVar3,iVar4,asStack_68);
    std::string::~string(asStack_68);
    nop();
    if (lVar6 == 0) {
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      if (iVar3 < 0) {
        pPVar7 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        std::string::string(asStack_68,"power_end");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
        std::string::string(asStack_70,"onTakePowerEndAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_78,asStack_70);
        PopAnimRig::PlayAndStop(pPVar7,asStack_68,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_70);
        nop();
        Sexy::RtId::~RtId(aRStack_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
        ;
        std::string::~string(asStack_68);
        nop();
        this[0xb0] = (BladeKee)0x1;
      }
    }
    else {
      pushPlants(this);
      std::string::string(asStack_68,"Play_Boss_Blade_Power_Defence");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
      std::string::~string(asStack_68);
      nop();
      pPVar7 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_68,"power_end");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
      std::string::string(asStack_70,"onTakePowerEndAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
                 asStack_70);
      PopAnimRig::PlayAndStop(pPVar7,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_70);
      nop();
      Sexy::RtId::~RtId(aRStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      std::string::~string(asStack_68);
      nop();
      this[0xb0] = (BladeKee)0x1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

