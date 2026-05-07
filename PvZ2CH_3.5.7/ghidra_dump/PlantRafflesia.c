// Class: PlantRafflesia


/* PlantRafflesia::PlantRafflesia() */

void __thiscall PlantRafflesia::PlantRafflesia(PlantRafflesia *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067d71f0;
  return;
}


/* PlantRafflesia::StaticNew() */

PlantRafflesia * PlantRafflesia::StaticNew(void)

{
  PlantRafflesia *this;
  
  this = ::operator_new(0x28);
  PlantRafflesia(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRafflesia::StaticClassInit() */

void PlantRafflesia::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantRafflesia");
    (*pcVar2)(plVar1,asStack_10,FUN_040bc150,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRafflesia::StaticGetClass() */

long * PlantRafflesia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantRafflesia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRafflesia::GetClass() const */

long * PlantRafflesia::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantRafflesia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRafflesia::~PlantRafflesia() */

void __thiscall PlantRafflesia::~PlantRafflesia(PlantRafflesia *this)

{
  *(undefined ***)this = &PTR_GetClass_067d71f0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantRafflesia::~PlantRafflesia() */

void __thiscall PlantRafflesia::~PlantRafflesia(PlantRafflesia *this)

{
  ~PlantRafflesia(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRafflesia::Initialize() */

void __thiscall PlantRafflesia::Initialize(PlantRafflesia *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar5 = *(long *)(this + 0x10);
  local_1c = 1.0;
  iVar1 = FUN_040bb954(lVar5);
  if (*(code **)(*(long *)this + 0x410) == PlantFramework::GetMiniLevel) {
    iVar2 = PlantFramework::GetMiniLevel((PlantFramework *)this);
  }
  else {
    iVar2 = (**(code **)(*(long *)this + 0x410))();
    lVar5 = *(long *)(this + 0x10);
  }
  if (iVar1 - iVar2 == 1) {
    lVar3 = FUN_040bcd08(lVar5);
    lVar5 = *(long *)(this + 0x10);
    fVar6 = 1.0 - *(float *)(lVar3 + 0x2b8);
  }
  else if (iVar1 - iVar2 < 2) {
    fVar6 = 1.0;
  }
  else {
    lVar3 = FUN_040bcd08(lVar5);
    lVar5 = *(long *)(this + 0x10);
    fVar6 = 1.0 - *(float *)(lVar3 + 700);
  }
  local_1c = (float)FUN_040bb94c(*(undefined4 *)(lVar5 + 0x3cc));
  local_1c = local_1c * fVar6;
  local_10[0] = 0x3c23d70a;
  pfVar4 = eastl::max_alt<float>((float *)local_10,&local_1c);
  fVar7 = *pfVar4;
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar3 = FUN_040bb984(*(undefined8 *)(lVar3 + 0x70),0);
  fVar6 = *(float *)(lVar3 + 0x20);
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  lVar3 = FUN_040bb984(*(undefined8 *)(lVar3 + 0x70),0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(lVar5 + 0xb4),fVar7 * fVar6,fVar7 * *(float *)(lVar3 + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  lVar3 = *(long *)(this + 0x10);
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar5 = FUN_040bb984(*(undefined8 *)(lVar5 + 0x70),0);
  fVar6 = *(float *)(lVar5 + 0x24);
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  lVar5 = FUN_040bb984(*(undefined8 *)(lVar5 + 0x70),0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(lVar3 + 0xbc),fVar7 * fVar6,fVar7 * *(float *)(lVar5 + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRafflesia::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantRafflesia::normalFire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
               RtMixedPtrBase *param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  Projectile *this;
  PopAnimRig *pPVar6;
  undefined8 uVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
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
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_5);
  if (cVar1 == '\0') {
    PlantFramework::FindTargetZombie((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,param_4);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)param_5,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  (**(code **)(*param_4 + 0xf8))(aRStack_38,param_4,param_7);
  DVec3::DVec3((DVec3 *)&local_28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_5);
  if (cVar1 == '\0') {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)&local_18);
      local_28 = (float)local_30;
      local_20 = 0x41c80000;
      local_24 = (float)local_2c;
    }
    else {
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_4[2]);
      local_24 = pfVar5[1];
      local_28 = *pfVar5 + 600.0;
      local_20 = 0;
    }
  }
  else {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    pcVar8 = *(code **)(*plVar3 + 0x3b0);
    lVar4 = FUN_040bcff0(param_4[2]);
    local_18 = (*pcVar8)(*(undefined4 *)(lVar4 + 0x2c0),plVar3);
    local_14 = param_2;
    local_10 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
  }
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar4 = FUN_040bb984(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(param_4[2] + 0x150));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)param_4[2];
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  fVar10 = *(float *)(lVar4 + 0x6c);
  fVar14 = *pfVar5;
  fVar13 = pfVar5[2];
  fVar12 = *(float *)(this_00 + 0xc4);
  fVar9 = *(float *)(lVar4 + 0x68);
  fVar11 = pfVar5[1];
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar4 + 8));
  this = (Projectile *)
         Board::AddProjectile
                   ((Board *)(fVar14 + fVar9 * fVar12),fVar11,fVar13 - fVar12 * fVar10,uVar7,
                    (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,param_4[2],0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar1 = Plant::GetAvatarEnable((Plant *)param_4[2]);
  if (cVar1 != '\0') {
    pPVar6 = (PopAnimRig *)Projectile::GetAnimRig(this);
    std::string::string((string *)&local_18,"purple");
    PopAnimRig::SetLayerVisibility(pPVar6,(string *)&local_18,true);
    std::string::~string((string *)&local_18);
    nop();
    pPVar6 = (PopAnimRig *)Projectile::GetAnimRig(this);
    std::string::string((string *)&local_18,"green");
  }
  else {
    pPVar6 = (PopAnimRig *)Projectile::GetAnimRig(this);
    std::string::string((string *)&local_18,"purple");
    PopAnimRig::SetLayerVisibility(pPVar6,(string *)&local_18,false);
    std::string::~string((string *)&local_18);
    nop();
    pPVar6 = (PopAnimRig *)Projectile::GetAnimRig(this);
    std::string::string((string *)&local_18,"green");
  }
  PopAnimRig::SetLayerVisibility(pPVar6,(string *)&local_18,cVar1 == '\0');
  std::string::~string((string *)&local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRafflesia::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantRafflesia::Fire
          (PlantRafflesia *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = normalFire(this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRafflesia::FindTargetZombieForRow(PlantWeapon, int) */

void PlantRafflesia::FindTargetZombieForRow
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  Zombie *this;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  float local_44;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  cVar1 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),param_4);
  if (cVar1 != '\0') {
    if (*(code **)(*param_2 + 400) == PlantFramework::GetCollisionFlags) {
      uVar2 = PlantFramework::GetCollisionFlags();
    }
    else {
      uVar2 = (**(code **)(*param_2 + 400))(param_2,param_3);
    }
    uVar6 = 0;
    local_44 = 0.0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    Sexy::Insets::Insets(aIStack_30,0,param_4,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),1);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aIStack_30);
    uVar7 = local_20;
    uVar3 = FUN_040bb96c(local_20,local_18);
    if (uVar3 != 0) {
      do {
        FUN_040bb978(uVar7,uVar6);
        nop();
        if (this != (Zombie *)0x0) {
          ToolPacketData::GetProps();
          cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aIStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
          if ((((cVar1 != '\0') && (cVar1 = Zombie::IsControlled(this), cVar1 == '\0')) &&
              (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
             ((cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0' &&
              (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_2[2]),
              cVar1 != '\0')))) {
            pcVar8 = *(code **)(*param_2 + 0x3e0);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_38);
            cVar1 = (*pcVar8)(param_2,aIStack_30,param_3);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            if (cVar1 != '\0') {
              pfVar4 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this);
              fVar9 = *pfVar4;
              lVar5 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
              if (fVar9 <= *(float *)(lVar5 + 0x10)) {
                pcVar8 = *(code **)(*(long *)this + 0x3d0);
                Plant::GetType();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_38)
                ;
                cVar1 = (*pcVar8)(this,aIStack_30,0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
                if (((cVar1 != '\0') &&
                    (cVar1 = (**(code **)(*(long *)this + 0xb8))(this,uVar2), cVar1 != '\0')) &&
                   (fVar9 = *pfVar4, local_44 < fVar9)) {
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,
                             (RtWeakPtrBase *)aIStack_30);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
                  local_44 = fVar9;
                }
              }
            }
          }
          uVar7 = local_20;
          uVar3 = FUN_040bb96c(local_20,local_18);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRafflesia::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void __thiscall
PlantRafflesia::FindTargetZombie
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
          PlantRafflesia *this,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  Zombie *this_00;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  float local_4c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  Plant aPStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  cVar1 = Board::RowCanHaveZombies
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x110));
  if (cVar1 != '\0') {
    if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
      uVar2 = PlantFramework::GetCollisionFlags();
    }
    else {
      uVar2 = (**(code **)(*(long *)this + 400))(this,param_4);
    }
    uVar6 = 0;
    Plant::GetPlantAttackRect(aPStack_30,*(undefined8 *)(this + 0x10),param_4);
    local_4c = 0.0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aPStack_30,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    uVar7 = local_20;
    uVar3 = FUN_040bb96c(local_20,local_18);
    if (uVar3 != 0) {
      do {
        FUN_040bb978(uVar7,uVar6);
        nop();
        if (this_00 != (Zombie *)0x0) {
          ToolPacketData::GetProps();
          cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          if ((((cVar1 != '\0') && (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) &&
              (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
             ((cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0' &&
              (cVar1 = RealObject::IsOnOpposingTeam
                                 ((RealObject *)this_00,*(RealObject **)(this + 0x10)),
              cVar1 != '\0')))) {
            pcVar8 = *(code **)(*(long *)this + 0x3e0);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40);
            cVar1 = (*pcVar8)(this,aRStack_38,param_4);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            if (cVar1 != '\0') {
              pfVar4 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this_00);
              fVar9 = *pfVar4;
              lVar5 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
              if (fVar9 <= *(float *)(lVar5 + 0x10)) {
                pcVar8 = *(code **)(*(long *)this_00 + 0x3d0);
                Plant::GetType();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40)
                ;
                cVar1 = (*pcVar8)(this_00,aRStack_38,0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
                if (((cVar1 != '\0') &&
                    (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar2), cVar1 != '\0'))
                   && (fVar9 = *pfVar4, local_4c < fVar9)) {
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,
                             (RtWeakPtrBase *)aRStack_38);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                  local_4c = fVar9;
                }
              }
            }
          }
          uVar7 = local_20;
          uVar3 = FUN_040bb96c(local_20,local_18);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRafflesia::queueShot(float, Sexy::SexyVector3 const&, Sexy::RtWeakPtr<BoardEntity>, int) */

void __thiscall
PlantRafflesia::queueShot
          (RafflesiaSubSystem *param_1,PlantRafflesia *this,undefined8 param_2,
          RtWeakPtrBase *param_4,undefined4 param_5)

{
  RafflesiaSubSystem *pRVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Board::GetGameSubSystem<RafflesiaSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_4);
  RafflesiaSubSystem::QueueShot(param_1,pRVar1,this,param_2,aRStack_10,param_5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRafflesia::addShot(float, int&, Sexy::SexyVector3 const&, Sexy::RtWeakPtr<BoardEntity>, int)
    */

void __thiscall
PlantRafflesia::addShot
          (float param_1,PlantRafflesia *this,int *param_2,undefined8 param_3,RtWeakPtrBase *param_5
          ,undefined4 param_6)

{
  int iVar1;
  long lVar2;
  float fVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  iVar1 = *param_2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  queueShot((PlantRafflesia *)(fVar3 + param_1 * (float)(iVar1 + 1)),this,param_3,aRStack_10,param_6
           );
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  lVar2 = ___stack_chk_guard;
  *param_2 = *param_2 + 1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRafflesia::OnAnimCommand(std::string const&, std::string const&) */

void PlantRafflesia::OnAnimCommand(string *param_1,string *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  RafflesiaSubSystem *this;
  int iVar6;
  RealObject *this_00;
  code *pcVar7;
  ulong uVar8;
  float fVar9;
  int local_34;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  DVec3 aDStack_28 [16];
  undefined4 local_18;
  float local_14;
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_2,"ball_action");
  uVar8 = (ulong)bVar2;
  if (bVar2) {
    this_00 = *(RealObject **)(param_1 + 0x10);
    std::string::string((string *)&local_18,"Play_Rafflesia_Attack");
    RealObject::PlayPositionalSound(this_00,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    local_34 = 0;
    iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
    if (0 < iVar1) {
      iVar6 = 1;
      do {
        while( true ) {
          FindTargetZombieForRow(aRStack_30,param_1,0,iVar6 + -1);
          DVec3::DVec3(aDStack_28);
          cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
          if (cVar3 == '\0') break;
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          pcVar7 = *(code **)(*plVar4 + 0x3b0);
          lVar5 = FUN_040bcff0(*(undefined8 *)(param_1 + 0x10));
          fVar9 = (float)iVar6;
          local_18 = (*pcVar7)(*(float *)(lVar5 + 0x2c0) + fVar9 * 0.15,plVar4);
          local_14 = fVar9;
          Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_28,(SexyVector3 *)&local_18);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
          addShot((PlantRafflesia *)0x3e19999a,param_1,&local_34,aDStack_28,(string *)&local_18,
                  local_34);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          bVar2 = iVar1 <= iVar6;
          iVar6 = iVar6 + 1;
          if (bVar2) goto LAB_040bf938;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        bVar2 = iVar6 < iVar1;
        iVar6 = iVar6 + 1;
      } while (bVar2);
LAB_040bf938:
      if (local_34 < iVar1) {
        do {
          EATextSquish::Vec3::Vec3((Vec3 *)&local_18,-1.0,-1.0,-1.0);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aDStack_28);
          addShot((PlantRafflesia *)0x3e19999a,param_1,&local_34,(string *)&local_18,aDStack_28,
                  local_34);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_28);
        } while (local_34 < iVar1);
      }
    }
  }
  else {
    bVar2 = std::operator==(param_2,"skill_action");
    uVar8 = (ulong)bVar2;
    if (!bVar2) {
      uVar8 = ___stack_chk_guard;
      if (local_8 == ___stack_chk_guard) {
        PlantFramework::OnAnimCommand(param_1,param_2);
        return;
      }
      goto LAB_040bfa48;
    }
    this = Board::GetGameSubSystem<RafflesiaSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    RafflesiaSubSystem::LaunchAllProjectiles(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_040bfa48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

