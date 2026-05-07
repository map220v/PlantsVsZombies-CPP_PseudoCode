// Class: AgaveSwordLight


/* AgaveSwordLight::Draw(Sexy::Graphics*) */

void AgaveSwordLight::Draw(Graphics *param_1)

{
  (**(code **)(*(long *)param_1 + 0xe8))();
  return;
}


/* non-virtual thunk to AgaveSwordLight::Draw(Sexy::Graphics*) */

void __thiscall AgaveSwordLight::Draw(AgaveSwordLight *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgaveSwordLight::StaticClassInit() */

void AgaveSwordLight::StaticClassInit(void)

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
    std::string::string(asStack_10,"AgaveSwordLight");
    (*pcVar2)(plVar1,asStack_10,FUN_0491a6c4,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AgaveSwordLight::StaticGetClass() */

long * AgaveSwordLight::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"AgaveSwordLight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AgaveSwordLight::GetClass() const */

long * AgaveSwordLight::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"AgaveSwordLight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AgaveSwordLight::onAnimationDone(std::string const&) */

void __thiscall AgaveSwordLight::onAnimationDone(AgaveSwordLight *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"re");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgaveSwordLight::InitialSetPosition(float, float, float) */

void __thiscall
AgaveSwordLight::InitialSetPosition(AgaveSwordLight *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 auStack_30 [8];
  TRect<float> aTStack_28 [4];
  float local_24;
  float local_20;
  float local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::InitialSetPosition((Projectile *)this,param_1,param_2,param_3);
  lVar2 = Projectile::GetProps((Projectile *)this);
  Sexy::TRect<float>::TRect(aTStack_28,(TRect *)(lVar2 + 0x120));
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(auStack_30,*(long **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)param_1,(int)(param_2 + local_24),(int)local_20,(int)local_1c)
  ;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x1c0) = local_18;
  *(undefined8 *)(this + 0x1c8) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AgaveSwordLight::AgaveSwordLight() */

void __thiscall AgaveSwordLight::AgaveSwordLight(AgaveSwordLight *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0690fc20;
  *(undefined ***)(this + 0x10) = &PTR__AgaveSwordLight_0690fe10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  Sexy::Insets::Insets((Insets *)(this + 0x1c0));
  *(undefined4 *)(this + 0x1d0) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1d4) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d8));
  return;
}


/* AgaveSwordLight::StaticNew() */

AgaveSwordLight * AgaveSwordLight::StaticNew(void)

{
  AgaveSwordLight *this;
  
  this = ::operator_new(0x1e0);
  AgaveSwordLight(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgaveSwordLight::onProjectileInitialized() */

void __thiscall AgaveSwordLight::onProjectileInitialized(AgaveSwordLight *this)

{
  long *plVar1;
  PopAnimRig *pPVar2;
  undefined4 uVar3;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  Insets aIStack_60 [12];
  int local_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1d4) = uVar3;
  Sexy::Insets::Insets(aIStack_60);
  plVar1 = (long *)Projectile::GetAnimRig((Projectile *)this);
  (**(code **)(*plVar1 + 0x90))(plVar1,aIStack_60);
  uVar3 = FUN_04919c24(local_54 + -0x32);
  *(undefined4 *)(this + 0x1d0) = uVar3;
  pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_68,"re");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string(asStack_70,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
             asStack_70);
  PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AgaveSwordLight::~AgaveSwordLight() */

void __thiscall AgaveSwordLight::~AgaveSwordLight(AgaveSwordLight *this)

{
  *(undefined ***)this = &PTR_GetClass_0690fc20;
  *(undefined ***)(this + 0x10) = &PTR__AgaveSwordLight_0690fe10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to AgaveSwordLight::~AgaveSwordLight() */

void __thiscall AgaveSwordLight::~AgaveSwordLight(AgaveSwordLight *this)

{
  ~AgaveSwordLight(this + -0x10);
  return;
}


/* AgaveSwordLight::~AgaveSwordLight() */

void __thiscall AgaveSwordLight::~AgaveSwordLight(AgaveSwordLight *this)

{
  ~AgaveSwordLight(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AgaveSwordLight::~AgaveSwordLight() */

void __thiscall AgaveSwordLight::~AgaveSwordLight(AgaveSwordLight *this)

{
  ~AgaveSwordLight(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgaveSwordLight::dealAreaDamage() */

void __thiscall AgaveSwordLight::dealAreaDamage(AgaveSwordLight *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  GridItem *this_01;
  Zombie *this_02;
  ResourceInfo *pRVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  code *pcVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  uVar11 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangleWithoutGrid
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
             this + 0x1c0);
  uVar8 = local_80;
  lVar4 = FUN_04919b2c(local_80,local_78);
  if (lVar4 != 0) {
    do {
      FUN_04919b38(uVar8,uVar11);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)&local_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
      puVar5 = (undefined8 *)FUN_04919b38(local_80,uVar11);
      this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
      puVar5 = (undefined8 *)FUN_04919b38(local_80,uVar11);
      this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_98);
      if (cVar1 == '\0') {
LAB_0491afc0:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      else {
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar6);
        if (cVar1 == '\0') goto LAB_0491afc0;
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_90 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                             (uVar8,uVar9,aRStack_98);
        local_88 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88)
        ;
        if (((bVar2) ||
            ((this_01 != (GridItem *)0x0 &&
             (bVar2 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)this_01), bVar2)))) ||
           ((this_02 != (Zombie *)0x0 &&
            ((((cVar1 = (**(code **)(*(long *)this_02 + 0x328))(this_02), cVar1 != '\0' ||
               (cVar1 = (**(code **)(*(long *)this_02 + 0x330))(this_02), cVar1 != '\0')) ||
              (cVar1 = Zombie::IsControlled(this_02), cVar1 != '\0')) ||
             (cVar1 = Zombie::IsInvisible(this_02), cVar1 != '\0')))))) goto LAB_0491afc0;
        pcVar12 = *(code **)(*(long *)this + 0x178);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
        (*pcVar12)(this,aDStack_68,pRVar6);
        plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
        (**(code **)(*plVar10 + 0x110))(plVar10,aDStack_68);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)this_00,(RtWeakPtr *)aRStack_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      uVar8 = local_80;
      uVar11 = uVar11 + 1;
      uVar7 = FUN_04919b2c(local_80,local_78);
    } while (uVar11 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgaveSwordLight::onUpdate(float) */

void AgaveSwordLight::onUpdate(float param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  AgaveSwordLight *in_x0;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(in_x0 + 0x1d4);
  fVar5 = (float)PVZ_T();
  if (fVar5 <= fVar6) {
    return;
  }
  dealAreaDamage(in_x0);
  fVar5 = (float)PVZ_T();
  *(float *)(in_x0 + 0x1d4) = fVar5 + _FUN_0491b248;
  fVar5 = (float)FUN_04919b1c(*(undefined4 *)(in_x0 + 0xc4));
  fVar6 = cosf(fVar5);
  fVar5 = sinf(fVar5);
  uVar2 = *(int *)(in_x0 + 0x1c8) * 3;
  uVar1 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uVar4 = (uint)((float)*(int *)(in_x0 + 0x1c0) + (float)((int)uVar1 >> 2) * fVar6);
  *(uint *)(in_x0 + 0x1c0) = uVar4;
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)(ulong)uVar4,(wchar16 *)(ulong)(uint)((int)uVar1 >> 2),
                     (LineBreakCategory *)(ulong)(uVar2 + 3),in_x3,in_x4);
  if (cVar3 != '\0') {
    *(int *)(in_x0 + 0x1c4) =
         (int)((float)*(int *)(in_x0 + 0x1c4) - (float)(*(int *)(in_x0 + 0x1d0) / 6) * fVar5);
    return;
  }
  *(int *)(in_x0 + 0x1c4) =
       (int)((float)*(int *)(in_x0 + 0x1c4) - (float)*(int *)(in_x0 + 0x1d0) * fVar5);
  return;
}

