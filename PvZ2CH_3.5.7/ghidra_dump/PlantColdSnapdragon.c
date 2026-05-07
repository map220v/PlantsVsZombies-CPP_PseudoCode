// Class: PlantColdSnapdragon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantColdSnapdragon::StaticClassInit() */

void PlantColdSnapdragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantColdSnapdragon");
    (*pcVar2)(plVar1,asStack_10,FUN_04230444,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantColdSnapdragon::StaticGetClass() */

long * PlantColdSnapdragon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantColdSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantColdSnapdragon::GetClass() const */

long * PlantColdSnapdragon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantColdSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantColdSnapdragon::PlantColdSnapdragon() */

void __thiscall PlantColdSnapdragon::PlantColdSnapdragon(PlantColdSnapdragon *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06810e60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantColdSnapdragon::StaticNew() */

PlantColdSnapdragon * PlantColdSnapdragon::StaticNew(void)

{
  PlantColdSnapdragon *this;
  
  this = ::operator_new(0x30);
  PlantColdSnapdragon(this);
  return this;
}


/* PlantColdSnapdragon::~PlantColdSnapdragon() */

void __thiscall PlantColdSnapdragon::~PlantColdSnapdragon(PlantColdSnapdragon *this)

{
  *(undefined ***)this = &PTR_GetClass_06810e60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantColdSnapdragon::~PlantColdSnapdragon() */

void __thiscall PlantColdSnapdragon::~PlantColdSnapdragon(PlantColdSnapdragon *this)

{
  ~PlantColdSnapdragon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantColdSnapdragon::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantColdSnapdragon::Fire(long *param_1)

{
  char cVar1;
  RealObject *this;
  long lVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*param_1 + 0x180))();
  if (cVar1 == '\0') {
    lVar2 = param_1[2];
    fVar3 = (float)PVZ_T();
    this = (RealObject *)param_1[2];
    *(float *)(lVar2 + 0x128) = fVar3 + 0.7;
    std::string::string(asStack_10,"Play_SnapDragon");
    RealObject::PlayPositionalSound(this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* PlantColdSnapdragon::ApplyPlantfood() */

void __thiscall PlantColdSnapdragon::ApplyPlantfood(PlantColdSnapdragon *this)

{
  char cVar1;
  ComponentLinearBurst *this_00;
  long lVar2;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = (ComponentLinearBurst *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    lVar2 = FUN_0422fd44(*(undefined8 *)(this + 0x10));
    ComponentLinearBurst::SetProps(this_00,(ComponentLinearBurstProps *)(lVar2 + 0x360));
    return;
  }
  lVar2 = FUN_0422fd44(*(undefined8 *)(this + 0x10));
  ComponentLinearBurst::SetProps(this_00,(ComponentLinearBurstProps *)(lVar2 + 0x3f8));
  return;
}


/* PlantColdSnapdragon::CancelPlantfood() */

void __thiscall PlantColdSnapdragon::CancelPlantfood(PlantColdSnapdragon *this)

{
  ComponentLinearBurst *this_00;
  long lVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this_00 = (ComponentLinearBurst *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  lVar1 = FUN_0422fd44(*(undefined8 *)(this + 0x10));
  ComponentLinearBurst::SetProps(this_00,(ComponentLinearBurstProps *)(lVar1 + 0x2c8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantColdSnapdragon::createPlantfoodBuildUpEffect() */

void __thiscall PlantColdSnapdragon::createPlantfoodBuildUpEffect(PlantColdSnapdragon *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  float *pfVar4;
  Effect_PopAnim *this_00;
  PopAnim *pPVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0422fd44(*(undefined8 *)(this + 0x10));
  FUN_05475d88(asStack_20,lVar3 + 0x2b8);
  cVar1 = FUN_0547419c(asStack_20);
  if (cVar1 == '\0') {
    p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var6);
    fVar9 = *pfVar4;
    FUN_0422ec7c(aRStack_18,p_Var6);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    fVar7 = *(float *)(lVar3 + 0x9c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var6);
    fVar10 = *(float *)(lVar3 + 4);
    FUN_0422ec7c(aRStack_18,p_Var6);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    fVar8 = *(float *)(lVar3 + 0xa0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    uVar2 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(asStack_20);
    pPVar5 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,pPVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,(float)(int)(fVar9 - fVar7),(float)(int)(fVar10 - fVar8),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
    FUN_0422ec6c(this_00 + 0x1c,uVar2);
    std::string::string((string *)aRStack_18,"plantfood");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::~string(asStack_20);
  }
  else {
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04230184 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantColdSnapdragon::Initialize() */

void __thiscall PlantColdSnapdragon::Initialize(PlantColdSnapdragon *this)

{
  long lVar1;
  BoardEntity *this_00;
  ComponentLinearBurst *this_01;
  RtObject *this_02;
  PlantAnimRig_ColdSnapdragon *pPVar2;
  PlantAnimRig *this_03;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = FUN_0422fd44(*(undefined8 *)(this + 0x10));
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"BreathBurst");
  ComponentRunner::Add<ComponentLinearBurst>((ComponentRunner *)this_00,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_01 = (ComponentLinearBurst *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  ComponentLinearBurst::SetProps(this_01,(ComponentLinearBurstProps *)(lVar1 + 0x2c8));
  this_02 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_ColdSnapdragon>(this_02);
  if (pPVar2 != (PlantAnimRig_ColdSnapdragon *)0x0) {
    *(undefined4 *)(pPVar2 + 0x3b8) = *(undefined4 *)(lVar1 + 0x2c0);
  }
  this_03 = (PlantAnimRig *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  uVar3 = *(undefined8 *)(this + 0x10);
  FUN_0422eca0(uVar3);
  PlantAnimRig::SetPlantLevel(this_03,(int)uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantColdSnapdragon::FindTargetAndFire(PlantWeapon) */

void PlantColdSnapdragon::FindTargetAndFire(PlantFramework *param_1)

{
  char cVar1;
  int iVar2;
  ComponentLinearBurst *pCVar3;
  RtObject *this;
  PlantAnimRig_ColdSnapdragon *pPVar4;
  PlantAnimRig_ColdSnapdragon PVar5;
  code *pcVar6;
  float fVar7;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  pCVar3 = (ComponentLinearBurst *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  ComponentLinearBurst::GetZombiesInArea(pCVar3,(vector *)avStack_80);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  pCVar3 = (ComponentLinearBurst *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  ComponentLinearBurst::GetGridItemsInArea(pCVar3,(vector *)avStack_68);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (((cVar1 == '\0') ||
      (cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                         ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68),
      cVar1 == '\0')) && (cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1), cVar1 == '\0'))
  {
    this = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_ColdSnapdragon>(this);
    PVar5 = pPVar4[0x3bc];
    if (PVar5 == (PlantAnimRig_ColdSnapdragon)0x0) {
      iVar2 = FUN_0422eca0(*(undefined8 *)(param_1 + 0x10));
      if ((iVar2 != 5) ||
         (fVar7 = (float)PlantFramework::Rand(param_1,1.0), *(float *)(pPVar4 + 0x3b8) <= fVar7)) {
        PVar5 = (PlantAnimRig_ColdSnapdragon)0x1;
        (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
      }
      else {
        PVar5 = (PlantAnimRig_ColdSnapdragon)0x1;
        pcVar6 = *(code **)(*(long *)pPVar4 + 600);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar6)(pPVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
  }
  else {
    PVar5 = (PlantAnimRig_ColdSnapdragon)0x0;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantColdSnapdragon::OnAnimCommand(std::string const&, std::string const&) */

void PlantColdSnapdragon::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this;
  PlantAnimRig_ColdSnapdragon *pPVar4;
  ComponentLinearBurst *pCVar5;
  ColdSnapdragonFlyDragon *this_00;
  long lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  undefined8 local_78;
  undefined4 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  uVar3 = 0;
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar2 == '\0') {
      this = (RtObject *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_ColdSnapdragon>(this);
      if ((pPVar4 == (PlantAnimRig_ColdSnapdragon *)0x0) ||
         (pPVar4[0x3bc] == (PlantAnimRig_ColdSnapdragon)0x0)) {
        pCVar5 = (ComponentLinearBurst *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
        ComponentLinearBurst::StartPulse(pCVar5);
        uVar3 = 1;
      }
      else {
        this_00 = GameObject::Create<ColdSnapdragonFlyDragon>();
        if (this_00 != (ColdSnapdragonFlyDragon *)0x0) {
          Plant::GetProps();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
          FUN_0422ed60(*(undefined8 *)(lVar6 + 0x70));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
          ColdSnapdragonFlyDragon::initializeRenderEffect(this_00,local_60);
          pcVar8 = *(code **)(*(long *)this_00 + 0x78);
          puVar7 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   **)(param_1 + 0x10));
          local_78 = *puVar7;
          local_70 = *(undefined4 *)(puVar7 + 1);
          (*pcVar8)(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_78);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)aRStack_80);
          TwinsAssistPerson::SetOwner
                    ((TwinsAssistPerson *)this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_78);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
        (**(code **)(*(long *)param_1 + 0x4a8))(param_1);
        pPVar4[0x3bc] = (PlantAnimRig_ColdSnapdragon)0x0;
        pCVar5 = (ComponentLinearBurst *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
        ComponentLinearBurst::StartPulse(pCVar5);
        uVar3 = 1;
      }
    }
    else {
      createPlantfoodBuildUpEffect((PlantColdSnapdragon *)param_1);
      pCVar5 = (ComponentLinearBurst *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
      ComponentLinearBurst::StartPulse(pCVar5);
      uVar3 = 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantColdSnapdragon::freezeAllZombie() */

void __thiscall PlantColdSnapdragon::freezeAllZombie(PlantColdSnapdragon *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  RealObject *this_00;
  Zombie *this_01;
  RtObject *this_02;
  int extraout_w1;
  int iVar7;
  int extraout_w1_00;
  int extraout_w1_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_d8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_d0 [32];
  DamageInfoProps aDStack_b0 [72];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
    uVar3 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar3 = (**(code **)(*(long *)this + 400))(this,0);
  }
  lVar4 = FUN_0422fd44(*(undefined8 *)(this + 0x10));
  DamageInfoProps::DamageInfoProps(aDStack_b0,(DamageInfoProps *)(lVar4 + 0x490));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_d0,(RtWeakPtrBase *)aRStack_d8);
  DamageInfoProps::BuildDamageInfo(aDStack_68,aDStack_b0,aRStack_d0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_d8);
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aRStack_d0,uVar5,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_d0);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_d0);
      uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aRStack_d0,uVar5,0x2f);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_d0), bVar1
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_d0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_e0,(RtWeakPtrBase *)aRStack_d8);
        Sexy::RtId::~RtId((RtId *)aRStack_d8);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_e0);
        if (bVar1) {
          this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
          bVar1 = Sexy::RtObject::IsA<GridItemFlame>(this_02);
          if (bVar1) {
            plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
            (**(code **)(*plVar6 + 0x110))(plVar6,aDStack_68);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_d0,extraout_w1_01);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_d0);
      DamageInfo::~DamageInfo(aDStack_68);
      DamageInfoProps::~DamageInfoProps(aDStack_b0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_d0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_e0,(RtWeakPtrBase *)aRStack_d8);
    Sexy::RtId::~RtId((RtId *)aRStack_d8);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
    cVar2 = (**(code **)(*plVar6 + 0x328))();
    if (cVar2 == '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
      cVar2 = (**(code **)(*plVar6 + 0xb8))(plVar6,uVar3);
      if (cVar2 == '\0') goto LAB_04230e68;
      this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
      cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
      if (cVar2 == '\0') goto LAB_04230e68;
      this_01 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
      cVar2 = Zombie::IsInvisible(this_01);
      if (cVar2 != '\0') goto LAB_04230e68;
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
      (**(code **)(*plVar6 + 0x110))(plVar6,aDStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
      iVar7 = extraout_w1_00;
    }
    else {
LAB_04230e68:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
      iVar7 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_d0,iVar7);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantColdSnapdragon::OnTakeDamageDoneWithComponent() */

void __thiscall PlantColdSnapdragon::OnTakeDamageDoneWithComponent(PlantColdSnapdragon *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 != '\0')) {
    uVar3 = Effect_ScreenFade::Create();
    if (((DAT_06af4210 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af4210), iVar2 != 0)) {
      Sexy::Insets::Insets((Insets *)&DAT_06af41a8,0x46,0xb4,0xfa,100);
      __cxa_guard_release(&DAT_06af4210);
    }
    if (((DAT_06af41c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af41c0), iVar2 != 0)) {
      Sexy::Insets::Insets((Insets *)&DAT_06af41f8,0xff,0xff,0xff,200);
      __cxa_guard_release(&DAT_06af41c0);
    }
    Sexy::Insets::Insets(aIStack_18,(Insets *)&DAT_06af41a8);
    Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f333333,0,0x3f800000,uVar3,1,aIStack_18,2);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&DAT_06af41f8);
    Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,uVar3,0,aIStack_18,2);
    freezeAllZombie(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

