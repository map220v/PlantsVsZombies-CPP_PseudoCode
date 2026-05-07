// Class: PlantEMPea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEMPea::StaticClassInit() */

void PlantEMPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantEMPea");
    (*pcVar2)(plVar1,asStack_10,FUN_04031f14,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEMPea::StaticGetClass() */

long * PlantEMPea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantEMPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEMPea::GetClass() const */

long * PlantEMPea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantEMPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEMPea::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

char PlantEMPea::CanTargetZombie(long param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  Zombie *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  do {
    uVar5 = FUN_04031478(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    if (uVar5 <= uVar6) {
      return '\0';
    }
    this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04031484(*(undefined8 *)(param_1 + 0x28),uVar6);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    cVar1 = std::operator==((string *)(lVar3 + 8),(string *)(lVar4 + 8));
    uVar6 = uVar6 + 1;
  } while (cVar1 == '\0');
  return cVar1;
}


/* PlantEMPea::PlantEMPea() */

void __thiscall PlantEMPea::PlantEMPea(PlantEMPea *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b9c80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* PlantEMPea::StaticNew() */

PlantEMPea * PlantEMPea::StaticNew(void)

{
  PlantEMPea *this;
  
  this = ::operator_new(0x40);
  PlantEMPea(this);
  return this;
}


/* PlantEMPea::stunZombie(Zombie*) */

void __thiscall PlantEMPea::stunZombie(PlantEMPea *this,Zombie *param_1)

{
  long lVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  
  pcVar2 = *(code **)(*(long *)param_1 + 0x2a0);
  lVar1 = FUN_04031790(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2dc);
  fVar3 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  (*pcVar2)(fVar3 + fVar4,param_1);
  return;
}


/* PlantEMPea::setState(unsigned int) */

void __thiscall PlantEMPea::setState(PlantEMPea *this,uint param_1)

{
  long *plVar1;
  
  if ((*(uint *)(*(long *)(this + 0x10) + 200) != param_1) &&
     (*(uint *)(*(long *)(this + 0x10) + 200) = param_1, param_1 == 10)) {
    plVar1 = (long *)FUN_040318c4();
    (**(code **)(*plVar1 + 0x118))();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEMPea::startExploding() */

void __thiscall PlantEMPea::startExploding(PlantEMPea *this)

{
  long *plVar1;
  PlantAnimRig *pPVar2;
  RealObject *this_00;
  code *pcVar3;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pcVar3 = *(code **)(*plVar1 + 0x130);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  pPVar2 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar2,0xe);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_58,"Play_Plant_EMPeach_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  setState(this,0xb);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEMPea::UpdateActions() */

void __thiscall PlantEMPea::UpdateActions(PlantEMPea *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  UIEasyButtonWidget *this_00;
  long lVar4;
  PopAnimRig *this_01;
  int iVar5;
  UnchartedModePlantNumData aUStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar5 = *(int *)(this_00 + 200);
  do {
    if (iVar5 == 10) {
      lVar4 = FUN_04031790();
      if (*(char *)(lVar4 + 0x2d1) != '\0') {
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
        goto LAB_04031a84;
      }
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_18,1,0);
      (**(code **)(*(long *)this + 0xe0))
                (aRStack_10,this,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0,0,aUStack_18);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar3 != '\0') {
        startExploding(this);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      iVar1 = *(int *)(this_00 + 200);
    }
    else {
      if (iVar5 != 0xb) break;
      this_01 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      cVar3 = PopAnimRig::IsPlayingAnything(this_01);
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      if (cVar3 == '\0') {
        Plant::KillPlant((Plant *)this_00,1,0,0x8000000000);
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      }
LAB_04031a84:
      iVar1 = *(int *)(this_00 + 200);
    }
    bVar2 = iVar5 != iVar1;
    iVar5 = iVar1;
  } while (bVar2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEMPea::fire() */

void __thiscall PlantEMPea::fire(PlantEMPea *this)

{
  char cVar1;
  long lVar2;
  RealObject *this_00;
  ulong uVar3;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  float *pfVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  string asStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  lVar2 = FUN_04031790(*(undefined8 *)(this + 0x10));
  lVar8 = *(long *)(this + 0x10);
  uVar15 = *(undefined4 *)(lVar2 + 0x2d4);
  uVar13 = *(undefined4 *)(lVar8 + 0x1c);
  local_30 = FUN_040314a0(*(undefined4 *)(lVar8 + 0x18),uVar13,*(undefined4 *)(lVar8 + 0x20));
  local_2c = uVar13;
  EntityFinder::GetEntitiesWithinCircle2D
            (uVar15,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (RtWeakPtr *)&local_30);
  uVar9 = local_20;
  lVar2 = FUN_0403148c(local_20,local_18);
  if (lVar2 != 0) {
    do {
      FUN_04031498(uVar9,uVar10);
      nop();
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
      if ((cVar1 == '\0') &&
         (cVar1 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10)), cVar1 != '\0'
         )) {
        uVar3 = 0;
        do {
          uVar9 = *(undefined8 *)(this + 0x28);
          uVar7 = FUN_04031478(uVar9,*(undefined8 *)(this + 0x30));
          if (uVar7 <= uVar3) goto LAB_04031bf8;
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04031484(uVar9,uVar3);
          lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_00);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          cVar1 = std::operator==((string *)(lVar2 + 8),(string *)(lVar8 + 8));
          uVar3 = uVar3 + 1;
        } while (cVar1 == '\0');
        stunZombie(this,(Zombie *)this_00);
      }
LAB_04031bf8:
      uVar9 = local_20;
      uVar10 = uVar10 + 1;
      uVar3 = FUN_0403148c(local_20,local_18);
    } while (uVar10 < uVar3);
  }
  uVar13 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_EMPEACH_BLAST");
  GetPAMByName(asStack_38);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  std::string::~string(asStack_38);
  nop();
  p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var11);
  fVar16 = *pfVar5;
  FUN_04031440(aRStack_40,p_Var11);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  fVar12 = *(float *)(lVar2 + 0x9c);
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var11);
  fVar14 = *(float *)(lVar2 + 4);
  fVar17 = *(float *)(lVar2 + 8);
  FUN_04031440(asStack_38,p_Var11);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_30,fVar16 - fVar12,(fVar14 - fVar17) - *(float *)(lVar2 + 0xa0),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_30,-1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  FUN_04031438(this_01 + 0x1c,uVar13);
  std::string::string((string *)&local_30,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr *)&local_30,0);
  std::string::~string((string *)&local_30);
  nop();
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantEMPea::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantEMPea::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (!bVar1) {
    uVar2 = PlantFramework::OnAnimCommand(param_1,param_2);
    return uVar2;
  }
  fire((PlantEMPea *)param_1);
  return 1;
}


/* PlantEMPea::~PlantEMPea() */

void __thiscall PlantEMPea::~PlantEMPea(PlantEMPea *this)

{
  *(undefined ***)this = &PTR_GetClass_067b9c80;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantEMPea::~PlantEMPea() */

void __thiscall PlantEMPea::~PlantEMPea(PlantEMPea *this)

{
  ~PlantEMPea(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEMPea::Initialize() */

void __thiscall PlantEMPea::Initialize(PlantEMPea *this)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  string *psVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_04031790(*(undefined8 *)(this + 0x10));
  for (uVar7 = 0;
      uVar3 = FUN_04031464(*(undefined8 *)(lVar2 + 0x2b8),*(undefined8 *)(lVar2 + 0x2c0)),
      uVar7 < uVar3; uVar7 = uVar7 + 1) {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_04031470(*(undefined8 *)(lVar2 + 0x2b8),uVar7);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 != '\0') {
      std::
      vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
      push_back((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                 *)(this + 0x28),(RtWeakPtr *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  lVar6 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar6 + 200) = 10;
  plVar5 = (long *)FUN_040318c4(lVar6);
  (**(code **)(*plVar5 + 0x118))();
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') && (*(char *)(lVar2 + 0x2d0) != '\0')) {
    startExploding(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

