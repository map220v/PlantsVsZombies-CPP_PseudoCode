// Class: PlantSnapdragon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::ApplyPlantfood() */

void __thiscall PlantSnapdragon::ApplyPlantfood(PlantSnapdragon *this)

{
  bool bVar1;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_SnapDragon_PF");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x2c) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnapdragon::GetPlantAttackRect(PlantWeapon) */

long PlantSnapdragon::GetPlantAttackRect(long param_1,long param_2,int param_3)

{
  PlantFramework::GetPlantAttackRect();
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x38);
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::StaticClassInit() */

void PlantSnapdragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSnapdragon");
    (*pcVar2)(plVar1,asStack_10,FUN_0406121c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnapdragon::StaticGetClass() */

long * PlantSnapdragon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSnapdragon::GetClass() const */

long * PlantSnapdragon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSnapdragon::PlantSnapdragon() */

void __thiscall PlantSnapdragon::PlantSnapdragon(PlantSnapdragon *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c3990;
  Sexy::Insets::Insets((Insets *)(this + 0x30));
  return;
}


/* PlantSnapdragon::StaticNew() */

PlantSnapdragon * PlantSnapdragon::StaticNew(void)

{
  PlantSnapdragon *this;
  
  this = ::operator_new(0x48);
  PlantSnapdragon(this);
  return this;
}


/* PlantSnapdragon::~PlantSnapdragon() */

void __thiscall PlantSnapdragon::~PlantSnapdragon(PlantSnapdragon *this)

{
  *(undefined ***)this = &PTR_GetClass_067c3990;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSnapdragon::~PlantSnapdragon() */

void __thiscall PlantSnapdragon::~PlantSnapdragon(PlantSnapdragon *this)

{
  ~PlantSnapdragon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::Initialize() */

void __thiscall PlantSnapdragon::Initialize(PlantSnapdragon *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  PlantAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantSnapdragon)0x0;
  this[0x40] = (PlantSnapdragon)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar4 = FUN_04060c68(*(undefined8 *)(lVar4 + 0x70),1);
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(lVar4 + 0x58);
  *(undefined8 *)(this + 0x38) = uVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    *(int *)(this + 0x38) = (*(int *)(this + 0x38) << 2) / 3;
  }
  this_00 = (PlantAnimRig *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar3 = FUN_04060c58(*(undefined8 *)(this + 0x10));
  PlantAnimRig::SetPlantLevel(this_00,iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnapdragon::Idle() */

void __thiscall PlantSnapdragon::Idle(PlantSnapdragon *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantSnapdragon::onWatered(bool) */

void __thiscall PlantSnapdragon::onWatered(PlantSnapdragon *this,bool param_1)

{
  RtObject *this_00;
  PlantAnimRig_Snapdragon *pPVar1;
  
  if (param_1) {
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Snapdragon>(this_00);
    if ((pPVar1 != (PlantAnimRig_Snapdragon *)0x0) &&
       (pPVar1[0x3bc] != (PlantAnimRig_Snapdragon)0x0)) {
      pPVar1[0x3bc] = (PlantAnimRig_Snapdragon)0x0;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantSnapdragon::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  Effect_PopAnim *this;
  ResourceInfo *pRVar8;
  float *pfVar9;
  int iVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int local_20 [2];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  lVar6 = FUN_04060c68(*(undefined8 *)(lVar6 + 0x70),1);
  iVar17 = *(int *)(lVar6 + 0x60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(param_1 + 0x10);
  iVar10 = 4;
  if (*(int *)(param_1 + 0x38) <= iVar17) {
    iVar10 = 3;
  }
  lVar6 = *(long *)(gLawnApp + 0x9f0);
  iVar17 = *(int *)(p_Var11 + 0x114) + 1;
  if ((iVar17 <= *(int *)(lVar6 + 0xf8)) && (iVar17 <= iVar10 + *(int *)(p_Var11 + 0x114))) {
    do {
      local_18[0] = 0;
      local_20[0] = *(int *)(p_Var11 + 0x110) + -1;
      piVar7 = eastl::max_alt<int>(local_20,(int *)local_18);
      iVar12 = *piVar7;
      if ((iVar12 < *(int *)(lVar6 + 0xfc)) && (iVar12 <= *(int *)(p_Var11 + 0x110) + 1)) {
        do {
          pfVar9 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var11);
          fVar15 = *pfVar9;
          FUN_04060c34((RtWeakPtr<Sexy::ResourceInfo> *)local_18,p_Var11);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
          fVar13 = *(float *)(lVar6 + 0x9c);
          iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x114);
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(param_1 + 0x10);
          lVar6 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var11);
          fVar16 = *(float *)(lVar6 + 4);
          FUN_04060c34((RtWeakPtr<Sexy::ResourceInfo> *)local_18,p_Var11);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
          fVar14 = *(float *)(lVar6 + 0xa0);
          iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x110);
          iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          fVar13 = (float)(int)((fVar15 - fVar13) + (float)((iVar17 - iVar1) * iVar4));
          if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
            fVar15 = 0.0;
          }
          else {
            fVar15 = (float)Board::calculateRoofOffsetZ(fVar13);
            fVar15 = (float)(int)fVar15;
          }
          iVar1 = iVar12 + 1;
          uVar3 = Board::MakeRenderOrder(0x65130,iVar12,0);
          this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string((string *)local_20,"POPANIM_EFFECTS_SNAPDRAGON_PLANTFOOD_FIREBALLS");
          GetPAMByName((string *)local_20);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
          Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar8,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          std::string::~string((string *)local_20);
          nop();
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)local_18,fVar13,
                     (float)(int)((fVar16 - fVar14) + (float)((iVar12 - iVar2) * iVar5)),fVar15);
          StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,-1)
          ;
          FUN_04060c18(this + 0x1c,uVar3);
          std::string::string((string *)local_18,"animation");
          Effect_PopAnim::PlaySingleAnimation(this,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,2);
          std::string::~string((string *)local_18);
          nop();
          lVar6 = *(long *)(gLawnApp + 0x9f0);
        } while ((iVar1 < *(int *)(lVar6 + 0xfc)) &&
                (p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(param_1 + 0x10), iVar12 = iVar1,
                iVar1 <= *(int *)(p_Var11 + 0x110) + 1));
      }
      iVar17 = iVar17 + 1;
    } while ((iVar17 <= *(int *)(lVar6 + 0xf8)) &&
            (p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         **)(param_1 + 0x10), iVar17 <= iVar10 + *(int *)(p_Var11 + 0x114)));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantSnapdragon::FindTargetAndFire(PlantSnapdragon *this,undefined4 param_2)

{
  PlantAnimRig_Snapdragon PVar1;
  char cVar2;
  bool bVar3;
  PlantSnapdragon PVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  RtObject *this_00;
  PlantAnimRig_Snapdragon *pPVar8;
  Plant *this_01;
  code *pcVar9;
  float fVar10;
  undefined1 auStack_6c [4];
  RtMixedPtrBase aRStack_68 [8];
  undefined8 local_60;
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVar1 = (PlantAnimRig_Snapdragon)(**(code **)(*(long *)this + 0x180))();
  if (PVar1 != (PlantAnimRig_Snapdragon)0x0) goto LAB_04061b60;
  iVar5 = *(int *)(*(long *)(this + 0x10) + 0x110);
  (**(code **)(*(long *)this + 0xf8))(aRStack_68,this,param_2);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
  if (cVar2 == '\0') {
    local_60 = (**(code **)(*(long *)this + 0x3f8))(this,param_2);
    (**(code **)(*(long *)this + 0xe0))(aRStack_58,this,iVar5,param_2,auStack_6c,&local_60);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    if (bVar3) goto LAB_04061bc8;
    (**(code **)(*(long *)this + 0xe0))(aRStack_58,this,iVar5 + -1,param_2,auStack_6c,&local_60);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    if (bVar3) goto LAB_04061bc8;
    (**(code **)(*(long *)this + 0xe0))(aRStack_58,this,iVar5 + 1,param_2,auStack_6c,&local_60);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    PVar1 = (PlantAnimRig_Snapdragon)0x0;
    if (bVar3) goto LAB_04061bc8;
  }
  else {
LAB_04061bc8:
    this_01 = *(Plant **)(this + 0x10);
    iVar5 = FUN_04060c58(this_01);
    if (*(code **)(*(long *)this + 0x410) == PlantFramework::GetMiniLevel) {
      iVar6 = PlantFramework::GetMiniLevel((PlantFramework *)this);
    }
    else {
      iVar6 = (**(code **)(*(long *)this + 0x410))();
      this_01 = *(Plant **)(this + 0x10);
    }
    cVar2 = Plant::IsSkillCheat(this_01);
    if (cVar2 == '\0') {
      if (iVar5 - iVar6 == 1) {
        fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        lVar7 = FUN_04061aac(*(undefined8 *)(this + 0x10));
        this[0x40] = (PlantSnapdragon)(fVar10 < *(float *)(lVar7 + 0x2b8));
      }
      else if (1 < iVar5 - iVar6) {
        fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        lVar7 = FUN_04061aac(*(undefined8 *)(this + 0x10));
        this[0x40] = (PlantSnapdragon)(fVar10 < *(float *)(lVar7 + 700));
      }
    }
    else {
      PVar4 = (PlantSnapdragon)Plant::IsSkillActivate(*(Plant **)(this + 0x10));
      this[0x40] = PVar4;
    }
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar8 = Sexy::RtObject::Cast<PlantAnimRig_Snapdragon>(this_00);
    PVar1 = pPVar8[0x3bc];
    if (PVar1 == (PlantAnimRig_Snapdragon)0x0) {
      iVar5 = FUN_04060c58(*(undefined8 *)(this + 0x10));
      if ((iVar5 != 5) ||
         (fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0),
         *(float *)(pPVar8 + 0x3b8) <= fVar10)) {
        PVar1 = (PlantAnimRig_Snapdragon)0x1;
        (**(code **)(*(long *)this + 0x1a0))(this);
      }
      else {
        PVar1 = (PlantAnimRig_Snapdragon)0x1;
        pcVar9 = *(code **)(*(long *)pPVar8 + 600);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar9)(pPVar8,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04061b60:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::damageEntities(PlantWeapon, DamageInfo) */

void __thiscall
PlantSnapdragon::damageEntities(PlantSnapdragon *this,undefined4 param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  ulong uVar6;
  GridItem *pGVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  lVar8 = *(long *)this;
  local_8 = ___stack_chk_guard;
  if (*(code **)(lVar8 + 400) == PlantFramework::GetCollisionFlags) {
    uVar2 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar2 = (**(code **)(lVar8 + 400))();
    lVar8 = *(long *)this;
  }
  uVar9 = 0;
  uVar4 = (**(code **)(lVar8 + 0x198))(this,param_2);
  operator|=(param_3 + 0x10,uVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = operator|(4,2);
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,param_2);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar3,
             auStack_30,0xffffffff,0xffffffff);
  uVar4 = local_20;
  lVar8 = FUN_04060c78(local_20,local_18);
  if (lVar8 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_04060c84(uVar4,uVar9);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (this_00 == (Zombie *)0x0) {
LAB_04061fbc:
        puVar5 = (undefined8 *)FUN_04060c84(local_20,uVar9);
        pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
        if ((pGVar7 == (GridItem *)0x0) ||
           (cVar1 = (**(code **)(*(long *)pGVar7 + 0x200))(), cVar1 != '\0')) {
          puVar5 = (undefined8 *)FUN_04060c84(local_20,uVar9);
          (**(code **)(*(long *)*puVar5 + 0x110))((long *)*puVar5,param_3);
        }
      }
      else {
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this_00,*(RealObject **)(this + 0x10));
        if (((cVar1 != '\0') &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar2), cVar1 != '\0')) {
          cVar1 = Zombie::HasCondition(this_00,0x32);
          if ((cVar1 == '\0') &&
             (fVar10 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10)), 0.0 < fVar10)) {
            Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_00,0x32,1);
            fVar11 = *(float *)(param_3 + 8);
            fVar10 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
            Zombie::SetConditionTracker(fVar10 * fVar11,this_00,0x32);
            *(undefined4 *)(param_3 + 0x54) = 0x41200000;
          }
          goto LAB_04061fbc;
        }
      }
      uVar4 = local_20;
      uVar9 = uVar9 + 1;
      uVar6 = FUN_04060c78(local_20,local_18);
    } while (uVar9 < uVar6);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::OnAnimCommand(std::string const&, std::string const&) */

void PlantSnapdragon::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  long lVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  RtObject *this;
  PlantAnimRig_Snapdragon *pPVar10;
  SnapdragonFlyDragon *this_00;
  undefined8 *puVar11;
  int iVar12;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  code *pcVar13;
  int iVar14;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  RtMixedPtr aRStack_c8 [8];
  undefined8 local_c0;
  undefined4 local_b8;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04060c24(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x1d0));
  if (cVar1 == '\0') {
    bVar2 = std::operator==(param_2,"use_action");
    if (bVar2) {
      cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
      if (cVar1 == '\0') {
        this = (RtObject *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
        pPVar10 = Sexy::RtObject::Cast<PlantAnimRig_Snapdragon>(this);
        if ((pPVar10 == (PlantAnimRig_Snapdragon *)0x0) ||
           (pPVar10[0x3bc] == (PlantAnimRig_Snapdragon)0x0)) {
          p_Var15 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(param_1 + 0x10);
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var15);
          fVar16 = *pfVar6;
          FUN_04060c34(aRStack_68,p_Var15);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
          iVar14 = (int)(fVar16 - *(float *)(lVar7 + 0x9c));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          p_Var15 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(param_1 + 0x10);
          lVar7 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var15);
          fVar16 = *(float *)(lVar7 + 4);
          fVar17 = *(float *)(lVar7 + 8);
          FUN_04060c34(aRStack_68,p_Var15);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
          iVar12 = (int)((fVar16 - fVar17) - *(float *)(lVar7 + 0xa0));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          __n = aRStack_68;
          std::string::string((string *)aRStack_c8,"animation");
          nop();
          if (param_1[0x40] != (string)0x0) {
            std::string::append((string *)aRStack_c8,"blue_fire",(size_t)__n);
          }
          cVar1 = Board::RowCanHaveZombies
                            (*(Board **)(gLawnApp + 0x9f0),
                             *(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1);
          if (cVar1 != '\0') {
            uVar3 = Board::MakeRenderOrder
                              (0x65130,*(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1,0);
            pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string((string *)&local_c0,"POPANIM_EFFECTS_SNAPDRAGON_FIRE");
            GetPAMByName((string *)&local_c0);
            pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
            Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
            std::string::~string((string *)&local_c0);
            nop();
            iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
            EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)iVar14,(float)(iVar12 - iVar4),0.0);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_68,-1);
            FUN_04060c18(pEVar8 + 0x1c,uVar3);
            Effect_PopAnim::PlaySingleAnimation(pEVar8,(string *)aRStack_c8,2);
          }
          fVar16 = (float)iVar14;
          uVar3 = Board::MakeRenderOrder
                            (0x65130,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
          pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string((string *)&local_c0,"POPANIM_EFFECTS_SNAPDRAGON_FIRE");
          GetPAMByName((string *)&local_c0);
          pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
          Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          std::string::~string((string *)&local_c0);
          nop();
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,fVar16,(float)iVar12,0.0);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_68,-1);
          FUN_04060c18(pEVar8 + 0x1c,uVar3);
          Effect_PopAnim::PlaySingleAnimation(pEVar8,(string *)aRStack_c8,2);
          cVar1 = Board::RowCanHaveZombies
                            (*(Board **)(gLawnApp + 0x9f0),
                             *(int *)(*(long *)(param_1 + 0x10) + 0x110) + 1);
          if (cVar1 != '\0') {
            uVar3 = Board::MakeRenderOrder
                              (0x65130,*(int *)(*(long *)(param_1 + 0x10) + 0x110) + 1,0);
            pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string((string *)&local_c0,"POPANIM_EFFECTS_SNAPDRAGON_FIRE");
            GetPAMByName((string *)&local_c0);
            pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
            Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
            std::string::~string((string *)&local_c0);
            nop();
            iVar14 = BoardConstants::GRIDSQUARE_HEIGHT();
            EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,fVar16,(float)(iVar14 + iVar12),0.0);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_68,-1);
            FUN_04060c18(pEVar8 + 0x1c,uVar3);
            Effect_PopAnim::PlaySingleAnimation(pEVar8,(string *)aRStack_c8,2);
          }
          std::string::~string((string *)aRStack_c8);
          uVar5 = 1;
        }
        else {
          this_00 = GameObject::Create<SnapdragonFlyDragon>();
          if (this_00 != (SnapdragonFlyDragon *)0x0) {
            Plant::GetProps();
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
            FUN_04060c68(*(undefined8 *)(lVar7 + 0x70),2);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
            Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
            SnapdragonFlyDragon::initializeRenderEffect(this_00,local_60);
            pcVar13 = *(code **)(*(long *)this_00 + 0x78);
            puVar11 = (undefined8 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(param_1 + 0x10));
            local_c0 = *puVar11;
            local_b8 = *(undefined4 *)(puVar11 + 1);
            (*pcVar13)(this_00,&local_c0);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
          pPVar10[0x3bc] = (PlantAnimRig_Snapdragon)0x0;
          uVar5 = 1;
        }
      }
      else {
        p_Var15 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)(param_1 + 0x10);
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(p_Var15);
        fVar19 = *pfVar6;
        FUN_04060c34(aRStack_68,p_Var15);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        fVar16 = *(float *)(lVar7 + 0x9c);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        p_Var15 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)(param_1 + 0x10);
        lVar7 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(p_Var15);
        fVar18 = *(float *)(lVar7 + 4);
        fVar20 = *(float *)(lVar7 + 8);
        FUN_04060c34(aRStack_68,p_Var15);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        fVar17 = *(float *)(lVar7 + 0xa0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        uVar3 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0)
        ;
        pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string((string *)&local_c0,"POPANIM_EFFECTS_SNAPDRAGON_FIRE");
        GetPAMByName((string *)&local_c0);
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
        Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        std::string::~string((string *)&local_c0);
        nop();
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aRStack_68,(float)(int)(fVar19 - fVar16),
                   (float)(int)((fVar18 - fVar20) - fVar17),0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar8,(SexyVector3 *)aRStack_68,-1);
        FUN_04060c18(pEVar8 + 0x1c,uVar3);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
        std::string::string((string *)aRStack_68,"onStandaloneEffectFinishedCallback");
        RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b0,
                   (string *)&local_c0,aRStack_68);
        StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar8,aRStack_b0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_b0);
        std::string::~string((string *)aRStack_68);
        nop();
        Sexy::RtId::~RtId((RtId *)&local_c0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8)
        ;
        std::string::string((string *)aRStack_68,"plantfood");
        Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_68,0);
        std::string::~string((string *)aRStack_68);
        nop();
        uVar5 = 1;
      }
      goto LAB_04062380;
    }
    bVar2 = std::operator==(param_2,"deal_damage");
    if ((bVar2) && (cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1), cVar1 != '\0')) {
      uVar5 = 1;
      param_1[0x28] = (string)0x1;
      goto LAB_04062380;
    }
  }
  uVar5 = 0;
LAB_04062380:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::applyWarming(DamageTypeFlags, PlantWeapon) */

void __thiscall
PlantSnapdragon::applyWarming(PlantSnapdragon *this,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *pPVar3;
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [16];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  local_58 = param_2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  (**(code **)(*(long *)this + 0x2b8))((__normal_iterator *)local_90,this,param_3);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_80,1,(__normal_iterator *)local_90,0xffffffff,0xffffffff);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_90[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90)
        , bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar2);
    (**(code **)(*(long *)pPVar3 + 0x110))(pPVar3,aDStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::CancelPlantfood() */

void __thiscall PlantSnapdragon::CancelPlantfood(PlantSnapdragon *this)

{
  long lVar1;
  PlantAction *pPVar2;
  float *pfVar3;
  float local_144;
  DamageInfo aDStack_140 [8];
  float local_138;
  undefined8 local_130;
  float local_e0 [24];
  PlantAction aPStack_80 [96];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x28] = (PlantSnapdragon)0x0;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
  pPVar2 = (PlantAction *)FUN_04060c68(*(undefined8 *)(lVar1 + 0x70),1);
  PlantAction::PlantAction(aPStack_80,pPVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
  local_20 = *(undefined4 *)(this + 0x38);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  local_130 = operator|(local_130,0x1000);
  if (*(float *)(this + 0x2c) < local_138) {
    local_e0[0] = local_138 - *(float *)(this + 0x2c);
    local_144 = 0.0;
    pfVar3 = eastl::max_alt<float>(&local_144,local_e0);
    local_138 = *pfVar3;
    DamageInfo::DamageInfo((DamageInfo *)local_e0,aDStack_140);
    damageEntities(this,1,(RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
    DamageInfo::~DamageInfo((DamageInfo *)local_e0);
  }
  *(undefined4 *)(this + 0x2c) = 0;
  DamageInfo::~DamageInfo(aDStack_140);
  PlantAction::~PlantAction(aPStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::UpdatePlantfood() */

void __thiscall PlantSnapdragon::UpdatePlantfood(PlantSnapdragon *this)

{
  long lVar1;
  PlantAction *pPVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_144;
  DamageInfo aDStack_140 [8];
  float local_138;
  undefined8 local_130;
  float local_e0 [24];
  PlantAction aPStack_80 [96];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x28] != (PlantSnapdragon)0x0) {
    if (*(float *)(this + 0x2c) == 0.0) {
      applyWarming(this,0x200000000,1);
    }
    Plant::GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
    pPVar2 = (PlantAction *)FUN_04060c68(*(undefined8 *)(lVar1 + 0x70),1);
    PlantAction::PlantAction(aPStack_80,pPVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
    local_20 = *(undefined4 *)(this + 0x38);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    local_130 = operator|(local_130,0x1000);
    fVar5 = local_138;
    if (*(float *)(this + 0x2c) < local_138) {
      fVar4 = (float)PVZ_Dt();
      fVar4 = fVar4 * fVar5;
      fVar5 = *(float *)(this + 0x2c);
      if (local_138 < fVar4 + fVar5) {
        local_e0[0] = local_138 - fVar5;
        local_144 = 0.0;
        pfVar3 = eastl::max_alt<float>(&local_144,local_e0);
        fVar4 = *pfVar3;
      }
      if (0.0 < fVar4) {
        *(float *)(this + 0x2c) = fVar4 + fVar5;
        local_138 = fVar4;
        DamageInfo::DamageInfo((DamageInfo *)local_e0,aDStack_140);
        damageEntities(this,1,(RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
        DamageInfo::~DamageInfo((DamageInfo *)local_e0);
      }
    }
    DamageInfo::~DamageInfo(aDStack_140);
    PlantAction::~PlantAction(aPStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantSnapdragon::Fire
          (PlantSnapdragon *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  long lVar2;
  RealObject *this_00;
  float fVar3;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    FUN_04060c68(*(undefined8 *)(lVar2 + 0x70),param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    if (this[0x40] != (PlantSnapdragon)0x0) {
      local_c0 = local_c0 * 1.3;
    }
    DamageInfo::DamageInfo((DamageInfo *)aRStack_68,aDStack_c8);
    damageEntities(this,param_4,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    applyWarming(this,0x80000000,param_4);
    lVar2 = *(long *)(this + 0x10);
    fVar3 = (float)PVZ_T();
    this_00 = *(RealObject **)(this + 0x10);
    *(float *)(lVar2 + 0x128) = fVar3 + 0.7;
    std::string::string((string *)aRStack_68,"Play_SnapDragon");
    RealObject::PlayPositionalSound(this_00,(string *)aRStack_68,0.0);
    std::string::~string((string *)aRStack_68);
    nop();
    DamageInfo::~DamageInfo(aDStack_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapdragon::FindTargetDamageableGridItem(PlantWeapon) */

void PlantSnapdragon::FindTargetDamageableGridItem
               (undefined8 param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  (**(code **)(*param_2 + 0x2b8))(auStack_48,param_2,param_3);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_38,4,auStack_48,0xffffffff,0xffffffff);
  pcVar1 = *(code **)(*param_2 + 0x510);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  (*pcVar1)(param_1,param_2,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

