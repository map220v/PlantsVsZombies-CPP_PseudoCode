// Class: PlantKiwiBeast


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiBeast::StaticClassInit() */

void PlantKiwiBeast::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantKiwiBeast");
    (*pcVar2)(plVar1,asStack_10,FUN_03bfd6b4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantKiwiBeast::StaticGetClass() */

long * PlantKiwiBeast::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantKiwiBeast",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantKiwiBeast::GetClass() const */

long * PlantKiwiBeast::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantKiwiBeast",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantKiwiBeast::PlantKiwiBeast() */

void __thiscall PlantKiwiBeast::PlantKiwiBeast(PlantKiwiBeast *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06742060;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* PlantKiwiBeast::StaticNew() */

PlantKiwiBeast * PlantKiwiBeast::StaticNew(void)

{
  PlantKiwiBeast *this;
  
  this = ::operator_new(0x40);
  PlantKiwiBeast(this);
  return this;
}


/* PlantKiwiBeast::~PlantKiwiBeast() */

void __thiscall PlantKiwiBeast::~PlantKiwiBeast(PlantKiwiBeast *this)

{
  *(undefined ***)this = &PTR_GetClass_06742060;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantKiwiBeast::~PlantKiwiBeast() */

void __thiscall PlantKiwiBeast::~PlantKiwiBeast(PlantKiwiBeast *this)

{
  ~PlantKiwiBeast(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiBeast::TriggerSuperAttack() */

void __thiscall PlantKiwiBeast::TriggerSuperAttack(PlantKiwiBeast *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  KiwiBeastProps *pKVar3;
  undefined8 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_03bfb0a4(uVar4);
  if ((cVar2 != '\0') && (2 < *(int *)(this + 0x28))) {
    FUN_03bfb080(aRStack_10,uVar4);
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pKVar3 = Sexy::RtObject::Cast<KiwiBeastProps_const>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (pKVar3 != (KiwiBeastProps *)0x0) {
      fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      bVar1 = fVar5 < *(float *)(pKVar3 + 0x7a8);
      goto LAB_03bfbdc8;
    }
  }
  bVar1 = false;
LAB_03bfbdc8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantKiwiBeast::calculateNextAttack() */

void __thiscall PlantKiwiBeast::calculateNextAttack(PlantKiwiBeast *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_03bfc520(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_03bfb0d0(*(undefined8 *)(lVar1 + 0x70));
  *(float *)(this + 0x38) = fVar2 + *(float *)(lVar1 + 0x28);
  return;
}


/* PlantKiwiBeast::getDesiredGrowthLevel() */

undefined4 __thiscall PlantKiwiBeast::getDesiredGrowthLevel(PlantKiwiBeast *this)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_03bfc520(*(undefined8 *)(this + 0x10));
  uVar1 = 3;
  if ((*(float *)(this + 0x2c) <= *(float *)(lVar2 + 700)) &&
     (uVar1 = 2, *(float *)(this + 0x2c) <= *(float *)(lVar2 + 0x2b8))) {
    return *(undefined4 *)(this + 0x28);
  }
  return uVar1;
}


/* PlantKiwiBeast::getDamageRadiusProps(bool) */

long __thiscall PlantKiwiBeast::getDamageRadiusProps(PlantKiwiBeast *this,bool param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_03bfc520(*(undefined8 *)(this + 0x10));
  if (param_1) {
    return lVar2 + 0x5a8;
  }
  if (*(int *)(this + 0x28) != 2) {
    lVar1 = lVar2 + 0x4b0;
    if (*(int *)(this + 0x28) != 3) {
      lVar1 = lVar2 + 0x2c0;
    }
    return lVar1;
  }
  return lVar2 + 0x3b8;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03bfc730 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantKiwiBeast::Initialize() */

void __thiscall PlantKiwiBeast::Initialize(PlantKiwiBeast *this)

{
  BoardEntity *this_00;
  ComponentDamageTossRadius *this_01;
  ComponentDamageTossRadiusProps *pCVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"DamageRadius");
  ComponentRunner::Add<ComponentDamageTossRadius>((ComponentRunner *)this_00,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 0;
  this_01 = (ComponentDamageTossRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  pCVar1 = (ComponentDamageTossRadiusProps *)getDamageRadiusProps(this,false);
  ComponentDamageTossRadius::SetRadiusProps(this_01,pCVar1);
  this[0x3c] = (PlantKiwiBeast)0x0;
  calculateNextAttack(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantKiwiBeast::doBasicAttack() */

void __thiscall PlantKiwiBeast::doBasicAttack(PlantKiwiBeast *this)

{
  ComponentDamageTossRadius *this_00;
  ComponentDamageTossRadiusProps *pCVar1;
  ComponentConditionRadius *this_01;
  
  this_00 = (ComponentDamageTossRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  pCVar1 = (ComponentDamageTossRadiusProps *)getDamageRadiusProps(this,false);
  ComponentDamageTossRadius::SetRadiusProps(this_00,pCVar1);
  this_01 = (ComponentConditionRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  ComponentConditionRadius::beginCoolDown(this_01);
  calculateNextAttack(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiBeast::doKnockbackAttack() */

void __thiscall PlantKiwiBeast::doKnockbackAttack(PlantKiwiBeast *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ComponentDamageTossRadius *this_01;
  ComponentDamageTossRadiusProps *pCVar1;
  HintUI *pHVar2;
  ComponentConditionRadius *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  this_01 = (ComponentDamageTossRadius *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pCVar1 = (ComponentDamageTossRadiusProps *)getDamageRadiusProps(this,true);
  ComponentDamageTossRadius::SetRadiusProps(this_01,pCVar1);
  pHVar2 = (HintUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  HintUI::SetTitleImage(pHVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  this_02 = (ComponentConditionRadius *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ComponentConditionRadius::beginCoolDown(this_02);
  calculateNextAttack(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantKiwiBeast::OnAnimCommand(std::string const&, std::string const&) */

undefined1 PlantKiwiBeast::OnAnimCommand(string *param_1,string *param_2)

{
  int iVar1;
  bool bVar2;
  ComponentDamageTossRadius *this;
  long lVar3;
  ComponentConditionRadius *this_00;
  
  bVar2 = std::operator!=(param_2,"use_action");
  if (bVar2) {
    bVar2 = std::operator!=(param_2,"use_action2");
    if (bVar2) {
      return 0;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 200);
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 200);
  }
  if (iVar1 != 10) {
    if (iVar1 != 0xb) {
      return 0;
    }
    this = (ComponentDamageTossRadius *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
    lVar3 = FUN_03bfc520(*(undefined8 *)(param_1 + 0x10));
    ComponentDamageTossRadius::SetRadiusProps
              (this,(ComponentDamageTossRadiusProps *)(lVar3 + 0x6a0));
    this_00 = (ComponentConditionRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
    ComponentConditionRadius::beginCoolDown(this_00);
    return 1;
  }
  bVar2 = std::operator==(param_2,"use_action2");
  if (!bVar2) {
    doBasicAttack((PlantKiwiBeast *)param_1);
    return 1;
  }
  doKnockbackAttack((PlantKiwiBeast *)param_1);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiBeast::tryAttack() */

void __thiscall PlantKiwiBeast::tryAttack(PlantKiwiBeast *this)

{
  char cVar1;
  long *extraout_x0;
  PlantAnimRig_KiwiBeast *extraout_x0_00;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = TriggerSuperAttack(this);
  if (cVar1 == '\0') {
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    pcVar2 = *(code **)(*extraout_x0 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    (*pcVar2)(extraout_x0,aRStack_50);
  }
  else {
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_KiwiBeast::PlaySuperAttack(extraout_x0_00,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiBeast::shouldStartAttack() */

void __thiscall PlantKiwiBeast::shouldStartAttack(PlantKiwiBeast *this)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  float fVar4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  (**(code **)(*plVar3 + 0xa8))(plVar3,avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  (**(code **)(*plVar3 + 0xa0))(plVar3,avStack_20);
  cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if ((cVar2 == '\0') ||
     (cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20),
     cVar2 == '\0')) {
    fVar4 = (float)PVZ_T();
    bVar1 = *(float *)(this + 0x38) <= fVar4;
  }
  else {
    bVar1 = false;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiBeast::doAvatarAttack() */

void __thiscall PlantKiwiBeast::doAvatarAttack(PlantKiwiBeast *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  ZombieTosserSubSystem *pZVar5;
  undefined8 uVar6;
  RealObject *this_01;
  float fVar7;
  undefined4 uVar8;
  undefined8 local_88;
  undefined8 local_80;
  Insets aIStack_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03bfc520(*(undefined8 *)(this + 0x10));
  if (lVar3 != 0) {
    fVar7 = *(float *)(lVar3 + 0x7a0);
    uVar8 = *(undefined4 *)(lVar3 + 0x7a4);
    Sexy::Insets::Insets
              (aIStack_78,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
    EntityFinder::GetEntitiesInGridSquares(avStack_68,2,aIStack_78);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88)
      ;
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar4);
      if (bVar1) {
        nop();
        cVar2 = Zombie::CanBeLaunchedByPlants(this_00);
        if (cVar2 != '\0') {
          pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          uVar6 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this_00);
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)(float)(int)fVar7,uVar8,pZVar5,this_00,uVar6,
                     aRStack_50,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
    }
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_80,"Play_Plant_Bloomerange_Impact");
    RealObject::PlayPositionalSound(this_01,(string *)&local_80,0.0);
    std::string::~string((string *)&local_80);
    nop();
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiBeast::doKnockback() */

void __thiscall PlantKiwiBeast::doKnockback(PlantKiwiBeast *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RealObject *this_00;
  SexyVector3 *this_01;
  ZombieTosserSubSystem *pZVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [16];
  undefined1 auStack_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2b8))(auStack_78,this,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_68,2,auStack_78,0xffffffff,0xffffffff);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
    if (cVar2 != '\0') {
      pcVar5 = *(code **)(*(long *)this_00 + 0x3d0);
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)&local_98);
      cVar2 = (*pcVar5)(this_00,aRStack_88,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      if ((cVar2 != '\0') &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x380))(this_00,0), cVar2 != '\0')) {
        cVar2 = Zombie::IsControlled((Zombie *)this_00);
        if (cVar2 == '\0') {
          this_01 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_00);
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          uVar6 = 0;
          uVar7 = 0;
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_88,(float)iVar3 * 1.5,0.0,0.0);
          local_98 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aRStack_88);
          local_94 = uVar6;
          local_90 = uVar7;
          pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x43160000,0x3f000000,pZVar4,this_00,
                     (RtWeakPtr<Sexy::ResourceInfo> *)&local_98,aRStack_50,1);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
                    ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,0);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiBeast::setState(unsigned int) */

void __thiscall PlantKiwiBeast::setState(PlantKiwiBeast *this,uint param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 extraout_x0;
  UIEasyButtonWidget *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(uint *)(this_00 + 200) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 == 10) {
    tryAttack(this);
  }
  else if (param_1 == 0xc) {
    uVar1 = getDesiredGrowthLevel(this);
    *(undefined4 *)(this + 0x28) = uVar1;
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_KiwiBeast::PlayGrow(extraout_x0,aRStack_50,*(undefined4 *)(this + 0x28));
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    doKnockback(this);
  }
  else if (param_1 == 4) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar2 + 0x118))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantKiwiBeast::CancelPlantfood() */

void __thiscall PlantKiwiBeast::CancelPlantfood(PlantKiwiBeast *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,4);
  this[0x3c] = (PlantKiwiBeast)0x0;
  return;
}


/* PlantKiwiBeast::onAnimStoppedCallback(std::string const&) */

void PlantKiwiBeast::onAnimStoppedCallback(string *param_1)

{
  ComponentDamageTossRadius *this;
  ComponentDamageTossRadiusProps *pCVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 200);
  if (iVar2 == 0xc) {
    this = (ComponentDamageTossRadius *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
    pCVar1 = (ComponentDamageTossRadiusProps *)getDamageRadiusProps((PlantKiwiBeast *)param_1,false)
    ;
    ComponentDamageTossRadius::SetRadiusProps(this,pCVar1);
    iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 200);
  }
  if (iVar2 != 4) {
    setState((PlantKiwiBeast *)param_1,4);
    return;
  }
  return;
}


/* PlantKiwiBeast::UpdateActions() */

void __thiscall PlantKiwiBeast::UpdateActions(PlantKiwiBeast *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if ((cVar1 == '\0') && (*(int *)(*(long *)(this + 0x10) + 200) == 4)) {
    iVar2 = getDesiredGrowthLevel(this);
    if (*(int *)(this + 0x28) < iVar2) {
      setState(this,0xc);
      return;
    }
    cVar1 = shouldStartAttack(this);
    if (cVar1 != '\0') {
      setState(this,10);
      return;
    }
  }
  return;
}


/* PlantKiwiBeast::ApplyPlantfood() */

void __thiscall PlantKiwiBeast::ApplyPlantfood(PlantKiwiBeast *this)

{
  char cVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 3;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    doAvatarAttack(this);
  }
  doKnockback(this);
  setState(this,0xb);
  return;
}


/* PlantKiwiBeast::NotifyComponentOwner() */

void __thiscall PlantKiwiBeast::NotifyComponentOwner(PlantKiwiBeast *this)

{
  if (this[0x3c] == (PlantKiwiBeast)0x0) {
    MessageRouter::Post<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::NotifyPlantfoodRelease,
               *(Plant **)(this + 0x10));
    this[0x3c] = (PlantKiwiBeast)0x1;
  }
  return;
}


/* PlantKiwiBeast::TakeDamage(DamageInfo const&) */

DamageInfo * PlantKiwiBeast::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(in_x1 + 8);
  DamageInfo::DamageInfo(in_x8,in_x1);
  return in_x8;
}

