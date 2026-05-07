// Class: PlantKiwiFruit


/* PlantKiwiFruit::Initialize() */

void __thiscall PlantKiwiFruit::Initialize(PlantKiwiFruit *this)

{
  undefined4 uVar1;
  
  this[0x28] = (PlantKiwiFruit)0x0;
  this[0x48] = (PlantKiwiFruit)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x2c) = uVar1;
  PlantFramework::Initialize((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::StaticClassInit() */

void PlantKiwiFruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantKiwiFruit");
    (*pcVar2)(plVar1,asStack_10,FUN_040efd0c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantKiwiFruit::StaticGetClass() */

long * PlantKiwiFruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantKiwiFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantKiwiFruit::GetClass() const */

long * PlantKiwiFruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantKiwiFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantKiwiFruit::reduceSmallKiwiCount() */

void __thiscall PlantKiwiFruit::reduceSmallKiwiCount(PlantKiwiFruit *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x4c) + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)(this + 0x4c) = iVar1;
  return;
}


/* PlantKiwiFruit::ApplyPlantfood() */

void __thiscall PlantKiwiFruit::ApplyPlantfood(PlantKiwiFruit *this)

{
  float fVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  fVar1 = (float)PVZ_T();
  this[0x28] = (PlantKiwiFruit)0x0;
  *(float *)(this + 0x2c) = fVar1 + 2.8;
  return;
}


/* PlantKiwiFruit::UpdatePlantfood() */

void __thiscall PlantKiwiFruit::UpdatePlantfood(PlantKiwiFruit *this)

{
  char cVar1;
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  cVar1 = PopAnimRig::IsPlayingAnything(this_00);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x228))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::PlaySuperAnimation() */

void __thiscall PlantKiwiFruit::PlaySuperAnimation(PlantKiwiFruit *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig *pPVar4;
  undefined1 *__n;
  UIEasyButtonWidget *this_00;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack");
  nop();
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  cVar1 = FUN_040ee888(this_00);
  if (cVar1 != '\0') {
    std::string::append(asStack_40,"plantfood03",(size_t)__n);
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  }
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
  if (iVar2 == -1) {
    std::string::~string(asStack_40);
  }
  else {
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,2);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::tossStuckZombies() */

void __thiscall PlantKiwiFruit::tossStuckZombies(PlantKiwiFruit *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  RealObject *this_01;
  ZombieTosserSubSystem *pZVar6;
  ResourceInfo *pRVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x28] == (PlantKiwiFruit)0x0) {
    this[0x28] = (PlantKiwiFruit)0x1;
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,pRVar3);
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_78);
      if (cVar2 == '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        cVar2 = (**(code **)(*plVar4 + 0x328))();
        if (cVar2 != '\0') goto LAB_040ef5a8;
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        cVar2 = (**(code **)(*plVar4 + 0x330))();
        if (cVar2 != '\0') goto LAB_040ef5a8;
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        puVar5 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        local_60 = *puVar5;
        local_58 = 0;
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        (**(code **)(*plVar4 + 600))();
        this_01 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        RealObject::SetUseGroundClipRect(this_01,true);
        pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_78);
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)0x43160000,0x3f800000,pZVar6,pRVar7,&local_60,aRStack_50
                   ,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      }
      else {
LAB_040ef5a8:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantKiwiFruit::UpdateActions() */

void __thiscall PlantKiwiFruit::UpdateActions(PlantKiwiFruit *this)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x2c);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= fVar3) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar2;
  tossStuckZombies(this);
  return;
}


/* PlantKiwiFruit::PlantKiwiFruit() */

void __thiscall PlantKiwiFruit::PlantKiwiFruit(PlantKiwiFruit *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantKiwiFruit)0x0;
  *(undefined ***)this = &PTR_GetClass_067df880;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantKiwiFruit::StaticNew() */

PlantKiwiFruit * PlantKiwiFruit::StaticNew(void)

{
  PlantKiwiFruit *this;
  
  this = ::operator_new(0x50);
  PlantKiwiFruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantKiwiFruit::normalFire
          (PlantKiwiFruit *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  KiwiFruitProjectile *this_00;
  Plant *pPVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pPVar3 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(pPVar3 + 0x150) = 0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar2 = Plant::Fire(pPVar3,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  nop();
  lVar4 = *(long *)(this + 0x10);
  iVar1 = FUN_040ee878(*(undefined4 *)(lVar4 + 0x50));
  lVar4 = FUN_040ef84c(lVar4);
  if (iVar1 < 2) {
    fVar6 = *(float *)(lVar4 + 0x2b8);
  }
  else {
    fVar6 = *(float *)(lVar4 + 700);
  }
  fVar5 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  KiwiFruitProjectile::SetLevelAttack(this_00,*(float *)(lVar4 + 0x2c4),fVar5 + fVar6,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantKiwiFruit::zombieIsBlacklisted(PlantKiwiFruit *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (Zombie *)0x0) ||
     ((((bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar1 &&
        (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1)) &&
       (cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0')) &&
      (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0')))) {
    lVar3 = FUN_040ef84c(*(undefined8 *)(this + 0x10));
    uVar4 = FUN_040ef450(*(undefined8 *)(lVar3 + 0x2d0));
    uVar5 = FUN_040ef4a0(*(undefined8 *)(lVar3 + 0x2d8));
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,lVar6 + 8);
    local_10 = FUN_040ef4a0(*(undefined8 *)(lVar3 + 0x2d8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  }
  else {
    bVar1 = true;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantKiwiFruit::CancelPlantfood() */

void __thiscall PlantKiwiFruit::CancelPlantfood(PlantKiwiFruit *this)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x28] = (PlantKiwiFruit)0x0;
  return;
}


/* PlantKiwiFruit::~PlantKiwiFruit() */

void __thiscall PlantKiwiFruit::~PlantKiwiFruit(PlantKiwiFruit *this)

{
  *(undefined ***)this = &PTR_GetClass_067df880;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantKiwiFruit::~PlantKiwiFruit() */

void __thiscall PlantKiwiFruit::~PlantKiwiFruit(PlantKiwiFruit *this)

{
  ~PlantKiwiFruit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::superFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantKiwiFruit::superFire
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4,
               RtWeakPtrBase *param_5,undefined8 param_6,undefined4 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  KiwiFruitSmallProjectile *this;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  int *piVar7;
  Plant *pPVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar9;
  float fVar10;
  Zombie *local_38;
  undefined8 local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_18 [2];
  long local_8;
  
  pPVar8 = (Plant *)param_4[2];
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(pPVar8 + 0x150) = 3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,param_5);
  uVar2 = Plant::Fire(pPVar8,(RtWeakPtr<Sexy::SoundResource> *)local_18,param_6,3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  nop();
  lVar3 = FUN_040ef84c(param_4[2]);
  uVar4 = (**(code **)(*param_4 + 0x3f8))(param_4,param_7);
  lVar5 = FUN_040ee8b4(*(undefined8 *)(lVar3 + 0x70),3);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)param_4[2];
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  fVar10 = *pfVar6;
  KiwiFruitSmallProjectile::setPlantData
            ((KiwiFruitSmallProjectile *)((float)*(int *)(lVar5 + 0x60) + fVar10),this,uVar4,this_00
            );
  KiwiFruitSmallProjectile::SetAliveTime(this,*(float *)(lVar3 + 0x2e8));
  local_38 = (Zombie *)Sexy::RtWeakPtr<Zombie>::GetPtr((RtWeakPtr<Zombie> *)param_5);
  lVar3 = Projectile::GetProps((Projectile *)this);
  fVar9 = (float)ProjectileHelpers::RandomizeVectorFromRange((vector *)(lVar3 + 0x78));
  local_28 = fVar9;
  local_24 = fVar10;
  local_20 = param_3;
  local_30 = std::map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>::
             find((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>> *
                  )m_targetList,&local_38);
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)m_targetList);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
  if (bVar1) {
    piVar7 = (int *)std::
                    map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                    ::operator[]((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                                  *)m_targetList,&local_38);
    *piVar7 = *piVar7 + 1;
  }
  else {
    local_30 = CONCAT44(local_30._4_4_,1);
    std::pair<Sexy::PIEmitter*const,int>::pair<Sexy::PIEmitter*&,int&,void>
              ((pair<Sexy::PIEmitter*const,int> *)local_18,(PIEmitter **)&local_38,(int *)&local_30)
    ;
    std::map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>::
    insert<std::pair<Zombie*,int>,void>
              ((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>> *)
               m_targetList,(pair *)local_18);
  }
  std::map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>::operator[]
            ((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>> *)
             m_targetList,&local_38);
  Projectile::SetVelocity((Projectile *)this,fVar9,fVar10,param_3);
  *(int *)((long)param_4 + 0x4c) = *(int *)((long)param_4 + 0x4c) + 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantKiwiFruit::Fire
          (PlantKiwiFruit *this,RtWeakPtr<Zombie> *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  Zombie *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    local_20 = (Zombie *)Sexy::RtWeakPtr<Zombie>::GetPtr(param_2);
    if ((this[0x48] != (PlantKiwiFruit)0x0) && (*(int *)(this + 0x4c) < 2)) {
      local_18 = std::
                 map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>::
                 find((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                       *)m_targetList,&local_20);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)m_targetList);
      cVar1 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
      if ((cVar1 != '\0') ||
         (piVar3 = (int *)std::
                          map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                          ::operator[]((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                                        *)m_targetList,&local_20), *piVar3 < 2)) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_2);
        normalFire(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10,param_3,param_4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_2);
        uVar2 = superFire(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10,param_3,param_4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        goto LAB_040f0e3c;
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_2);
    uVar2 = normalFire(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  else {
    uVar2 = 0;
    (**(code **)(*(long *)this + 0xa8))(this,0);
  }
LAB_040f0e3c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::FindTargetAndFire(PlantWeapon) */

void PlantKiwiFruit::FindTargetAndFire(PlantFramework *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  float fVar6;
  ResourceInfo *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    lVar3 = FUN_040ef84c(*(undefined8 *)(param_1 + 0x10));
    iVar2 = FUN_040ee880(*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 5) {
      param_1[0x48] = (PlantFramework)0x0;
      fVar6 = (float)PlantFramework::Rand(param_1,1.0);
      if ((fVar6 < *(float *)(lVar3 + 0x2ec)) ||
         (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar3 == 0)) {
        PlantFramework::FindTargetZombie((RtWeakPtr *)&local_10,param_1,3);
        local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        if (*(int *)(param_1 + 0x4c) < 2) {
          local_18 = std::
                     map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                     ::find((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                             *)m_targetList,(Zombie **)&local_20);
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)m_targetList);
          cVar1 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_18,(exception_ptr *)&local_10);
          if ((cVar1 != '\0') ||
             (piVar4 = (int *)std::
                              map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                              ::operator[]((map<Zombie*,int,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,int>>>
                                            *)m_targetList,(Zombie **)&local_20), *piVar4 < 2)) {
            param_1[0x48] = (PlantFramework)0x1;
            uVar5 = 1;
            (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
            goto LAB_040f0f88;
          }
        }
      }
      else {
        PlantFramework::FindTargetZombie((RtWeakPtr *)&local_10,param_1,3);
        local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      }
      uVar5 = 1;
      (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
    }
    else {
      uVar5 = 1;
      (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
    }
  }
LAB_040f0f88:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::dealPlantfoodDamage() */

void __thiscall PlantKiwiFruit::dealPlantfoodDamage(PlantKiwiFruit *this)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  Zombie *this_00;
  ResourceInfo *pRVar10;
  ulong uVar11;
  long *plVar12;
  RtObject *this_01;
  SexyVector3 *pSVar13;
  undefined8 uVar14;
  RealObject *pRVar15;
  ulong uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  RtWeakPtr<Sexy::SoundResource> aRStack_f8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  DamageInfo aDStack_d0 [96];
  string asStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar15 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_70,"Play_PVZ_CoconutCannon_PF_Impact");
  RealObject::PlayPositionalSound(pRVar15,asStack_70,0.0);
  std::string::~string(asStack_70);
  nop();
  lVar6 = FUN_040ef84c(*(undefined8 *)(this + 0x10));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    iVar17 = 5;
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    uVar8 = *(undefined8 *)(lVar7 + 0x70);
    uVar14 = 1;
  }
  else {
    iVar17 = 6;
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    uVar8 = *(undefined8 *)(lVar7 + 0x70);
    uVar14 = 2;
  }
  FUN_040ee8b4(uVar8,uVar14);
  uVar16 = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e8);
  uVar5 = operator|(2,4);
  Sexy::Insets::Insets
            ((Insets *)asStack_70,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),iVar17,1);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e8,uVar5,
             asStack_70);
  do {
    uVar8 = local_e8;
    uVar11 = FUN_040ee8c4(local_e8,local_e0);
    if (uVar11 <= uVar16) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_e8);
      DamageInfo::~DamageInfo(aDStack_d0);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    FUN_040ee8d0(uVar8,uVar16);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_f8,(RtWeakPtrBase *)asStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    puVar9 = (undefined8 *)FUN_040ee8d0(local_e8,uVar16);
    Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar9);
    puVar9 = (undefined8 *)FUN_040ee8d0(local_e8,uVar16);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_f8);
    if (cVar2 != '\0') {
      pRVar15 = *(RealObject **)(this + 0x10);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_f8);
      cVar2 = RealObject::IsOnOpposingTeam(pRVar15,(RealObject *)pRVar10);
      if (cVar2 != '\0') {
        if (this_00 == (Zombie *)0x0) {
          plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
          (**(code **)(*plVar12 + 0x110))(plVar12,aDStack_d0);
          Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
        }
        else {
          cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
          if (((cVar2 == '\0') &&
              (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
             (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')) {
            plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
            (**(code **)(*plVar12 + 0x110))(plVar12,aDStack_d0);
            cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
            if (((cVar2 == '\0') &&
                (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
               ((cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0' &&
                (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')))) {
              this_01 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
              cVar2 = Zombie::IsBerserk(this_00);
              if (((cVar2 == '\0') && (cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0')) &&
                 ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
                  (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))) {
                Zombie::GetCurrentTitleStatus();
                if (((local_58 != '\0') ||
                    (bVar3 = zombieIsBlacklisted(this,this_00),
                    (this_01 != (RtObject *)0x0) <= bVar3)) ||
                   (bVar4 = Sexy::RtObject::IsA<SkyCityStage>(this_01), bVar4)) {
                  TitleStatus::~TitleStatus((TitleStatus *)asStack_70);
                }
                else {
                  bVar4 = Sexy::RtObject::IsA<BeachStage>(this_01);
                  if (bVar4) {
                    cVar2 = Zombie::IsInWater(this_00);
                    TitleStatus::~TitleStatus((TitleStatus *)asStack_70);
                    if (cVar2 != '\0') goto LAB_040f12f4;
                  }
                  else {
                    TitleStatus::~TitleStatus((TitleStatus *)asStack_70);
                  }
                  fVar19 = *(float *)(lVar6 + 0x2c8);
                  if (cVar1 == '\0') {
LAB_040f1534:
                    fVar18 = 1.0;
                  }
                  else {
                    if (this[0x28] != (PlantKiwiFruit)0x0) {
                      fVar19 = *(float *)(lVar6 + 0x2cc);
                      goto LAB_040f1534;
                    }
                    ToolPacketData::GetProps();
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)asStack_70,
                               (RtWeakPtrBase *)aRStack_f0);
                    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                    push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                               *)(this + 0x30),(RtWeakPtr *)asStack_70);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
                    fVar18 = (float)PVZ_EOT();
                  }
                  Zombie::SetIsControlled(this_00,true);
                  pSVar13 = (SexyVector3 *)
                            std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_00);
                  Zombie::StuckIntoGround(this_00,pSVar13,fVar19,fVar18,65.0,0.0,true);
                }
              }
            }
          }
        }
      }
    }
LAB_040f12f4:
    uVar16 = uVar16 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKiwiFruit::DoSpecial(int) */

void PlantKiwiFruit::DoSpecial(int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  Zombie *this;
  ResourceInfo *pRVar10;
  ulong uVar11;
  long *plVar12;
  RtObject *this_00;
  SexyVector3 *pSVar13;
  PlantKiwiFruit *this_01;
  undefined8 uVar14;
  RealObject *pRVar15;
  ulong uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  RtWeakPtr<Sexy::SoundResource> aRStack_f8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  DamageInfo aDStack_d0 [96];
  string asStack_70 [24];
  char cStack_58;
  long lStack_8;
  
  this_01 = (PlantKiwiFruit *)(ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  pRVar15 = *(RealObject **)(this_01 + 0x10);
  std::string::string(asStack_70,"Play_PVZ_CoconutCannon_PF_Impact");
  RealObject::PlayPositionalSound(pRVar15,asStack_70,0.0);
  std::string::~string(asStack_70);
  nop();
  lVar6 = FUN_040ef84c(*(undefined8 *)(this_01 + 0x10));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this_01 + 0x10));
  if (cVar1 == '\0') {
    iVar17 = 5;
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    uVar8 = *(undefined8 *)(lVar7 + 0x70);
    uVar14 = 1;
  }
  else {
    iVar17 = 6;
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    uVar8 = *(undefined8 *)(lVar7 + 0x70);
    uVar14 = 2;
  }
  FUN_040ee8b4(uVar8,uVar14);
  uVar16 = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this_01 + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_e8);
  uVar5 = operator|(2,4);
  Sexy::Insets::Insets
            ((Insets *)asStack_70,*(int *)(*(long *)(this_01 + 0x10) + 0x114),
             *(int *)(*(long *)(this_01 + 0x10) + 0x110),iVar17,1);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_e8,uVar5,
             asStack_70);
  do {
    uVar8 = uStack_e8;
    uVar11 = FUN_040ee8c4(uStack_e8,uStack_e0);
    if (uVar11 <= uVar16) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&uStack_e8);
      DamageInfo::~DamageInfo(aDStack_d0);
      if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    FUN_040ee8d0(uVar8,uVar16);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_f8,(RtWeakPtrBase *)asStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    puVar9 = (undefined8 *)FUN_040ee8d0(uStack_e8,uVar16);
    Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar9);
    puVar9 = (undefined8 *)FUN_040ee8d0(uStack_e8,uVar16);
    this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_f8);
    if (cVar2 != '\0') {
      pRVar15 = *(RealObject **)(this_01 + 0x10);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_f8);
      cVar2 = RealObject::IsOnOpposingTeam(pRVar15,(RealObject *)pRVar10);
      if (cVar2 != '\0') {
        if (this == (Zombie *)0x0) {
          plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
          (**(code **)(*plVar12 + 0x110))(plVar12,aDStack_d0);
          Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
        }
        else {
          cVar2 = (**(code **)(*(long *)this + 0x328))(this);
          if (((cVar2 == '\0') &&
              (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
             (cVar2 = Zombie::IsInvisible(this), cVar2 == '\0')) {
            plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
            (**(code **)(*plVar12 + 0x110))(plVar12,aDStack_d0);
            cVar2 = (**(code **)(*(long *)this + 0x328))(this);
            if (((cVar2 == '\0') &&
                (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
               ((cVar2 = Zombie::IsControlled(this), cVar2 == '\0' &&
                (cVar2 = Zombie::IsInvisible(this), cVar2 == '\0')))) {
              this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
              cVar2 = Zombie::IsBerserk(this);
              if (((cVar2 == '\0') && (cVar2 = Zombie::HasFogImmune(this), cVar2 == '\0')) &&
                 ((cVar2 = (**(code **)(*(long *)this + 0x4d8))(this), cVar2 == '\0' &&
                  (cVar2 = (**(code **)(*(long *)this + 0x508))(this), cVar2 == '\0')))) {
                Zombie::GetCurrentTitleStatus();
                if (((cStack_58 != '\0') ||
                    (bVar3 = zombieIsBlacklisted(this_01,this),
                    (this_00 != (RtObject *)0x0) <= bVar3)) ||
                   (bVar4 = Sexy::RtObject::IsA<SkyCityStage>(this_00), bVar4)) {
                  TitleStatus::~TitleStatus((TitleStatus *)asStack_70);
                }
                else {
                  bVar4 = Sexy::RtObject::IsA<BeachStage>(this_00);
                  if (bVar4) {
                    cVar2 = Zombie::IsInWater(this);
                    TitleStatus::~TitleStatus((TitleStatus *)asStack_70);
                    if (cVar2 != '\0') goto LAB_040f12f4;
                  }
                  else {
                    TitleStatus::~TitleStatus((TitleStatus *)asStack_70);
                  }
                  fVar19 = *(float *)(lVar6 + 0x2c8);
                  if (cVar1 == '\0') {
LAB_040f1534:
                    fVar18 = 1.0;
                  }
                  else {
                    if (this_01[0x28] != (PlantKiwiFruit)0x0) {
                      fVar19 = *(float *)(lVar6 + 0x2cc);
                      goto LAB_040f1534;
                    }
                    ToolPacketData::GetProps();
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)asStack_70,
                               (RtWeakPtrBase *)aRStack_f0);
                    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                    push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                               *)(this_01 + 0x30),(RtWeakPtr *)asStack_70);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
                    fVar18 = (float)PVZ_EOT();
                  }
                  Zombie::SetIsControlled(this,true);
                  pSVar13 = (SexyVector3 *)
                            std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this);
                  Zombie::StuckIntoGround(this,pSVar13,fVar19,fVar18,65.0,0.0,true);
                }
              }
            }
          }
        }
      }
    }
LAB_040f12f4:
    uVar16 = uVar16 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  } while( true );
}

