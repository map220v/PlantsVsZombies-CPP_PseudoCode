// Class: PlantElectricPeel


/* PlantElectricPeel::CanApplyPlantfood() */

bool __thiscall PlantElectricPeel::CanApplyPlantfood(PlantElectricPeel *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 5;
}


/* PlantElectricPeel::PostInitializeFromPropertySheet() */

void __thiscall PlantElectricPeel::PostInitializeFromPropertySheet(PlantElectricPeel *this)

{
  *(undefined1 *)(*(long *)(this + 0x10) + 0x119) = 0;
  return;
}


/* PlantElectricPeel::CanEndPlantfood() */

byte __thiscall PlantElectricPeel::CanEndPlantfood(PlantElectricPeel *this)

{
  return (byte)this[0x2a] ^ 1;
}


/* PlantElectricPeel::GetPlantAttackRect(PlantWeapon) */

long PlantElectricPeel::GetPlantAttackRect(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  PlantFramework::GetPlantAttackRect();
  if (param_3 == 0) {
    iVar1 = FUN_04d36234(*(undefined8 *)(param_2 + 0x10));
    if (iVar1 == 2) {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
      if (iVar1 < 3) {
        iVar2 = 0;
      }
    }
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * iVar1;
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar1;
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::FindTargetAndFire(PlantWeapon) */

void PlantElectricPeel::FindTargetAndFire(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  RealObject *this;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(char *)(param_1 + 0x2a) == '\0') && (*(char *)(param_1 + 0x29) == '\0')) &&
     (cVar1 = PlantFramework::FindTargetAndFire(), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    uVar3 = PVZ_EOT();
    this = *(RealObject **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    std::string::string(asStack_10,"Play_Plant_ElectricPeel_Peel_Attack");
    RealObject::PlayPositionalSound(this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::StaticClassInit() */

void PlantElectricPeel::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantElectricPeel");
    (*pcVar2)(plVar1,asStack_10,FUN_04d36804,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricPeel::StaticGetClass() */

long * PlantElectricPeel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricPeel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectricPeel::GetClass() const */

long * PlantElectricPeel::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricPeel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectricPeel::shouldGetWaterBuff() */

void __thiscall PlantElectricPeel::shouldGetWaterBuff(PlantElectricPeel *this)

{
  SexyVector3 *pSVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  RealObject::IsOnWaterTile((RealObject *)this_00,pSVar1);
  return;
}


/* PlantElectricPeel::getLaunchDelay(bool) */

float __thiscall PlantElectricPeel::getLaunchDelay(PlantElectricPeel *this,bool param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1) {
    fVar1 = (float)ValueRange::GetRandomValue((ValueRange *)(*(long *)(this + 0x10) + 0xb4));
  }
  else {
    fVar1 = (float)ValueRange::GetRandomValue((ValueRange *)(*(long *)(this + 0x10) + 0xbc));
  }
  fVar1 = fVar1 / *(float *)(*(long *)(this + 0x10) + 0xe0);
  if (*(code **)(*(long *)this + 0xb8) == PlantFramework::GetLaunchDelayMultiplier) {
    fVar2 = (float)PlantFramework::GetLaunchDelayMultiplier();
    return fVar2 * fVar1;
  }
  fVar2 = (float)(**(code **)(*(long *)this + 0xb8))(this);
  return fVar2 * fVar1;
}


/* PlantElectricPeel::PlantElectricPeel() */

void __thiscall PlantElectricPeel::PlantElectricPeel(PlantElectricPeel *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069ad780;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* PlantElectricPeel::StaticNew() */

PlantElectricPeel * PlantElectricPeel::StaticNew(void)

{
  PlantElectricPeel *this;
  
  this = ::operator_new(0x38);
  PlantElectricPeel(this);
  return this;
}


/* PlantElectricPeel::~PlantElectricPeel() */

void __thiscall PlantElectricPeel::~PlantElectricPeel(PlantElectricPeel *this)

{
  *(undefined ***)this = &PTR_GetClass_069ad780;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantElectricPeel::~PlantElectricPeel() */

void __thiscall PlantElectricPeel::~PlantElectricPeel(PlantElectricPeel *this)

{
  ~PlantElectricPeel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::CancelPlantfood() */

void __thiscall PlantElectricPeel::CancelPlantfood(PlantElectricPeel *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  float fVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  if (pPVar1 != (PopAnimRig *)0x0) {
    std::string::string(asStack_40,"attack_plantfood");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)pPVar1,1);
  }
  this[0x28] = (PlantElectricPeel)0x0;
  this[0x29] = (PlantElectricPeel)0x0;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)getLaunchDelay(this,false);
  *(float *)(this + 0x2c) = fVar3 + fVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::OnProjectileReturned(PeelProjectile*, bool) */

void __thiscall
PlantElectricPeel::OnProjectileReturned
          (PlantElectricPeel *this,PeelProjectile *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  PopAnimRig *pPVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0x29] = (PlantElectricPeel)0x0;
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_T();
  fVar8 = (float)getLaunchDelay(this,false);
  pcVar6 = *(code **)(*(long *)this + 0x180);
  *(float *)(this + 0x2c) = fVar8 + fVar7;
  cVar1 = (*pcVar6)(this);
  if (cVar1 == '\0') {
    if ((param_2) && (this[0x28] == (PlantElectricPeel)0x0)) {
      uVar3 = FUN_04d361d0(*(undefined8 *)(param_1 + 0xe0));
      bVar2 = TestFlag<DamageTypeFlags>(uVar3,0x2000);
      if (!bVar2) {
        pPVar4 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        if (pPVar4 != (PopAnimRig *)0x0) {
          std::string::string(asStack_40,"attack2_end");
          Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
          PopAnimRig::PlayAndStop(pPVar4,asStack_40,0,aDStack_38);
          std::string::~string(asStack_40);
          nop();
          PlantAnimRig::SetState((PlantAnimRig *)pPVar4,1);
        }
        goto LAB_04d37b34;
      }
    }
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x118))();
    }
  }
LAB_04d37b34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricPeel::Initialize() */

void __thiscall PlantElectricPeel::Initialize(PlantElectricPeel *this)

{
  undefined4 uVar1;
  RtObject *this_00;
  PlantAnimRig_ElectricPeel *pPVar2;
  float fVar3;
  float fVar4;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantElectricPeel)0x0;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x30));
  this[0x29] = (PlantElectricPeel)0x0;
  this[0x2a] = (PlantElectricPeel)0x0;
  fVar3 = (float)PVZ_T();
  fVar4 = (float)getLaunchDelay(this,true);
  *(float *)(this + 0x2c) = fVar4 + fVar3;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  if ((this_00 != (RtObject *)0x0) &&
     (pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_ElectricPeel>(this_00),
     pPVar2 != (PlantAnimRig_ElectricPeel *)0x0)) {
    uVar1 = shouldGetWaterBuff(this);
    FUN_04d3625c(pPVar2 + 0x3b8,uVar1);
    return;
  }
  return;
}


/* PlantElectricPeel::UpdateActions() */

void __thiscall PlantElectricPeel::UpdateActions(PlantElectricPeel *this)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *this_00;
  PlantAnimRig_ElectricPeel *pPVar3;
  code *pcVar4;
  float fVar5;
  
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  if ((this_00 != (RtObject *)0x0) &&
     (pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_ElectricPeel>(this_00),
     pPVar3 != (PlantAnimRig_ElectricPeel *)0x0)) {
    uVar2 = shouldGetWaterBuff(this);
    FUN_04d3625c(pPVar3 + 0x3b8,uVar2);
  }
  pcVar4 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  if (pcVar4 == Plant::IsInPlantFoodState) {
    cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    cVar1 = (*pcVar4)();
  }
  if (((cVar1 == '\0') && (fVar5 = (float)PVZ_T(), *(float *)(this + 0x2c) <= fVar5)) &&
     (this[0x29] == (PlantElectricPeel)0x0)) {
    (**(code **)(*(long *)this + 0x150))(this,0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::FindTargetZombieInRow(int, PlantWeapon, int*, PlantTargetParams&,
   Sexy::TRect<int>) */

void PlantElectricPeel::FindTargetZombieInRow
               (RtWeakPtr<Sexy::SoundResource> *param_1,long *param_2,int param_3,undefined4 param_4
               ,int *param_5,long param_6,Insets *param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar5;
  float *pfVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  undefined4 local_34;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  pcVar8 = *(code **)(*(long *)param_2[2] + 0x1f8);
  local_8 = ___stack_chk_guard;
  if (pcVar8 == Plant::IsInPlantFoodState) {
    cVar2 = Plant::IsInPlantFoodState((Plant *)param_2[2]);
  }
  else {
    cVar2 = (*pcVar8)();
  }
  if (cVar2 == '\0') {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_30);
    cVar2 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),param_3);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)a_Stack_30);
    }
    else {
      if (param_5 != (int *)0x0) {
        *param_5 = 0;
      }
      uVar10 = 0;
      iVar9 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      EntityFinder::GetEntitiesTouchingRectangle
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                 param_7,param_3,param_3);
      uVar5 = local_20;
      lVar4 = FUN_04d36274(local_20,local_18);
      if (lVar4 != 0) {
        do {
          FUN_04d36280(uVar5,uVar10);
          nop();
          uVar5 = operator|(1,4);
          uVar5 = operator|(uVar5,0x80);
          uVar5 = operator|(uVar5,0x200);
          uVar5 = operator|(uVar5,0x800);
          local_34 = operator|(uVar5,0x2000);
          if (*(int *)(param_6 + 4) == 0) {
            operator|=(&local_34,8);
          }
          cVar2 = Zombie::MatchesAny((Zombie *)this,local_34,param_2[2]);
          if ((cVar2 == '\0') &&
             ((uVar1 = *(uint *)(param_6 + 4), (uVar1 >> 2 & 1) == 0 ||
              (cVar2 = FUN_04d375a0(*(undefined4 *)(this + 0xcc)), cVar2 == '\0')))) {
            if ((uVar1 >> 1 & 1) != 0) {
              pfVar6 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost(this);
              fVar11 = *pfVar6;
              Plant::GetCenterPt();
              if (fVar11 <= (float)local_28[0]) goto LAB_04d391f0;
            }
            iVar3 = (**(code **)(*param_2 + 0x108))(param_2,this,param_6);
            cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_30);
            if ((iVar9 < iVar3) || (cVar2 != '\0')) {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_30,
                         (RtWeakPtrBase *)local_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
              iVar9 = iVar3;
            }
          }
LAB_04d391f0:
          uVar5 = local_20;
          uVar10 = uVar10 + 1;
          uVar7 = FUN_04d36274(local_20,local_18);
        } while (uVar10 < uVar7);
      }
      if (param_5 != (int *)0x0) {
        *param_5 = iVar9;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)a_Stack_30);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  }
  else {
    Sexy::Insets::Insets((Insets *)&local_20,param_7);
    PlantFramework::FindTargetZombieInRow
              (param_1,param_2,param_3,param_4,param_5,param_6,(Insets *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::PlayAttackAnimation() */

void __thiscall PlantElectricPeel::PlayAttackAnimation(PlantElectricPeel *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  string *__n;
  undefined8 uVar4;
  float fVar5;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  if (pPVar2 != (PopAnimRig *)0x0) {
    fVar5 = (float)Sexy::Rand(1.0);
    __n = asStack_58;
    std::string::string(asStack_70,"attack");
    nop();
    uVar4 = *(undefined8 *)(this + 0x10);
    cVar1 = FUN_04d3623c(uVar4);
    if ((cVar1 != '\0') && (lVar3 = FUN_04d3934c(uVar4), fVar5 < *(float *)(lVar3 + 0x2e0))) {
      std::string::append(asStack_70,"attack_2",(size_t)__n);
    }
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar2,asStack_70,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    PlantAnimRig::SetState((PlantAnimRig *)pPVar2,1);
    std::string::~string(asStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::ApplyPlantfood() */

void __thiscall PlantElectricPeel::ApplyPlantfood(PlantElectricPeel *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  char *__s;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this[0x28] = (PlantElectricPeel)0x1;
  this[0x2a] = (PlantElectricPeel)0x1;
  local_8 = ___stack_chk_guard;
  Plant::StartPlantfoodState(*(Plant **)(this + 0x10));
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  if (pPVar2 != (PopAnimRig *)0x0) {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 == '\0') {
      __s = "plantfood";
    }
    else {
      __s = "plantfood_2";
    }
    std::string::string(asStack_70,__s);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar2,asStack_70,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    PlantAnimRig::SetState((PlantAnimRig *)pPVar2,4);
    std::string::~string(asStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantElectricPeel::onAnimStoppedCallback(PlantElectricPeel *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig *pPVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  if (pPVar2 != (PlantAnimRig *)0x0) {
    bVar1 = std::operator==(param_1,"attack");
    if (bVar1) {
      PlantAnimRig::SetState(pPVar2,0xe);
      std::string::string((string *)a_Stack_58,"attack2");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50)
      ;
      PopAnimRig::PlayAndContinue
                ((PopAnimRig *)pPVar2,(string *)a_Stack_58,0,(DummyInit *)aRStack_50);
      std::string::~string((string *)a_Stack_58);
      nop();
    }
    else {
      bVar1 = std::operator==(param_1,"plantfood");
      if ((bVar1) || (bVar1 = std::operator==(param_1,"plantfood_2"), bVar1)) {
        pcVar3 = *(code **)(*(long *)this + 0xb0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_58);
        (*pcVar3)(this,a_Stack_58,*(undefined1 *)(*(long *)(this + 0x10) + 0x11a),1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
        ;
        PlantAnimRig::SetState(pPVar2,0xe);
        std::string::string(asStack_68,"plantfood1");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string((string *)a_Stack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,a_Stack_58);
        PopAnimRig::PlayAndStop((PopAnimRig *)pPVar2,asStack_68,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)a_Stack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_68);
        nop();
      }
      else {
        bVar1 = std::operator==(param_1,"attack_2");
        if (bVar1) {
          (**(code **)(*(long *)pPVar2 + 0x118))(pPVar2);
          fVar4 = (float)PVZ_T();
          fVar5 = (float)getLaunchDelay(this,false);
          *(float *)(this + 0x2c) = fVar5 + fVar4;
        }
        else {
          bVar1 = std::operator==(param_1,"plantfood1");
          if (bVar1) {
            this[0x2a] = (PlantElectricPeel)0x0;
          }
        }
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
/* PlantElectricPeel::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantElectricPeel::FindTargetDamageableGridItem
               (undefined8 param_1_00,long *param_1,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  if (param_4 == 0) {
    iVar1 = FUN_04d36234(param_1[2]);
    if (iVar1 == 2) {
      iVar2 = 2;
    }
    else {
      iVar2 = 3;
      if (iVar1 < 3) {
        iVar2 = 1;
      }
    }
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + iVar2;
  }
  EntityFinder::GetEntitiesInGridSquares(avStack_38,4,param_3);
  pcVar3 = *(code **)(*param_1 + 0x510);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  (*pcVar3)(param_1_00,param_1,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::fireGiantEel() */

void __thiscall PlantElectricPeel::fireGiantEel(PlantElectricPeel *this)

{
  char cVar1;
  long lVar2;
  Projectile *this_00;
  PopAnimRig *pPVar3;
  Projectile *pPVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  GridItemConditionEntry aGStack_78 [4];
  undefined8 local_74;
  vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> avStack_68 [24];
  undefined8 local_50 [3];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_50);
  lVar2 = Plant::Fire(*(Plant **)(this + 0x10),
                      (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_50,
                      *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  if (lVar2 != 0) {
    nop();
    lVar2 = FUN_04d3934c(*(undefined8 *)(this + 0x10));
    if (lVar2 != 0) {
      fVar7 = *(float *)(lVar2 + 0x2dc);
      uVar8 = *(undefined4 *)(lVar2 + 0x2cc);
      uVar6 = *(undefined4 *)(lVar2 + 0x2d8);
      fVar5 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      FUN_05475d88((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_50,
                   lVar2 + 0x2d0);
      GiantEelProjectile::SetUpElectrification
                (uVar8,uVar6,fVar5 * fVar7,this_00,
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_50);
      std::string::~string((string *)local_50);
      cVar1 = shouldGetWaterBuff(this);
      if (cVar1 == '\0') {
        cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      }
      else {
        Projectile::GetDamageConditions();
        GridItemConditionEntry::GridItemConditionEntry(aGStack_78);
        DVec2::DVec2((DVec2 *)local_50,*(float *)(lVar2 + 0x2c4),*(float *)(lVar2 + 0x2c4));
        local_74 = local_50[0];
        std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::push_back
                  (avStack_68,(ZombieConditionEntry *)aGStack_78);
        std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::vector
                  ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)local_50,
                   (vector *)avStack_68);
        Projectile::SetDamageConditions
                  (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           local_50);
        std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
                  ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)local_50);
        std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector(avStack_68);
        cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      }
      pPVar4 = this_00;
      if (cVar1 != '\0') {
        fVar5 = (float)FUN_04d361d4(*(undefined4 *)(this_00 + 0xd8));
        FUN_04d361d8(fVar5 * 1.5,this_00 + 0xd8);
        pPVar3 = (PopAnimRig *)Projectile::GetAnimRig(this_00);
        std::string::string((string *)local_50,"electricpeel_projectile_plantfood_2");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue
                  (pPVar3,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_50
                   ,0,aDStack_38);
        std::string::~string((string *)local_50);
        nop();
      }
      goto LAB_04d3b0c8;
    }
  }
  pPVar4 = (Projectile *)0x0;
LAB_04d3b0c8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::firePeel(Sexy::SexyVector2 const&, Sexy::SexyVector3 const&) */

void PlantElectricPeel::firePeel(SexyVector2 *param_1,SexyVector3 *param_2)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  Projectile *this;
  DVec3 *this_00;
  PopAnimRig *pPVar5;
  SexyVector3 *in_x2;
  Projectile *pPVar6;
  float fVar7;
  PeelProjectile *pPVar12;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  FastCurve aFStack_78 [8];
  undefined4 local_70;
  float local_6c;
  undefined4 local_60;
  float local_5c;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(param_1 + 0x10));
  fVar8 = pfVar3[1];
  Sexy::FastCurve::SetOutRange(aFStack_78,*pfVar3,fVar8);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_60);
  lVar4 = Plant::Fire(*(Plant **)(param_1 + 0x10),
                      (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_60,
                      *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  if (lVar4 != 0) {
    nop();
    lVar4 = FUN_04d3934c(*(undefined8 *)(param_1 + 0x10));
    if (lVar4 != 0) {
      iVar2 = FUN_04d36234(*(undefined8 *)(param_1 + 0x10));
      if (iVar2 == 2) {
        fVar10 = 0.2;
      }
      else if (iVar2 < 3) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = 0.4;
      }
      this_00 = (DVec3 *)Projectile::GetVelocity(this);
      fVar7 = (float)DVec3::getLength(this_00);
      local_70 = Sexy::SexyVector3::operator*(in_x2,fVar7);
      local_6c = fVar8;
      local_60 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_70,fVar10);
      local_5c = fVar8;
      EATextSquish::Vec3::operator+=((Vec3 *)&local_70,(Vec3 *)&local_60);
      PeelProjectile::SetBoundaryPosition
                ((PeelProjectile *)this,(SexyVector2 *)aFStack_78,(SexyVector2 *)param_2);
      PeelProjectile::SetBaseVelocity((PeelProjectile *)this,(SexyVector3 *)&local_70);
      PeelProjectile::SetPauseDuration((PeelProjectile *)this,*(float *)(lVar4 + 0x2c0));
      PeelProjectile::SetSlowdown
                ((PeelProjectile *)this,*(float *)(lVar4 + 0x2b8),*(float *)(lVar4 + 700));
      fVar10 = *(float *)(lVar4 + 0x2dc);
      uVar11 = *(undefined4 *)(lVar4 + 0x2cc);
      uVar9 = *(undefined4 *)(lVar4 + 0x2d8);
      fVar8 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_1 + 0x10));
      FUN_05475d88((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_60,
                   lVar4 + 0x2d0);
      PeelProjectile::SetUpElectrification
                (uVar11,uVar9,fVar8 * fVar10,this,
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_60);
      std::string::~string((string *)&local_60);
      pPVar5 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      std::string::string((string *)&local_60,"attack_2");
      cVar1 = PopAnimRig::IsAnimStringActive(pPVar5,(string *)&local_60);
      std::string::~string((string *)&local_60);
      nop();
      if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
        pPVar12._0_4_ = *(PeelProjectile **)(lVar4 + 0x310);
        ZombieRestrictionSet::ZombieRestrictionSet
                  ((ZombieRestrictionSet *)&local_60,(ZombieRestrictionSet *)(lVar4 + 0x2e8));
        PeelProjectile::SetInLevel5Boost
                  (pPVar12._0_4_,this,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_60);
        ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)&local_60);
        param_1[0x29] = (SexyVector2)0x0;
        pPVar5 = (PopAnimRig *)Projectile::GetAnimRig(this);
        std::string::string((string *)&local_60,"electricpeel_projectile_2");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue
                  (pPVar5,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                          &local_60,0,aDStack_38);
        std::string::~string((string *)&local_60);
        nop();
      }
      cVar1 = shouldGetWaterBuff((PlantElectricPeel *)param_1);
      pPVar6 = this;
      if (cVar1 != '\0') {
        fVar8 = (float)FUN_04d361d4(*(undefined4 *)(this + 0xd8));
        FUN_04d361d8(fVar8 * *(float *)(lVar4 + 0x2c8),this + 0xd8);
      }
      goto LAB_04d3be24;
    }
  }
  pPVar6 = (Projectile *)0x0;
LAB_04d3be24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::DoProjectileCombo() */

void __thiscall PlantElectricPeel::DoProjectileCombo(PlantElectricPeel *this)

{
  float *pfVar1;
  int *piVar2;
  int local_34;
  FastCurve aFStack_30 [8];
  Vec3 aVStack_28 [16];
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2b8))(local_18,this,0);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  local_34 = (int)(800.0 - *pfVar1);
  piVar2 = eastl::min_alt<int>(local_10,&local_34);
  local_10[0] = *piVar2;
  Sexy::FastCurve::SetOutRange(aFStack_30,(float)(local_10[0] + local_18[0]),pfVar1[1]);
  EATextSquish::Vec3::Vec3(aVStack_28,1.0,0.0,0.0);
  firePeel((SexyVector2 *)this,(SexyVector3 *)aFStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeel::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantElectricPeel::Fire
          (PlantElectricPeel *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  float *pfVar2;
  int *piVar3;
  long lVar4;
  code *pcVar5;
  int local_34;
  FastCurve aFStack_30 [8];
  Vec3 aVStack_28 [16];
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x29] == (PlantElectricPeel)0x0) {
    pcVar5 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
    if (pcVar5 == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
    }
    else {
      cVar1 = (*pcVar5)();
    }
    if (cVar1 == '\0') {
      pcVar5 = *(code **)(*(long *)this + 0x2b8);
      this[0x28] = (PlantElectricPeel)0x0;
      this[0x29] = (PlantElectricPeel)0x1;
      (*pcVar5)(local_18,this,param_4);
      pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      local_34 = (int)(800.0 - *pfVar2);
      piVar3 = eastl::min_alt<int>(local_10,&local_34);
      local_10[0] = *piVar3;
      Sexy::FastCurve::SetOutRange(aFStack_30,(float)(local_10[0] + local_18[0]),pfVar2[1]);
      EATextSquish::Vec3::Vec3(aVStack_28,1.0,0.0,0.0);
      lVar4 = firePeel((SexyVector2 *)this,(SexyVector3 *)aFStack_30);
    }
    else {
      this[0x2a] = (PlantElectricPeel)0x0;
      lVar4 = fireGiantEel(this);
      if (lVar4 != 0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      }
    }
  }
  else {
    lVar4 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}

