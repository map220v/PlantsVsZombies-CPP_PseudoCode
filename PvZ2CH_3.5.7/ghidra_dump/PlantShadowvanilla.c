// Class: PlantShadowvanilla


/* PlantShadowvanilla::IsBoosted() */

void __thiscall PlantShadowvanilla::IsBoosted(PlantShadowvanilla *this)

{
  Plant::HasCondition(*(undefined8 *)(this + 0x10),0x13);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowvanilla::StaticClassInit() */

void PlantShadowvanilla::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantShadowvanilla");
    (*pcVar2)(plVar1,asStack_10,FUN_04cde9c8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowvanilla::StaticGetClass() */

long * PlantShadowvanilla::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowvanilla",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowvanilla::GetClass() const */

long * PlantShadowvanilla::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowvanilla",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowvanilla::PlantShadowvanilla() */

void __thiscall PlantShadowvanilla::PlantShadowvanilla(PlantShadowvanilla *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (PlantShadowvanilla)0x0;
  *(undefined ***)this = &PTR_GetClass_069a0580;
  return;
}


/* PlantShadowvanilla::StaticNew() */

PlantShadowvanilla * PlantShadowvanilla::StaticNew(void)

{
  PlantShadowvanilla *this;
  
  this = ::operator_new(0x30);
  PlantShadowvanilla(this);
  return this;
}


/* PlantShadowvanilla::~PlantShadowvanilla() */

void __thiscall PlantShadowvanilla::~PlantShadowvanilla(PlantShadowvanilla *this)

{
  *(undefined ***)this = &PTR_GetClass_069a0580;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantShadowvanilla::~PlantShadowvanilla() */

void __thiscall PlantShadowvanilla::~PlantShadowvanilla(PlantShadowvanilla *this)

{
  ~PlantShadowvanilla(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowvanilla::LaunchShadowSecondPlantfood() */

void PlantShadowvanilla::LaunchShadowSecondPlantfood(void)

{
  long *in_x0;
  long lVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_s1;
  float fVar7;
  float in_s2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  lVar1 = FUN_04cde33c(*(undefined8 *)(lVar1 + 0x70),3);
  fVar4 = (float)(**(code **)(*in_x0 + 0x110))(0x3f800000);
  local_18 = fVar4;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)in_x0[2]);
  fVar5 = *pfVar2;
  fVar7 = pfVar2[1];
  lVar3 = *(long *)(gLawnApp + 0x9f0);
  fVar6 = 0.0;
  if (*(char *)(lVar3 + 0x119) != '\0') {
    fVar6 = (float)Board::calculateRoofOffsetZ(fVar4 + fVar5);
    lVar3 = *(long *)(gLawnApp + 0x9f0);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar1 + 8));
  Board::AddProjectile
            ((Board *)(fVar4 + fVar5),in_s1 + fVar7,fVar6 + in_s2,lVar3,aRStack_20,in_x0[2],0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowvanilla::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantShadowvanilla::Fire
               (undefined1 param_1 [16],float param_2,float param_3,PlantShadowvanilla *param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  Projectile *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  float local_38;
  float local_34;
  float local_30;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::FindTarget(aRStack_48,*(undefined8 *)(param_4 + 0x10),param_7);
  Plant::GetProps();
  cVar1 = IsBoosted(param_4);
  if (cVar1 == '\0') {
    cVar1 = '\x01';
    uVar5 = 0;
  }
  else if (*(int *)(param_4 + 0x28) < 3) {
    uVar5 = 1;
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + 1;
  }
  else {
    *(undefined4 *)(param_4 + 0x28) = 0;
    cVar1 = '\0';
    uVar5 = 5;
  }
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  lVar3 = FUN_04cde33c(*(undefined8 *)(lVar3 + 0x70),uVar5);
  fVar7 = (float)(**(code **)(*(long *)param_4 + 0x110))(0x3f800000,param_4,lVar3);
  local_38 = fVar7;
  local_34 = param_2;
  local_30 = param_3;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(param_4 + 0x10));
  fVar8 = *pfVar4;
  fVar10 = pfVar4[1];
  lVar6 = *(long *)(gLawnApp + 0x9f0);
  fVar9 = 0.0;
  if (*(char *)(lVar6 + 0x119) != '\0') {
    fVar9 = (float)Board::calculateRoofOffsetZ(fVar7 + fVar8);
    lVar6 = *(long *)(gLawnApp + 0x9f0);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar3 + 8));
  this = (Projectile *)
         Board::AddProjectile
                   ((Board *)(fVar7 + fVar8),param_2 + fVar10,fVar9 + param_3,lVar6,
                    (RtWeakPtr<Sexy::SoundResource> *)&local_18,*(undefined8 *)(param_4 + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if ((this != (Projectile *)0x0) && (cVar1 != '\0')) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
    if (bVar2) {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      this_01 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_00);
      uVar11 = 0xc2200000;
      uVar12 = 0;
      EATextSquish::Vec3::Vec3(aVStack_28,0.0,-40.0,0.0);
      local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
      local_14 = uVar11;
      local_10 = uVar12;
      Projectile::LaunchAt(this,(SexyVector3 *)&local_18,150.0,1.0);
    }
    else {
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,*pfVar4 + 600.0,pfVar4[1],0.0);
      Projectile::LaunchAt(this,(SexyVector3 *)&local_18,150.0,1.0);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowvanilla::UpdateBoostLayer(bool) */

void __thiscall PlantShadowvanilla::UpdateBoostLayer(PlantShadowvanilla *this,bool param_1)

{
  long lVar1;
  PopAnimRig *this_00;
  undefined **ppuVar2;
  string asStack_10 [8];
  long local_8;
  undefined **ppuVar3;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x2c] != (PlantShadowvanilla)param_1) &&
     (lVar1 = UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10)), lVar1 != 0)
     ) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    this[0x2c] = (PlantShadowvanilla)param_1;
    ppuVar2 = &PTR_s_vanilla_mouth_1_dark_06a88f00;
    do {
      ppuVar3 = ppuVar2 + 1;
      std::string::string(asStack_10,*ppuVar2);
      PopAnimRig::SetLayerVisibility(this_00,asStack_10,param_1);
      std::string::~string(asStack_10);
      nop();
      ppuVar2 = ppuVar3;
    } while (ppuVar3 != (undefined **)0x6a88f98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowvanilla::ApplyPlantfood() */

void __thiscall PlantShadowvanilla::ApplyPlantfood(PlantShadowvanilla *this)

{
  bool bVar1;
  
  bVar1 = (bool)IsBoosted(this);
  UpdateBoostLayer(this,bVar1);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantShadowvanilla::UpdateActions() */

void __thiscall PlantShadowvanilla::UpdateActions(PlantShadowvanilla *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = (bool)IsBoosted(this);
  if (bVar1 == false) {
    *(undefined4 *)(this + 0x28) = 0;
  }
  lVar3 = UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar2 = FUN_04cde2c8(*(undefined4 *)(lVar3 + 0x218));
  if ((iVar2 != 0xd) && (iVar2 != 1)) {
    return;
  }
  UpdateBoostLayer(this,bVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowvanilla::LaunchShadowHurricane() */

void PlantShadowvanilla::LaunchShadowHurricane(void)

{
  char cVar1;
  long *in_x0;
  long lVar2;
  undefined8 uVar3;
  RtObject *this;
  ShadowVanillaHurricaneProjectile *pSVar4;
  ulong uVar5;
  Point *pPVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float in_s1;
  float fVar11;
  ulong in_d2;
  Board *pBVar13;
  float fVar12;
  int local_50;
  int local_4c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  int local_40;
  int local_3c;
  Point aPStack_38 [8];
  float local_30;
  float local_2c;
  float local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = -1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  BoardEntity::CalcGridPosition();
  do {
    Sexy::Point::Point(aPStack_38,local_50 + 1,iVar7 + local_4c);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)aPStack_38);
    cVar1 = CheckGridValid((Point *)&local_30);
    if (cVar1 != '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,aPStack_38);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 2);
  uVar8 = 0;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  lVar2 = FUN_04cde33c(*(undefined8 *)(lVar2 + 0x70),6);
  uVar3 = FUN_04cde34c(local_20,local_18);
  Sexy::OutputDebugStrF((wchar_t *)"LaunchShadowHurricane hurricane num is %d",uVar3);
  while( true ) {
    uVar3 = local_20;
    fVar11 = (float)in_d2;
    uVar5 = FUN_04cde34c(local_20,local_18);
    if (uVar5 <= uVar8) break;
    pPVar6 = (Point *)FUN_04cde358(uVar3,uVar8);
    BoardTransforms::GridToBoardSpace(pPVar6);
    local_30 = (float)(**(code **)(*in_x0 + 0x110))(0x3f800000);
    lVar9 = *(long *)(gLawnApp + 0x9f0);
    pBVar13._0_4_ = (Board *)((float)local_40 + local_30);
    fVar12 = (float)local_3c + in_s1;
    fVar10 = 0.0;
    local_2c = in_s1;
    local_28 = fVar11;
    if (*(char *)(lVar9 + 0x119) != '\0') {
      fVar10 = (float)Board::calculateRoofOffsetZ((float)pBVar13._0_4_);
      lVar9 = *(long *)(gLawnApp + 0x9f0);
    }
    in_d2 = (ulong)(uint)(fVar10 + fVar11);
    uVar8 = uVar8 + 1;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aPStack_38,(RtWeakPtrBase *)(lVar2 + 8));
    this = (RtObject *)Board::AddProjectile(pBVar13._0_4_,lVar9,aPStack_38,in_x0[2],0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_38);
    pSVar4 = Sexy::RtObject::Cast<ShadowVanillaHurricaneProjectile>(this);
    FUN_04cde4d4(pSVar4 + 0x1ad);
    in_s1 = fVar12;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowvanilla::LaunchSpecialAttack(bool, bool) */

void PlantShadowvanilla::LaunchSpecialAttack(bool param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  float fVar8;
  float in_s2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  long local_8;
  
  plVar1 = (long *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (param_2) {
    LaunchShadowHurricane();
  }
  else {
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    lVar2 = FUN_04cde33c(*(undefined8 *)(lVar2 + 0x70),2);
    fVar5 = (float)(**(code **)(*plVar1 + 0x110))(0x3f800000,plVar1,lVar2);
    local_18 = fVar5;
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)plVar1[2]);
    fVar6 = *pfVar3;
    fVar8 = pfVar3[1];
    lVar4 = *(long *)(gLawnApp + 0x9f0);
    fVar7 = 0.0;
    if (*(char *)(lVar4 + 0x119) != '\0') {
      fVar7 = (float)Board::calculateRoofOffsetZ(fVar5 + fVar6);
      lVar4 = *(long *)(gLawnApp + 0x9f0);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar2 + 8));
    Board::AddProjectile
              ((Board *)(fVar5 + fVar6),in_s1 + fVar8,fVar7 + in_s2,lVar4,aRStack_20,plVar1[2],0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowvanilla::OnAnimCommand(std::string const&, std::string const&) */

void PlantShadowvanilla::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"special_fire");
  if (bVar1) {
    bVar1 = (bool)IsBoosted((PlantShadowvanilla *)param_1);
    Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    LaunchSpecialAttack(SUB81(param_1,0),bVar1);
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  bVar1 = std::operator==(param_2,"special_shadowhurricane");
  if (!bVar1) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  LaunchShadowSecondPlantfood();
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowvanilla::Initialize() */

void __thiscall PlantShadowvanilla::Initialize(PlantShadowvanilla *this)

{
  bool bVar1;
  undefined4 uVar2;
  PlantAnimRig_DevilsFlower *pPVar3;
  long lVar4;
  ShadowVanillaWhirlPoolSubSystem *pSVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  pPVar3 = (PlantAnimRig_DevilsFlower *)FUN_04ce2948(*(undefined8 *)(this + 0x10));
  if (pPVar3 != (PlantAnimRig_DevilsFlower *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    PlantAnimRig_DevilsFlower::SetPlantPtr(pPVar3,aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  lVar4 = FUN_04ce295c(*(undefined8 *)(this + 0x10));
  pSVar5 = Board::GetGameSubSystem<ShadowVanillaWhirlPoolSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar2 = FUN_04cde2c4(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  FUN_04cde328(pSVar5 + 0x28,uVar2);
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)aRStack_20,(vector *)(lVar4 + 0x2c0));
  ShadowVanillaWhirlPoolSubSystem::InitWhirlPoolRatio
            (pSVar5,(vector<float,std::allocator<float>> *)aRStack_20);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)aRStack_20);
  bVar1 = (bool)IsBoosted(this);
  UpdateBoostLayer(this,bVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

