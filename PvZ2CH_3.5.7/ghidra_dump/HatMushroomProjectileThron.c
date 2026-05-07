// Class: HatMushroomProjectileThron


/* HatMushroomProjectileThron::InitialSetPosition(float, float, float) */

void __thiscall
HatMushroomProjectileThron::InitialSetPosition
          (HatMushroomProjectileThron *this,float param_1,float param_2,float param_3)

{
  Projectile::InitialSetPosition((Projectile *)this,param_1,param_2,param_3);
  *(float *)(this + 0x1b0) = param_1;
  *(float *)(this + 0x1b4) = param_2;
  *(float *)(this + 0x1b8) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectileThron::StaticClassInit() */

void HatMushroomProjectileThron::StaticClassInit(void)

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
    std::string::string(asStack_10,"HatMushroomProjectileThron");
    (*pcVar2)(plVar1,asStack_10,FUN_03b20040,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HatMushroomProjectileThron::StaticGetClass() */

long * HatMushroomProjectileThron::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HatMushroomProjectileThron",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HatMushroomProjectileThron::GetClass() const */

long * HatMushroomProjectileThron::GetClass(void)

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
  (*pcVar3)(plVar1,"HatMushroomProjectileThron",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HatMushroomProjectileThron::HatMushroomProjectileThron() */

void __thiscall
HatMushroomProjectileThron::HatMushroomProjectileThron(HatMushroomProjectileThron *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0672dc00;
  *(undefined ***)(this + 0x10) = &PTR__HatMushroomProjectileThron_0672ddf0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  DVec3::DVec3((DVec3 *)(this + 0x1b0));
  return;
}


/* HatMushroomProjectileThron::StaticNew() */

HatMushroomProjectileThron * HatMushroomProjectileThron::StaticNew(void)

{
  HatMushroomProjectileThron *this;
  
  this = ::operator_new(0x1c0);
  HatMushroomProjectileThron(this);
  return this;
}


/* HatMushroomProjectileThron::~HatMushroomProjectileThron() */

void __thiscall
HatMushroomProjectileThron::~HatMushroomProjectileThron(HatMushroomProjectileThron *this)

{
  *(undefined ***)this = &PTR_GetClass_0672dc00;
  *(undefined ***)(this + 0x10) = &PTR__HatMushroomProjectileThron_0672ddf0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HatMushroomProjectileThron::~HatMushroomProjectileThron() */

void __thiscall
HatMushroomProjectileThron::~HatMushroomProjectileThron(HatMushroomProjectileThron *this)

{
  ~HatMushroomProjectileThron(this + -0x10);
  return;
}


/* HatMushroomProjectileThron::~HatMushroomProjectileThron() */

void __thiscall
HatMushroomProjectileThron::~HatMushroomProjectileThron(HatMushroomProjectileThron *this)

{
  ~HatMushroomProjectileThron(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HatMushroomProjectileThron::~HatMushroomProjectileThron() */

void __thiscall
HatMushroomProjectileThron::~HatMushroomProjectileThron(HatMushroomProjectileThron *this)

{
  ~HatMushroomProjectileThron(this + -0x10);
  return;
}


/* HatMushroomProjectileThron::onUpdate(float) */

void HatMushroomProjectileThron::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  RtObject *this;
  HatMushroomProjectileThronProps *pHVar2;
  float fVar3;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar3 = (float)Distance2D(*pfVar1,pfVar1[1],*(float *)(in_x0 + 0x1b0),*(float *)(in_x0 + 0x1b4));
  this = (RtObject *)Projectile::GetProps((Projectile *)in_x0);
  pHVar2 = Sexy::RtObject::Cast<HatMushroomProjectileThronProps>(this);
  if ((float)*(int *)(pHVar2 + 0x1e0) < fVar3) {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectileThron::getCollisionEntities(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, Sexy::TRect<int> const&) const */

void __thiscall
HatMushroomProjectileThron::getCollisionEntities
          (HatMushroomProjectileThron *this,vector *param_1,TRect *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ResourceInfo *pRVar3;
  ResourceInfo *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Projectile::getCollisionEntities((Projectile *)this,(vector *)avStack_20,param_2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_38 = (ResourceInfo *)*puVar2;
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a8));
    if (local_38 != pRVar3) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                 (BoardEntity **)&local_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

