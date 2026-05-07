// Class: ProjectilesGroup


/* ProjectilesGroup::setProjectileBasePos(Sexy::SexyVector3) */

void ProjectilesGroup::setProjectileBasePos
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x10),(SexyVector3 *)&local_10);
  return;
}


/* ProjectilesGroup::setProjectileSpawnedDelegate(RtReflectionDelegate<Sexy::Delegate2<Projectile*,
   int> >) */

void __thiscall
ProjectilesGroup::setProjectileSpawnedDelegate(ProjectilesGroup *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x30),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectilesGroup::StaticClassInit() */

void ProjectilesGroup::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProjectilesGroup");
    (*pcVar2)(plVar1,asStack_10,FUN_037c72b4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProjectilesGroup::StaticGetClass() */

long * ProjectilesGroup::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ProjectilesGroup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProjectilesGroup::GetClass() const */

long * ProjectilesGroup::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ProjectilesGroup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProjectilesGroup::~ProjectilesGroup() */

void __thiscall ProjectilesGroup::~ProjectilesGroup(ProjectilesGroup *this)

{
  *(undefined ***)this = &PTR_GetClass_06699850;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  nop();
  return;
}


/* ProjectilesGroup::~ProjectilesGroup() */

void __thiscall ProjectilesGroup::~ProjectilesGroup(ProjectilesGroup *this)

{
  ~ProjectilesGroup(this);
  AK::FreeHook(this);
  return;
}


/* ProjectilesGroup::start() */

void __thiscall ProjectilesGroup::start(ProjectilesGroup *this)

{
  float fVar1;
  
  this[0x20] = (ProjectilesGroup)0x1;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x2c) = fVar1 + *(float *)(this + 0x1c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectilesGroup::ProjectilesGroup() */

void __thiscall ProjectilesGroup::ProjectilesGroup(ProjectilesGroup *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06699850;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  DVec3::DVec3((DVec3 *)(this + 0x10));
  RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)a_Stack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  DVec3::DVec3((DVec3 *)a_Stack_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x10),(SexyVector3 *)a_Stack_18);
  this[0x20] = (ProjectilesGroup)0x0;
  this[0x21] = (ProjectilesGroup)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar2 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x2c) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProjectilesGroup::StaticNew() */

ProjectilesGroup * ProjectilesGroup::StaticNew(void)

{
  ProjectilesGroup *this;
  
  this = ::operator_new(0x78);
  ProjectilesGroup(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectilesGroup::update() */

void __thiscall ProjectilesGroup::update(ProjectilesGroup *this)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  float fVar5;
  Board *pBVar9;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x20] != (ProjectilesGroup)0x0) && (0 < *(int *)(this + 0x28))) &&
     (fVar8 = *(float *)(this + 0x2c), fVar5 = (float)PVZ_T(), fVar8 < fVar5)) {
                    /* WARNING: Load size is inaccurate */
    pBVar9._0_4_ = *(Board **)(this + 0x10);
    uVar6 = *(undefined4 *)(this + 0x14);
    uVar7 = *(undefined4 *)(this + 0x18);
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 8));
    pcVar2 = (char *)Board::AddProjectile(pBVar9._0_4_,uVar6,uVar7,uVar4,aRStack_10,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x30));
    if (iVar1 != 0) {
      pcVar3 = (char *)RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::GetDelegate
                                 ((RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *)
                                  (this + 0x30));
      Sexy::Delegate2<char_const*,char_const*>::operator()(pcVar3,pcVar2);
    }
    iVar1 = *(int *)(this + 0x24);
    *(int *)(this + 0x24) = iVar1 + 1;
    if (iVar1 + 1 < *(int *)(this + 0x28)) {
      *(float *)(this + 0x2c) = *(float *)(this + 0x2c) + *(float *)(this + 0x1c);
    }
    else {
      uVar6 = PVZ_EOT();
      this[0x20] = (ProjectilesGroup)0x0;
      this[0x21] = (ProjectilesGroup)0x1;
      *(undefined4 *)(this + 0x2c) = uVar6;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

