// Class: PlantSplitpea


/* PlantSplitpea::PlantSplitpea() */

void __thiscall PlantSplitpea::PlantSplitpea(PlantSplitpea *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c52f0;
  ZombossSkyCityLineShoot::ZombossSkyCityLineShoot((ZombossSkyCityLineShoot *)(this + 0x28));
  ZombossSkyCityLineShoot::ZombossSkyCityLineShoot((ZombossSkyCityLineShoot *)(this + 0x44));
  return;
}


/* PlantSplitpea::StaticNew() */

PlantSplitpea * PlantSplitpea::StaticNew(void)

{
  PlantSplitpea *this;
  
  this = ::operator_new(0x60);
  PlantSplitpea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::StaticClassInit() */

void PlantSplitpea::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSplitpea");
    (*pcVar2)(plVar1,asStack_10,FUN_04068470,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSplitpea::StaticGetClass() */

long * PlantSplitpea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSplitpea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSplitpea::GetClass() const */

long * PlantSplitpea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSplitpea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSplitpea::reverseProjectile(Projectile*) */

void __thiscall PlantSplitpea::reverseProjectile(PlantSplitpea *this,Projectile *param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)Projectile::GetVelocityScale(param_1);
  fVar2 = *pfVar1;
  Projectile::SetVelocityScale(param_1,-fVar2,pfVar1[1],pfVar1[2]);
  FUN_040676e8(param_1 + 0xd4,0.0 < fVar2);
  return;
}


/* PlantSplitpea::~PlantSplitpea() */

void __thiscall PlantSplitpea::~PlantSplitpea(PlantSplitpea *this)

{
  *(undefined ***)this = &PTR_GetClass_067c52f0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSplitpea::~PlantSplitpea() */

void __thiscall PlantSplitpea::~PlantSplitpea(PlantSplitpea *this)

{
  ~PlantSplitpea(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::UpdatePlantfood() */

void __thiscall PlantSplitpea::UpdatePlantfood(PlantSplitpea *this)

{
  float *pfVar1;
  long lVar2;
  PlantAction *pPVar3;
  Plant *pPVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar1,pfVar1[1],pfVar1[2]);
  pPVar4 = *(Plant **)(this + 0x10);
  fVar5 = *(float *)(pPVar4 + 0xc4);
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pPVar3 = (PlantAction *)FUN_0406772c(*(undefined8 *)(lVar2 + 0x70),0);
  PeashooterPlantfood::Update
            ((PeashooterPlantfood *)(this + 0x28),pPVar4,(SexyVector3 *)aVStack_18,fVar5,pPVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pPVar4 = *(Plant **)(this + 0x10);
  fVar5 = *(float *)(pPVar4 + 0xc4);
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pPVar3 = (PlantAction *)FUN_0406772c(*(undefined8 *)(lVar2 + 0x70),1);
  PeashooterPlantfood::Update
            ((PeashooterPlantfood *)(this + 0x44),pPVar4,(SexyVector3 *)aVStack_18,fVar5,pPVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::FireRigtWithAvatarPlantFood() */

void __thiscall PlantSplitpea::FireRigtWithAvatarPlantFood(PlantSplitpea *this)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(Plant **)(this + 0x10) + 200) == 10) &&
     (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 != '\0')) {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = FUN_0406772c(*(undefined8 *)(lVar2 + 0x70),
                         (long)*(int *)(*(long *)(this + 0x10) + 0x150));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    fVar8 = *(float *)(this_00 + 0xc4);
    fVar10 = *pfVar3;
    fVar9 = pfVar3[2];
    fVar6 = *(float *)(lVar2 + 0x6c);
    fVar5 = *(float *)(lVar2 + 0x68);
    fVar7 = pfVar3[1];
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(lVar2 + 8));
    lVar2 = Board::AddProjectile
                      ((Board *)(fVar10 + fVar5 * fVar8),fVar7,fVar9 - fVar8 * fVar6,uVar4,
                       aRStack_10,*(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar4 = FUN_040676dc(*(undefined8 *)(lVar2 + 0xe0));
    uVar4 = operator|(uVar4,0x2000);
    FUN_040676e0((undefined8 *)(lVar2 + 0xe0),uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantSplitpea::Fire(PlantSplitpea *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4
                   )

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  Plant *pPVar6;
  float fVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 == '\0') {
    iVar4 = FUN_04067724(*(undefined8 *)(this + 0x10));
    if (2 < iVar4) {
      fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      cVar2 = Plant::IsSkillCheat(*(Plant **)(this + 0x10));
      if (((cVar2 != '\0') &&
          (cVar2 = Plant::IsSkillActivate(*(Plant **)(this + 0x10)), cVar2 != '\0')) ||
         (bVar3 = Plant::IsSkillCheat(*(Plant **)(this + 0x10)), bVar3 < (fVar7 <= 0.6))) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_18);
        pPVar6 = *(Plant **)(this + 0x10);
        uVar1 = *(undefined4 *)(pPVar6 + 0x110);
        std::string::string((string *)aRStack_10,"FirePeaDefault");
        uVar5 = Plant::SpecialFire(pPVar6,a_Stack_18,uVar1,(string *)aRStack_10);
        std::string::~string((string *)aRStack_10);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18)
        ;
        goto LAB_04067c68;
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar5 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    uVar5 = 0;
  }
LAB_04067c68:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::FireLeft() */

void __thiscall PlantSplitpea::FireLeft(PlantSplitpea *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  Projectile *pPVar6;
  Projectile *pPVar7;
  undefined8 *puVar8;
  Plant *this_00;
  undefined8 uVar9;
  undefined8 uVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  RealObject *this_01;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  this_00 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) == 10) {
    cVar1 = Plant::GetAvatarEnable(this_00);
    if (cVar1 == '\0') {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar4 = FUN_0406772c(*(undefined8 *)(lVar4 + 0x70),
                           (long)*(int *)(*(long *)(this + 0x10) + 0x150));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var11);
      fVar15 = *(float *)(p_Var11 + 0xc4);
      fVar17 = *pfVar5;
      fVar16 = pfVar5[2];
      fVar13 = *(float *)(lVar4 + 0x6c);
      fVar12 = *(float *)(lVar4 + 0x68);
      fVar14 = pfVar5[1];
      uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar4 + 8));
      pPVar6 = (Projectile *)
               Board::AddProjectile
                         ((Board *)(fVar17 + fVar12 * fVar15),fVar14,fVar16 - fVar15 * fVar13,uVar10
                          ,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(this + 0x10),0
                         );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      pPVar7 = pPVar6 + 0xe0;
      uVar10 = FUN_040676dc(*(undefined8 *)pPVar7);
      uVar9 = 0x2000;
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar4 = FUN_0406772c(*(undefined8 *)(lVar4 + 0x70),
                           (long)*(int *)(*(long *)(this + 0x10) + 0x150));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var11);
      fVar15 = *(float *)(p_Var11 + 0xc4);
      fVar17 = *pfVar5;
      fVar16 = pfVar5[2];
      fVar13 = *(float *)(lVar4 + 0x6c);
      fVar12 = *(float *)(lVar4 + 0x68);
      fVar14 = pfVar5[1];
      uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar4 + 8));
      pPVar6 = (Projectile *)
               Board::AddProjectile
                         ((Board *)(fVar17 + fVar12 * fVar15),fVar14,fVar16 - fVar15 * fVar13,uVar10
                          ,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(this + 0x10),0
                         );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      pPVar7 = pPVar6 + 0xe0;
      uVar10 = FUN_040676dc(*(undefined8 *)pPVar7);
      uVar9 = 0x100;
    }
    uVar10 = operator|(uVar10,uVar9);
    FUN_040676e0(pPVar7,uVar10);
    reverseProjectile(this,pPVar6);
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_18,"Play_Repeater_Cannon_Fire");
    RealObject::PlayPositionalSound(this_01,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
    goto LAB_04068048;
  }
  if (*(int *)(this_00 + 200) == 5) goto LAB_04068048;
  *(undefined4 *)(this_00 + 0x150) = 1;
  iVar3 = FUN_04067724(this_00);
  if (iVar3 < 2) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    pPVar6 = (Projectile *)
             Plant::Fire(*(Plant **)(this + 0x10),
                         (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18
                         ,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    reverseProjectile(this,pPVar6);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
LAB_04068108:
    pPVar7 = (Projectile *)
             Plant::Fire(*(Plant **)(this + 0x10),(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,
                         *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    reverseProjectile(this,pPVar7);
  }
  else {
    fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    cVar1 = Plant::IsSkillCheat(*(Plant **)(this + 0x10));
    if (((cVar1 == '\0') ||
        (cVar1 = Plant::IsSkillActivate(*(Plant **)(this + 0x10)), cVar1 == '\0')) &&
       (bVar2 = Plant::IsSkillCheat(*(Plant **)(this + 0x10)), (fVar12 <= 0.4) <= bVar2)) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
      pPVar6 = (Projectile *)
               Plant::Fire(*(Plant **)(this + 0x10),
                           (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_18,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      reverseProjectile(this,pPVar6);
      iVar3 = PlantFramework::Rand((PlantFramework *)this);
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 5;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar4 = FUN_0406772c(*(undefined8 *)(lVar4 + 0x70),
                           (long)*(int *)(*(long *)(this + 0x10) + 0x150));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var11);
      fVar15 = *(float *)(p_Var11 + 0xc4);
      fVar17 = *pfVar5;
      fVar16 = pfVar5[2];
      fVar13 = *(float *)(lVar4 + 0x6c);
      fVar12 = *(float *)(lVar4 + 0x68);
      fVar14 = pfVar5[1];
      uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar4 + 8));
      pPVar6 = (Projectile *)
               Board::AddProjectile
                         ((Board *)(fVar17 + fVar12 * fVar15),fVar14,fVar16 - fVar15 * fVar13,uVar10
                          ,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(this + 0x10),0
                         );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      uVar10 = FUN_040676dc(*(undefined8 *)(pPVar6 + 0xe0));
      uVar10 = operator|(uVar10,0x100);
      FUN_040676e0(pPVar6 + 0xe0,uVar10);
      FUN_040676e8(pPVar6 + 0xd4,1);
      reverseProjectile(this,pPVar6);
      iVar3 = PlantFramework::Rand((PlantFramework *)this);
    }
    if (0.4 < (float)iVar3 * 4.656613e-10) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
      goto LAB_04068108;
    }
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 5;
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar4 = FUN_0406772c(*(undefined8 *)(lVar4 + 0x70),
                         (long)*(int *)(*(long *)(this + 0x10) + 0x150));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var11);
    fVar13 = *(float *)(lVar4 + 0x6c);
    fVar17 = *pfVar5;
    fVar16 = pfVar5[2];
    fVar15 = *(float *)(p_Var11 + 0xc4);
    fVar12 = *(float *)(lVar4 + 0x68);
    fVar14 = pfVar5[1];
    uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar4 + 8));
    pPVar7 = (Projectile *)
             Board::AddProjectile
                       ((Board *)(fVar17 + fVar12 * fVar15),fVar14,fVar16 - fVar15 * fVar13,uVar10,
                        (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar10 = FUN_040676dc(*(undefined8 *)(pPVar6 + 0xe0));
    uVar10 = operator|(uVar10,0x100);
    FUN_040676e0(pPVar7 + 0xe0,uVar10);
    FUN_040676e8(pPVar7 + 0xd4,1);
    reverseProjectile(this,pPVar7);
  }
  puVar8 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)pPVar7);
  local_18 = (float)*puVar8;
  local_10 = *(undefined4 *)(puVar8 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar8 >> 0x20),local_18 + 40.0);
  (**(code **)(*(long *)pPVar7 + 0x78))(pPVar7,&local_18);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
LAB_04068048:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantSplitpea::OnAnimCommand(std::string const&, std::string const&) */

bool PlantSplitpea::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    bVar2 = std::operator==(param_2,"use_action2");
    if (!bVar2) {
      return bVar2;
    }
    cVar1 = LawnApp::IsInModule(gLawnApp,1);
    if (cVar1 == '\0') {
      FireLeft((PlantSplitpea *)param_1);
      goto LAB_04068404;
    }
  }
  if ((DAT_06aea238 & 1) != 0) {
    FireLeft((PlantSplitpea *)param_1);
  }
  DAT_06aea238 = DAT_06aea238 + 1;
LAB_04068404:
  FireRigtWithAvatarPlantFood((PlantSplitpea *)param_1);
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::ApplyPlantfood() */

void __thiscall PlantSplitpea::ApplyPlantfood(PlantSplitpea *this)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x80))(0x41200000);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 5;
  FUN_04067700(aRStack_10,lVar2);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar3 = *(float *)(lVar2 + 0x38);
  lVar2 = FUN_040686c4(*(undefined8 *)(this + 0x10));
  ZombossSkyCityLineShoot::Start
            ((ZombossSkyCityLineShoot *)(this + 0x28),fVar3,*(int *)(lVar2 + 0x2b8),1.0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  FUN_04067700(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar3 = *(float *)(lVar2 + 0x38);
  lVar2 = FUN_040686c4(*(undefined8 *)(this + 0x10));
  ZombossSkyCityLineShoot::Start
            ((ZombossSkyCityLineShoot *)(this + 0x44),fVar3,*(int *)(lVar2 + 700),1.0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::NullProfileData::SetGamepadIndex((NullProfileData *)(this + 0x44),'\x01');
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantSplitpea::FindTargetZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               long param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ResourceInfo *pRVar5;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x29);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1_00);
LAB_04068938:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1_00);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    uVar4 = operator|(1,0x200);
    uVar4 = operator|(uVar4,0x800);
    uVar4 = operator|(uVar4,0x2000);
    uVar3 = operator|(uVar4,0x8000);
    cVar1 = Zombie::MatchesAny((Zombie *)pRVar5,uVar3,*(undefined8 *)(param_1 + 0x10));
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_04068938;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::PlayAttackAnimation() */

void __thiscall PlantSplitpea::PlayAttackAnimation(PlantSplitpea *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ResourceInfo *this_00;
  long *extraout_x0;
  float *pfVar7;
  long *plVar8;
  int extraout_w1;
  int extraout_w1_00;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
    uVar4 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar4 = (**(code **)(*(long *)this + 400))(this,0);
  }
  bVar10 = false;
  bVar11 = false;
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar5 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(this + 0x10) + 0x114));
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x29);
  bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar2) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
      cVar3 = BoardEntity::IsInRow((BoardEntity *)this_00,iVar1);
      if (cVar3 != '\0') {
        pcVar9 = *(code **)(*(long *)this_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        cVar3 = (*pcVar9)(this_00,aRStack_30,0);
        if ((cVar3 == '\0') ||
           (cVar3 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar4), cVar3 == '\0')) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
joined_r0x04068ad4:
          if (!bVar10) goto LAB_04068adc;
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_00);
          if (*pfVar7 < (float)iVar5) {
            bVar11 = true;
            goto joined_r0x04068ad4;
          }
          bVar10 = true;
        }
        if (bVar11) {
          bVar10 = true;
          bVar11 = true;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          break;
        }
      }
LAB_04068adc:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar2);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2f);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
    if ((bVar10) && (bVar11)) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_04068c68;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    nop();
    iVar5 = FUN_040676f8(*(undefined4 *)((long)extraout_x0 + 0x134));
    if ((iVar5 == *(int *)(*(long *)(this + 0x10) + 0x110)) &&
       (cVar3 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar3 != '\0')) {
      iVar5 = FUN_040676f4((int)extraout_x0[0x26]);
      if (iVar5 < iVar1) {
        bVar11 = true;
      }
      else {
        bVar10 = true;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_00);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  cVar3 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar3 == '\0') {
    if (bVar11) {
      if (bVar10) goto LAB_04068c68;
      plVar8 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar9 = *(code **)(*plVar8 + 0x78);
      std::string::string((string *)aRStack_30,"attack3");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_28);
    }
    else {
      if (!bVar10) goto LAB_04068cd0;
      plVar8 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar9 = *(code **)(*plVar8 + 0x78);
      std::string::string((string *)aRStack_30,"attack");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_28);
    }
  }
  else {
LAB_04068c68:
    plVar8 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar9 = *(code **)(*plVar8 + 0x78);
    std::string::string((string *)aRStack_30,"attack2");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_28);
  }
  (*pcVar9)(plVar8,(string *)aRStack_30,0,0,aIStack_28);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aIStack_28);
  std::string::~string((string *)aRStack_30);
  nop();
LAB_04068cd0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::CancelPlantfood() */

void __thiscall PlantSplitpea::CancelPlantfood(PlantSplitpea *this)

{
  char cVar1;
  long *plVar2;
  PopAnimRig *pPVar3;
  Plant *this_00;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) == 5) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x88))();
    this_00 = *(Plant **)(this + 0x10);
    *(undefined4 *)(this_00 + 200) = 10;
    cVar1 = Plant::GetAvatarEnable(this_00);
    if (cVar1 == '\0') {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"attack3");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_68,asStack_60);
    }
    else {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"plantfood");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_68,asStack_60);
    }
    PopAnimRig::PlayAndStop
              (pPVar3,asStack_58,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSplitpea::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantSplitpea::FindTargetDamageableGridItem
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long *extraout_x0;
  ulong uVar3;
  ulong uVar4;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::Insets::Insets
            (aIStack_30,0,*(int *)(*(long *)(param_1 + 0x10) + 0x110),
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),1);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,aIStack_30
            );
  uVar3 = 0;
  do {
    uVar4 = uVar3;
    uVar1 = local_20;
    uVar3 = FUN_0406773c(local_20,local_18);
    if (uVar3 <= uVar4) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1_00);
      goto LAB_0406909c;
    }
    FUN_04067748(uVar1,uVar4);
    nop();
    cVar2 = (**(code **)(*extraout_x0 + 0x200))();
    uVar3 = uVar4 + 1;
  } while (cVar2 == '\0');
  FUN_04067748(local_20,uVar4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aIStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
LAB_0406909c:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}

