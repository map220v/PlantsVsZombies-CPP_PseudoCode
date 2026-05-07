// Class: PlantMulberry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMulberry::StaticClassInit() */

void PlantMulberry::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMulberry");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0f1e4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMulberry::StaticGetClass() */

long * PlantMulberry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMulberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMulberry::GetClass() const */

long * PlantMulberry::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMulberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMulberry::shootBerry(bool) */

void __thiscall PlantMulberry::shootBerry(PlantMulberry *this,bool param_1)

{
  undefined8 uVar1;
  uint uVar2;
  Plant *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  uVar2 = (uint)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar2 = 1;
  }
  *(uint *)(*(long *)(this + 0x10) + 0x150) = uVar2;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  uVar1 = PlantFramework::Fire
                    ((PlantFramework *)this,a_Stack_10,
                     *(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this_00 = *(Plant **)(this + 0x10);
  *(undefined4 *)(this_00 + 0x150) = 0xffffffff;
  Plant::GetExtraDPSmodifier(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMulberry::launchSuperGrenade() */

void __thiscall PlantMulberry::launchSuperGrenade(PlantMulberry *this)

{
  long lVar1;
  undefined8 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  uVar2 = PlantFramework::Fire
                    ((PlantFramework *)this,a_Stack_10,
                     *(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMulberry::launchFlashGrenade() */

void __thiscall PlantMulberry::launchFlashGrenade(PlantMulberry *this)

{
  long lVar1;
  undefined8 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  uVar2 = PlantFramework::Fire
                    ((PlantFramework *)this,a_Stack_10,
                     *(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMulberry::launchGasGrenade() */

void __thiscall PlantMulberry::launchGasGrenade(PlantMulberry *this)

{
  long lVar1;
  undefined8 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  uVar2 = PlantFramework::Fire
                    ((PlantFramework *)this,a_Stack_10,
                     *(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMulberry::DoNonSuperAttack() */

void __thiscall PlantMulberry::DoNonSuperAttack(PlantMulberry *this)

{
  int iVar1;
  RtObject *this_00;
  PlantAnimRig_Mulberry *pPVar2;
  long extraout_x0;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Mulberry>(this_00);
  if ((pPVar2 != (PlantAnimRig_Mulberry *)0x0) &&
     (iVar1 = FUN_03c0b9b8(*(undefined8 *)(this + 0x10)), 1 < iVar1)) {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (extraout_x0 != 0) {
      fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      fVar4 = *(float *)(extraout_x0 + 0x2b8);
      iVar1 = FUN_03c0b9b8(*(undefined8 *)(this + 0x10));
      if (2 < iVar1) {
        fVar4 = *(float *)(extraout_x0 + 700) * fVar4 + fVar4;
      }
      if (fVar3 < fVar4) {
        FUN_03c0b9e0(pPVar2 + 0x3b8,1);
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
/* PlantMulberry::PlayAttackAnimation() */

void __thiscall PlantMulberry::PlayAttackAnimation(PlantMulberry *this)

{
  char cVar1;
  RtObject *this_00;
  PlantAnimRig_Mulberry *pPVar2;
  long extraout_x0;
  float fVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Mulberry>(this_00);
  if (pPVar2 == (PlantAnimRig_Mulberry *)0x0) goto LAB_03c0e068;
  pPVar2 = pPVar2 + 0x3b8;
  FUN_03c0b9e0(pPVar2,0);
  cVar1 = FUN_03c0b9c0(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (extraout_x0 == 0) goto LAB_03c0e068;
    fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar5 = *(float *)(extraout_x0 + 0x2c0);
    fVar4 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    if (fVar3 < fVar4 + fVar5) {
      fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      if (fVar3 < *(float *)(extraout_x0 + 0x2c4)) {
        FUN_03c0b9e0(pPVar2,2);
      }
      else if (fVar3 < *(float *)(extraout_x0 + 0x2c8)) {
        FUN_03c0b9e0(pPVar2,3);
      }
      else {
        FUN_03c0b9e0(pPVar2,4);
      }
      goto LAB_03c0e068;
    }
  }
  DoNonSuperAttack(this);
LAB_03c0e068:
  PlantFramework::PlayAttackAnimation((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMulberry::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantMulberry::Fire(PlantMulberry *param_1)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *this;
  PlantAnimRig_Mulberry *pPVar3;
  undefined8 uVar4;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0xa8))(param_1,0);
    uVar4 = 0;
    goto LAB_03c0e1ec;
  }
  this = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mulberry>(this);
  if (pPVar3 != (PlantAnimRig_Mulberry *)0x0) {
    uVar2 = FUN_03c0b9e8(*(undefined4 *)(pPVar3 + 0x3b8));
    switch(uVar2) {
    case 0:
switchD_03c0e228_caseD_0:
      uVar4 = shootBerry(param_1,false);
      break;
    case 1:
      uVar4 = shootBerry(param_1,true);
      break;
    case 2:
      uVar4 = launchSuperGrenade(param_1);
      break;
    case 3:
      uVar4 = launchFlashGrenade(param_1);
      break;
    case 4:
      uVar4 = launchGasGrenade(param_1);
      break;
    default:
      goto switchD_03c0e228_default;
    }
LAB_03c0e1ec:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    return;
  }
switchD_03c0e228_default:
  this_00 = *(RealObject **)(param_1 + 0x10);
  std::string::string(asStack_10,"Play_Plant_Mulberry_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  goto switchD_03c0e228_caseD_0;
}


/* PlantMulberry::PlantMulberry() */

void __thiscall PlantMulberry::PlantMulberry(PlantMulberry *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06745f30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* PlantMulberry::StaticNew() */

PlantMulberry * PlantMulberry::StaticNew(void)

{
  PlantMulberry *this;
  
  this = ::operator_new(0x48);
  PlantMulberry(this);
  return this;
}


/* PlantMulberry::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, PlantWeapon) */

void __thiscall
PlantMulberry::LaunchProjectileAt
          (PlantMulberry *this,Projectile *param_1,SexyVector3 *param_2,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_03c0e7f0(*(undefined8 *)(this + 0x10));
  if (param_4 == 1) {
    fVar2 = *(float *)(lVar1 + 0x2d8);
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,fVar2 * 0.1);
    fVar3 = *(float *)(lVar1 + 0x2d4);
    fVar4 = fVar4 + fVar2;
    fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,fVar3 * 0.1);
    fVar2 = fVar2 + fVar3;
  }
  else if (param_4 == 2) {
    fVar2 = *(float *)(lVar1 + 0x2d8);
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,fVar2 * 0.3);
    fVar3 = *(float *)(lVar1 + 0x2d4);
    fVar4 = fVar4 + fVar2;
    fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,fVar3 * 0.1);
    fVar2 = fVar2 + fVar3;
  }
  else {
    fVar4 = *(float *)(lVar1 + 0x2d0);
    fVar2 = *(float *)(lVar1 + 0x2cc);
  }
  Projectile::LaunchAt(param_1,param_2,fVar4,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMulberry::ApplyPlantfood() */

void __thiscall PlantMulberry::ApplyPlantfood(PlantMulberry *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  *(undefined4 *)(this + 0x40) = 0;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Plant_Mulberry_Plantfood");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMulberry::~PlantMulberry() */

void __thiscall PlantMulberry::~PlantMulberry(PlantMulberry *this)

{
  *(undefined ***)this = &PTR_GetClass_06745f30;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMulberry::~PlantMulberry() */

void __thiscall PlantMulberry::~PlantMulberry(PlantMulberry *this)

{
  ~PlantMulberry(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMulberry::DoSpecial(int) */

void PlantMulberry::DoSpecial(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  PlantFramework *this;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  RtWeakPtrBase *pRVar16;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var17;
  float *pfVar18;
  SharkMinion *pSVar19;
  Projectile *pPVar20;
  Zombie *this_00;
  RealObject *this_01;
  int extraout_w1;
  int iVar21;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  Plant *pPVar22;
  float fVar23;
  float fVar24;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  int local_40;
  int local_3c;
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  this = (PlantFramework *)(ulong)(uint)param_1;
  bVar5 = false;
  local_8 = ___stack_chk_guard;
  Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
  Board::CountDamagableGridItemsOnScreen();
  lVar11 = FUN_03c0b9f4(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  uVar12 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar12,0x29);
  while ((bVar6 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), !bVar5 && (bVar6)))
  {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    cVar7 = (**(code **)(*plVar14 + 0x328))();
    if (cVar7 == '\0') {
      plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      cVar7 = (**(code **)(*plVar14 + 0x330))();
      if (cVar7 == '\0') {
        this_00 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
        cVar7 = Zombie::IsInvisible(this_00);
        if (cVar7 == '\0') {
          this_01 = (RealObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          cVar7 = RealObject::IsOnOpposingTeam(this_01,*(RealObject **)(this + 0x10));
          if (cVar7 != '\0') {
            uVar12 = *(undefined8 *)(this + 0x28);
            lVar15 = FUN_03c0b9f4(uVar12,*(undefined8 *)(this + 0x30));
            lVar13 = 0;
            do {
              if (lVar13 == lVar15) {
                p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
                pfVar18 = (float *)std::
                                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::_M_leftmost(p_Var17);
                fVar23 = *pfVar18;
                fVar24 = pfVar18[1];
                if (fVar23 <= 800.0) {
                  cVar7 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
                  uVar8 = 5;
                  if ((cVar7 != '\0') && (uVar8 = 5, *(int *)(this + 0x40) == 7)) {
                    uVar8 = 6;
                  }
                  bVar5 = true;
                  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar8;
                  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar23,fVar24,50.0);
                  pPVar22 = *(Plant **)(this + 0x10);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48
                            );
                  pSVar19 = (SharkMinion *)
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
                  uVar8 = SharkMinion::getRow(pSVar19);
                  pPVar20 = (Projectile *)
                            Plant::Fire(pPVar22,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar8,1)
                  ;
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                  uVar12 = FUN_03c0b9a0(*(undefined8 *)(pPVar20 + 0xe0));
                  uVar12 = operator|(uVar12,0x2000);
                  FUN_03c0b9a4(pPVar20 + 0xe0,uVar12);
                  LaunchProjectileAt((PlantMulberry *)this,pPVar20,aRStack_38,1);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48
                            );
                  Projectile::SetTarget(pPVar20,(RtWeakPtr *)&local_40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48
                            );
                  std::
                  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                               *)(this + 0x28),(RtWeakPtr *)&local_40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
                  iVar21 = extraout_w1_02;
                  goto LAB_03c0f550;
                }
                break;
              }
              pRVar16 = (RtWeakPtrBase *)FUN_03c0ba00(uVar12,lVar13);
              cVar7 = Sexy::RtWeakPtrBase::operator==(pRVar16,(RtWeakPtrBase *)aRStack_48);
              lVar13 = lVar13 + 1;
            } while (cVar7 == '\0');
          }
        }
      }
    }
    bVar5 = false;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar21 = extraout_w1;
LAB_03c0f550:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar21);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar12 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar12,0x2f);
  do {
    bVar6 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if ((bVar5) || (!bVar6)) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      lVar13 = FUN_03c0b9f4(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      if (lVar11 == lVar13) {
        cVar7 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        uVar8 = 5;
        if ((cVar7 != '\0') && (uVar8 = 5, *(int *)(this + 0x40) == 7)) {
          uVar8 = 6;
        }
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar8;
        iVar9 = PlantFramework::Rand(this);
        iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
        iVar21 = (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar1) + 1;
        iVar3 = 0;
        if (iVar21 != 0) {
          iVar3 = iVar9 / iVar21;
        }
        iVar10 = PlantFramework::Rand(this);
        iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
        iVar4 = 0;
        if (iVar2 != 0) {
          iVar4 = iVar10 / iVar2;
        }
        BoardTransforms::GridToBoardSpacePos
                  ((BoardTransforms *)(ulong)(uint)(iVar1 + (iVar9 - iVar3 * iVar21)),
                   iVar10 - iVar4 * iVar2,iVar2);
        EATextSquish::Vec3::Vec3((Vec3 *)aIStack_28,(float)local_40,(float)local_3c,0.0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_38);
        lVar11 = Plant::Fire(*(Plant **)(this + 0x10),
                             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             aRStack_38,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        uVar12 = FUN_03c0b9a0(*(undefined8 *)(lVar11 + 0xe0));
        uVar12 = operator|(uVar12,0x2000);
        FUN_03c0b9a4((undefined8 *)(lVar11 + 0xe0),uVar12);
        LaunchProjectileAt((PlantMulberry *)this,lVar11,aIStack_28,1);
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      }
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    cVar7 = (**(code **)(*plVar14 + 0x200))();
    if (cVar7 != '\0') {
      uVar12 = *(undefined8 *)(this + 0x28);
      lVar15 = FUN_03c0b9f4(uVar12,*(undefined8 *)(this + 0x30));
      lVar13 = 0;
      do {
        if (lVar13 == lVar15) {
          p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          pfVar18 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(p_Var17);
          fVar24 = *pfVar18;
          fVar23 = pfVar18[1];
          cVar7 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          uVar8 = 5;
          if ((cVar7 != '\0') && (uVar8 = 5, *(int *)(this + 0x40) == 7)) {
            uVar8 = 6;
          }
          bVar5 = true;
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar8;
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar24,fVar23,50.0);
          pPVar22 = *(Plant **)(this + 0x10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          pSVar19 = (SharkMinion *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          uVar8 = SharkMinion::getRow(pSVar19);
          pPVar20 = (Projectile *)
                    Plant::Fire(pPVar22,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar8,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          uVar12 = FUN_03c0b9a0(*(undefined8 *)(pPVar20 + 0xe0));
          uVar12 = operator|(uVar12,0x2000);
          FUN_03c0b9a4(pPVar20 + 0xe0,uVar12);
          LaunchProjectileAt((PlantMulberry *)this,pPVar20,aRStack_38,1);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          Projectile::SetTarget(pPVar20,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x28),(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          iVar21 = extraout_w1_00;
          goto LAB_03c0f6fc;
        }
        pRVar16 = (RtWeakPtrBase *)FUN_03c0ba00(uVar12,lVar13);
        cVar7 = Sexy::RtWeakPtrBase::operator==(pRVar16,(RtWeakPtrBase *)aRStack_48);
        lVar13 = lVar13 + 1;
      } while (cVar7 == '\0');
    }
    bVar5 = false;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar21 = extraout_w1_01;
LAB_03c0f6fc:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar21);
  } while( true );
}

