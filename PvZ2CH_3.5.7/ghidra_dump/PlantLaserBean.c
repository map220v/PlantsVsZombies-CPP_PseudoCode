// Class: PlantLaserBean


/* PlantLaserBean::GetDamageFlags(PlantWeapon) */

undefined8 PlantLaserBean::GetDamageFlags(void)

{
  return 0x2000000000000;
}


/* PlantLaserBean::CalcRenderOrder() */

void __thiscall PlantLaserBean::CalcRenderOrder(PlantLaserBean *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    PlantFramework::CalcRenderOrder((PlantFramework *)this);
    return;
  }
  Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  return;
}


/* PlantLaserBean::PlayAttackAnimation() */

void __thiscall PlantLaserBean::PlayAttackAnimation(PlantLaserBean *this)

{
  Plant::PlayAttackAnimation(*(Plant **)(this + 0x10));
  this[0x48] = (PlantLaserBean)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLaserBean::StaticClassInit() */

void PlantLaserBean::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLaserBean");
    (*pcVar2)(plVar1,asStack_10,FUN_0403eec8,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLaserBean::StaticGetClass() */

long * PlantLaserBean::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLaserBean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLaserBean::GetClass() const */

long * PlantLaserBean::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLaserBean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLaserBean::FindTargetAndFire(PlantWeapon) */

void PlantLaserBean::FindTargetAndFire(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantFramework::FindTargetAndFire();
  if (cVar1 == '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    iVar2 = FUN_0403cbe4(lVar4);
    if (1 < iVar2) {
      uVar5 = *(undefined4 *)(lVar4 + 0x3cc);
      *(undefined1 *)(param_1 + 0x49) = 1;
      fVar6 = (float)FUN_0403cbdc(uVar5);
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      lVar3 = FUN_0403cc04(*(undefined8 *)(lVar3 + 0x70),0);
      fVar7 = *(float *)(lVar3 + 0x24);
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar3 = FUN_0403cc04(*(undefined8 *)(lVar3 + 0x70),0);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(lVar4 + 0xbc),fVar7 * 0.15 * fVar6,
                 *(float *)(lVar3 + 0x28) * 0.15 * fVar6);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantLaserBean::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantLaserBean::onAnimStoppedCallback(PlantLaserBean *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = std::operator==(param_1,"idle_5");
  if (bVar1) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLaserBean::DoProjectileCombo() */

void __thiscall PlantLaserBean::DoProjectileCombo(PlantLaserBean *this)

{
  undefined4 uVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  float *pfVar3;
  string asStack_20 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  Plant::Fire(*(Plant **)(this + 0x10),a_Stack_18,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),
              0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_LASERBEAN_LASER");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  std::string::~string(asStack_20);
  nop();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)a_Stack_18,*pfVar3 - 100.0,pfVar3[1] - 85.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)a_Stack_18,-1);
  uVar1 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_0403cbd0(this_00 + 0x1c,uVar1);
  std::string::string((string *)a_Stack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,a_Stack_18,0);
  std::string::~string((string *)a_Stack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLaserBean::PlantLaserBean() */

void __thiscall PlantLaserBean::PlantLaserBean(PlantLaserBean *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bc960;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  uVar1 = PVZ_EOT();
  this[0x50] = (PlantLaserBean)0x0;
  *(undefined4 *)(this + 0x4c) = uVar1;
  Sexy::Insets::Insets((Insets *)(this + 0x54));
  return;
}


/* PlantLaserBean::StaticNew() */

PlantLaserBean * PlantLaserBean::StaticNew(void)

{
  PlantLaserBean *this;
  
  this = ::operator_new(0x68);
  PlantLaserBean(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLaserBean::Initialize() */

void __thiscall PlantLaserBean::Initialize(PlantLaserBean *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  lVar3 = *(long *)(this + 0x10);
  if (cVar1 != '\0') {
    *(undefined1 *)(lVar3 + 0xb0) = 1;
  }
  iVar2 = FUN_0403cbe4(lVar3);
  if (iVar2 == 2) {
    lVar3 = FUN_0403dfac(lVar3);
    lVar4 = *(long *)(this + 0x10);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(lVar3 + 0x2b8);
    iVar2 = FUN_0403cbe4(lVar4);
  }
  else {
    if (iVar2 < 3) goto LAB_0403e07c;
    lVar3 = FUN_0403dfac(lVar3);
    lVar4 = *(long *)(this + 0x10);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(lVar3 + 700);
    iVar2 = FUN_0403cbe4(lVar4);
  }
  if (1 < iVar2) {
    fVar6 = (float)FUN_0403cbdc(*(undefined4 *)(lVar4 + 0x3cc));
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    lVar3 = FUN_0403cc04(*(undefined8 *)(lVar3 + 0x70),0);
    fVar7 = *(float *)(lVar3 + 0x24);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar3 = FUN_0403cc04(*(undefined8 *)(lVar3 + 0x70),0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(lVar4 + 0xbc),fVar7 * 0.15 * fVar6,
               *(float *)(lVar3 + 0x28) * 0.15 * fVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
LAB_0403e07c:
  this[0x48] = (PlantLaserBean)0x0;
  this[0x49] = (PlantLaserBean)0x1;
  this[0x50] = (PlantLaserBean)0x0;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x4c) = uVar5;
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x40) = uVar5;
  iVar2 = FUN_0403cbe4(*(undefined8 *)(this + 0x10));
  if (4 < iVar2) {
    fVar6 = (float)PVZ_T();
    lVar3 = FUN_0403dfac(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x4c) = fVar6 + *(float *)(lVar3 + 0x2c0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLaserBean::UpdateActions() */

void __thiscall PlantLaserBean::UpdateActions(PlantLaserBean *this)

{
  char cVar1;
  int iVar2;
  RtObject *pRVar3;
  PlantAnimRig_LaserBean *pPVar4;
  long *plVar5;
  long lVar6;
  PlantLaserBean PVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x48] != (PlantLaserBean)0x0) &&
     (cVar1 = Plant::CanFindTargetInRow
                        (*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0),
     cVar1 == '\0')) {
    this[0x48] = (PlantLaserBean)0x0;
  }
  pcVar8 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  if (pcVar8 == Plant::IsInPlantFoodState) {
    cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    cVar1 = (*pcVar8)();
  }
  if (((cVar1 != '\0') || (iVar2 = FUN_0403cbe4(*(undefined8 *)(this + 0x10)), iVar2 < 5)) ||
     (fVar10 = *(float *)(this + 0x4c), fVar9 = (float)PVZ_T(), fVar9 < fVar10)) goto LAB_0403e248;
  pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_LaserBean>(pRVar3);
  FUN_0403cbec(pPVar4 + 0x3b8,(byte)this[0x50] ^ 1);
  if (this[0x50] == (PlantLaserBean)0x0) {
    pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_LaserBean>(pRVar3);
    std::string::string(asStack_68,"idle_5");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop((PopAnimRig *)pPVar4,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    lVar6 = *(long *)(this + 0x10);
    *(undefined4 *)(lVar6 + 200) = 0xe;
    lVar6 = FUN_0403dfac(lVar6);
    fVar9 = (float)PVZ_T();
    PVar7 = this[0x50];
    if (PVar7 == (PlantLaserBean)0x0) goto LAB_0403e41c;
LAB_0403e30c:
    fVar10 = *(float *)(lVar6 + 0x2c0);
  }
  else {
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar5 + 0x118))();
    lVar6 = FUN_0403dfac(*(undefined8 *)(this + 0x10));
    fVar9 = (float)PVZ_T();
    PVar7 = this[0x50];
    if (PVar7 != (PlantLaserBean)0x0) goto LAB_0403e30c;
LAB_0403e41c:
    fVar10 = *(float *)(lVar6 + 0x2c4);
  }
  this[0x48] = (PlantLaserBean)0x0;
  this[0x50] = (PlantLaserBean)((byte)PVar7 ^ 1);
  *(float *)(this + 0x4c) = fVar10 + fVar9;
LAB_0403e248:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLaserBean::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantLaserBean::Fire(long *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Zombie *this;
  ulong uVar7;
  GridItem *pGVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  RealObject *this_00;
  float fVar12;
  float fVar13;
  float fVar14;
  string asStack_98 [8];
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  lVar10 = *param_1;
  local_8 = ___stack_chk_guard;
  if (*(code **)(lVar10 + 400) == PlantFramework::GetCollisionFlags) {
    uVar2 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar2 = (**(code **)(lVar10 + 400))(param_1,0);
    lVar10 = *param_1;
  }
  if (*(code **)(lVar10 + 0x198) == GetDamageFlags) {
    uVar5 = GetDamageFlags();
  }
  else {
    uVar5 = (**(code **)(lVar10 + 0x198))(param_1,0);
  }
  Plant::GetProps();
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_0403cc04(*(undefined8 *)(lVar10 + 0x70),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction((PlantAction *)param_1[2]);
  operator|=(auStack_58,uVar5);
  lVar10 = param_1[2];
  iVar3 = FUN_0403cbe4(lVar10);
  if (iVar3 < 5) {
LAB_0403e7e0:
    if (iVar3 == 2) {
      fVar14 = 1.0;
      fVar12 = (float)FUN_0403cbdc(*(undefined4 *)(lVar10 + 0x3cc));
      if (*(char *)((long)param_1 + 0x49) == '\0') {
        fVar14 = 0.15;
      }
      Plant::GetProps();
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
      lVar9 = FUN_0403cc04(*(undefined8 *)(lVar9 + 0x70),0);
      fVar13 = *(float *)(lVar9 + 0x24);
      Plant::GetProps();
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      lVar9 = FUN_0403cc04(*(undefined8 *)(lVar9 + 0x70),0);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(lVar10 + 0xbc),fVar12 * fVar13 * fVar14,
                 fVar12 * *(float *)(lVar9 + 0x28) * fVar14);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
      lVar10 = param_1[2];
      *(byte *)((long)param_1 + 0x49) = *(byte *)((long)param_1 + 0x49) ^ 1;
      local_60 = *(float *)((long)param_1 + 0x44) * local_60;
      goto LAB_0403e5fc;
    }
  }
  else if ((char)param_1[10] != '\0') {
    local_60 = local_60 + local_60;
    iVar3 = FUN_0403cbe4(lVar10);
    goto LAB_0403e7e0;
  }
  if (2 < iVar3) {
    fVar12 = (float)FUN_0403cbdc(*(undefined4 *)(lVar10 + 0x3cc));
    Plant::GetProps();
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
    lVar9 = FUN_0403cc04(*(undefined8 *)(lVar9 + 0x70),0);
    fVar14 = *(float *)(lVar9 + 0x24);
    Plant::GetProps();
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    lVar9 = FUN_0403cc04(*(undefined8 *)(lVar9 + 0x70),0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(lVar10 + 0xbc),fVar14 * 0.15 * fVar12,
               *(float *)(lVar9 + 0x28) * 0.15 * fVar12);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
    lVar10 = param_1[2];
    local_60 = local_60 * *(float *)((long)param_1 + 0x44) * 0.2;
  }
LAB_0403e5fc:
  uVar11 = 0;
  Sexy::Insets::Insets(aIStack_90,*(int *)(lVar10 + 0x114),*(int *)(lVar10 + 0x110),0xf,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar4 = operator|(4,2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
             aIStack_90);
  uVar5 = local_80;
  lVar10 = FUN_0403cc14(local_80,local_78);
  if (lVar10 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_0403cc20(uVar5,uVar11);
      this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      if ((this == (Zombie *)0x0) ||
         (((cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1[2]),
           cVar1 != '\0' && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*(long *)this + 0xb8))(this,uVar2), cVar1 != '\0')))) {
        puVar6 = (undefined8 *)FUN_0403cc20(local_80,uVar11);
        pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
        if ((pGVar8 == (GridItem *)0x0) ||
           (cVar1 = (**(code **)(*(long *)pGVar8 + 0x200))(), cVar1 != '\0')) {
          puVar6 = (undefined8 *)FUN_0403cc20(local_80,uVar11);
          (**(code **)(*(long *)*puVar6 + 0x110))((long *)*puVar6,aRStack_68);
        }
      }
      uVar5 = local_80;
      uVar11 = uVar11 + 1;
      uVar7 = FUN_0403cc14(local_80,local_78);
    } while (uVar11 < uVar7);
  }
  this_00 = (RealObject *)param_1[2];
  std::string::string(asStack_98,"Play_LaserBean_Fire");
  RealObject::PlayPositionalSound(this_00,asStack_98,0.0);
  std::string::~string(asStack_98);
  nop();
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantCombos,(Plant *)param_1[2]);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLaserBean::ApplyPlantfood() */

void __thiscall PlantLaserBean::ApplyPlantfood(PlantLaserBean *this)

{
  RealObject *this_00;
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x40) = uVar1;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  this[0x48] = (PlantLaserBean)0x0;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_LaserBean_Food");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLaserBean::~PlantLaserBean() */

void __thiscall PlantLaserBean::~PlantLaserBean(PlantLaserBean *this)

{
  *(undefined ***)this = &PTR_GetClass_067bc960;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantLaserBean::~PlantLaserBean() */

void __thiscall PlantLaserBean::~PlantLaserBean(PlantLaserBean *this)

{
  ~PlantLaserBean(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLaserBean::CancelPlantfood() */

void __thiscall PlantLaserBean::CancelPlantfood(PlantLaserBean *this)

{
  int iVar1;
  undefined4 uVar2;
  PopAnimRig *this_00;
  undefined8 uVar3;
  Lightningeffect *this_01;
  ResourceInfo *pRVar4;
  float *pfVar5;
  Plant *pPVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e8 [8];
  string asStack_e0 [24];
  undefined8 local_c8;
  float local_c0;
  undefined1 auStack_b8 [80];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = (float)PVZ_T();
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_68,"plantfood_off");
  fVar9 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_68);
  *(float *)(this + 0x4c) = fVar9 + fVar8;
  std::string::~string(asStack_68);
  nop();
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  pPVar6 = *(Plant **)(this + 0x10);
  iVar1 = FUN_0403cbe4(pPVar6);
  if ((4 < iVar1) && (this[0x50] != (PlantLaserBean)0x0)) {
    lVar7 = *(long *)this;
    if (*(code **)(lVar7 + 400) == PlantFramework::GetCollisionFlags) {
      uVar2 = PlantFramework::GetCollisionFlags(this,3);
    }
    else {
      uVar2 = (**(code **)(lVar7 + 400))(this,3);
      lVar7 = *(long *)this;
    }
    if (*(code **)(lVar7 + 0x198) == GetDamageFlags) {
      uVar3 = GetDamageFlags();
    }
    else {
      uVar3 = (**(code **)(lVar7 + 0x198))(this,3);
    }
    uVar3 = operator|(uVar3,0x2000);
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    FUN_0403cc04(*(undefined8 *)(lVar7 + 0x70),3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    operator|=(auStack_b8,uVar3);
    fVar8 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    local_c8 = 0;
    local_c0 = (fVar8 + 1.0) * local_c0;
    this_01 = Board::AddEffect<Lightningeffect>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_e0,"POPANIM_EFFECTS_LASERBEAN_LASER_LV5");
    GetPAMByName(asStack_e0);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string(asStack_e0);
    nop();
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_68,*pfVar5 + gCheat_X + -73.0,pfVar5[1] + gCheat_Y + -104.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)asStack_68,-1);
    FUN_0403cbd0(this_01 + 0x1c,300000);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_e0);
    std::string::string(asStack_68,"plantfood");
    AnimationSequence::AddSingleAnimation(asStack_e0,asStack_68,0);
    std::string::~string(asStack_68);
    nop();
    std::string::string(asStack_68,"plantfood02");
    lVar7 = FUN_0403dfac(*(undefined8 *)(this + 0x10));
    AnimationSequence::AddLoopingAnimation(*(undefined4 *)(lVar7 + 0x2cc),asStack_e0,asStack_68,0);
    std::string::~string(asStack_68);
    nop();
    std::string::string(asStack_68,"plantfood03");
    AnimationSequence::AddSingleAnimation(asStack_e0,asStack_68,0);
    std::string::~string(asStack_68);
    nop();
    Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this_01,(AnimationSequence *)asStack_e0)
    ;
    Sexy::Insets::Insets((Insets *)asStack_68,(Insets *)(this + 0x54));
    Lightningeffect::SetRect(this_01,asStack_68);
    FUN_0403cbf4(this_01 + 0x188,uVar2);
    DamageInfo::DamageInfo((DamageInfo *)asStack_68,(DamageInfo *)&local_c8);
    Lightningeffect::SetDamageProps(this_01,asStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_68,(RtWeakPtrBase *)aRStack_e8);
    Lightningeffect::SetInstigator(this_01,asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_e0);
    DamageInfo::~DamageInfo((DamageInfo *)&local_c8);
    pPVar6 = *(Plant **)(this + 0x10);
  }
  MessageRouter::Post<Plant*,Plant*>((MessageRouter *)gMessageRouter,Message::PlantCombos,pPVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLaserBean::UpdatePlantfood() */

void __thiscall PlantLaserBean::UpdatePlantfood(PlantLaserBean *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PopAnimRig *this_00;
  float *pfVar7;
  ulong uVar8;
  undefined8 *puVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long lVar10;
  RtWeakPtrBase *this_02;
  float *pfVar11;
  Zombie *this_03;
  GridItem *pGVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
  float local_a8;
  float local_a4;
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_a8 = 0.0;
  local_a4 = 0.0;
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_68,"laserbean_blast_base");
  cVar2 = PopAnimRig::CalcLayerTranslation(this_00,asStack_68,&local_a8,&local_a4);
  std::string::~string(asStack_68);
  nop();
  if ((cVar2 != '\0') && (fVar17 = (float)PVZ_T(), *(float *)(this + 0x40) <= fVar17)) {
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar7);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    iVar4 = BoardTransforms::BoardSpaceToGridX(local_a8 + *pfVar7);
    bVar1 = iVar4 == -1;
    if (bVar1) {
      iVar4 = 0x11;
    }
    if (iVar4 <= iVar3) {
      iVar4 = iVar3 + 1;
    }
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 == '\0') {
      uVar14 = 1;
      uVar18 = 1;
    }
    else {
      uVar18 = 2;
      uVar14 = 2;
    }
    lVar15 = *(long *)this;
    if (*(code **)(lVar15 + 400) == PlantFramework::GetCollisionFlags) {
      uVar5 = PlantFramework::GetCollisionFlags();
    }
    else {
      uVar5 = (**(code **)(lVar15 + 400))(this,uVar14);
      lVar15 = *(long *)this;
    }
    if (*(code **)(lVar15 + 0x198) == GetDamageFlags) {
      uVar14 = GetDamageFlags();
    }
    else {
      uVar14 = (**(code **)(lVar15 + 0x198))(this,uVar14);
    }
    uVar14 = operator|(uVar14,0x2000);
    Plant::GetProps();
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    lVar15 = FUN_0403cc04(*(undefined8 *)(lVar15 + 0x70),uVar18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    operator|=(auStack_58,uVar14);
    fVar17 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    local_60 = (fVar17 + 1.0) * local_60;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar6 = operator|(2,4);
    iVar4 = (iVar4 - iVar3) + 1;
    Sexy::Insets::Insets
              ((Insets *)&local_90,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),iVar4,1);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar6,
               (Insets *)&local_90);
    for (uVar16 = 0; uVar18 = local_80, uVar8 = FUN_0403cc14(local_80,local_78), uVar16 < uVar8;
        uVar16 = uVar16 + 1) {
      puVar9 = (undefined8 *)FUN_0403cc20(uVar18,uVar16);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)*puVar9;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)&local_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      uVar18 = *(undefined8 *)(this + 0x28);
      lVar10 = FUN_0403cc28(uVar18,*(undefined8 *)(this + 0x30));
      for (lVar13 = 0; lVar13 != lVar10; lVar13 = lVar13 + 1) {
        this_02 = (RtWeakPtrBase *)FUN_0403cc34(uVar18,lVar13);
        cVar2 = Sexy::RtWeakPtrBase::operator==(this_02,(RtWeakPtrBase *)aRStack_a0);
        if (cVar2 != '\0') goto LAB_0403f554;
      }
      if (bVar1) {
LAB_0403f52c:
        this_03 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
        if (((this_03 == (Zombie *)0x0) ||
            ((cVar2 = (**(code **)(*(long *)this_03 + 0xb8))(this_03,uVar5), cVar2 != '\0' &&
             (cVar2 = RealObject::IsOnOpposingTeam
                                ((RealObject *)this_03,*(RealObject **)(this + 0x10)), cVar2 != '\0'
             )))) && ((pGVar12 = Sexy::RtObject::Cast<GridItem>((RtObject *)this_01),
                      pGVar12 == (GridItem *)0x0 ||
                      (cVar2 = (**(code **)(*(long *)pGVar12 + 0x200))(), cVar2 != '\0')))) {
          (**(code **)(*(long *)this_01 + 0x110))(this_01,asStack_68);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)aRStack_98);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x28),(RtWeakPtr *)&local_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
        }
      }
      else {
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_01);
        pfVar11 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(this + 0x10));
        if (*pfVar7 <= local_a8 + *pfVar11) goto LAB_0403f52c;
      }
LAB_0403f554:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    }
    fVar17 = (float)PVZ_T();
    lVar13 = *(long *)(this + 0x10);
    *(float *)(this + 0x40) = fVar17 + *(float *)(lVar15 + 0x28);
    iVar3 = FUN_0403cbe4(lVar13);
    if ((4 < iVar3) && (this[0x50] != (PlantLaserBean)0x0)) {
      Sexy::Insets::Insets
                ((Insets *)&local_90,*(int *)(lVar13 + 0x114),*(int *)(lVar13 + 0x110),iVar4,1);
      *(undefined8 *)(this + 0x54) = local_90;
      *(undefined8 *)(this + 0x5c) = uStack_88;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

