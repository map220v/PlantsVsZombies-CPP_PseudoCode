// Class: CardGameZombieWindTornado


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieWindTornado::TryFlickZombie(Zombie*) */

void __thiscall
CardGameZombieWindTornado::TryFlickZombie(CardGameZombieWindTornado *this,Zombie *param_1)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float local_40;
  float local_3c;
  FastCurve aFStack_38 [4];
  float local_34;
  FastCurve aFStack_30 [8];
  float local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)RandRangeFloat(30.0,85.0);
  fVar3 = (float)Sexy::SexyMath::DegToRad(fVar3);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  Sexy::FastCurve::SetOutRange(aFStack_38,*pfVar2,pfVar2[2]);
  fVar4 = cosf(fVar3);
  fVar3 = sinf(fVar3);
  Sexy::FastCurve::SetOutRange(aFStack_30,fVar4,fVar3);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_28,850.0,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,local_28[0],pfVar2[1],local_34);
  uVar5 = 0x3f800000;
  local_40 = 0.0;
  local_3c = 0.0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,0.0,1.0);
  cVar1 = LineLineIntersect((SexyVector2 *)aFStack_38,(SexyVector2 *)aFStack_30,
                            (SexyVector2 *)local_28,(SexyVector2 *)&local_20,&local_40,&local_3c,
                            0.0001);
  if (cVar1 != '\0') {
    local_20 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_30,local_40);
    local_1c = uVar5;
    local_18[0] = Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_38,(SexyVector2 *)&local_20);
    local_10 = uVar5;
  }
  Zombie::FlickOff((SexyVector3 *)param_1,500.0,-500.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieWindTornado::moveThroughTime(float) */

void CardGameZombieWindTornado::moveThroughTime(float param_1)

{
  char cVar1;
  undefined8 *puVar2;
  SexyVector3 *pSVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 auStack_78 [4];
  undefined4 auStack_68 [4];
  undefined4 auStack_58 [4];
  undefined4 auStack_48 [4];
  undefined4 auStack_38 [4];
  undefined4 auStack_28 [4];
  undefined4 auStack_18 [4];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  uStack_a8 = *puVar2;
  uStack_a0 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)Projectile::GetVelocity((Projectile *)in_x0);
  uStack_98 = *puVar2;
  uStack_90 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)in_x0);
  uStack_88 = *puVar2;
  uStack_80 = *(undefined4 *)(puVar2 + 1);
  cVar1 = Projectile::IsSkipAdditionalAngularVelocity((Projectile *)in_x0);
  pcVar4 = *(code **)(*(long *)in_x0 + 0x78);
  pSVar3 = (SexyVector3 *)Projectile::GetVelocityScale((Projectile *)in_x0);
  auStack_78[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&uStack_98,pSVar3);
  auStack_68[0] = Sexy::SexyVector3::operator*((SexyVector3 *)auStack_78,param_1);
  auStack_58[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&uStack_a8,(SexyVector3 *)auStack_68);
  auStack_48[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&uStack_88,param_1);
  auStack_38[0] = Sexy::SexyVector3::operator*((SexyVector3 *)auStack_48,param_1);
  auStack_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)auStack_38,0.5);
  auStack_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)auStack_58,(SexyVector3 *)auStack_28);
  (*pcVar4)();
  auStack_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&uStack_88,param_1);
  auStack_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&uStack_98,(SexyVector3 *)auStack_28);
  Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)auStack_18);
  if (cVar1 == '\0') {
    fVar5 = (float)FUN_0434ada8(*(undefined4 *)(in_x0 + 0xc4));
    fVar6 = (float)FUN_0434adac(*(undefined4 *)(in_x0 + 0xcc));
    FUN_0434adb0(fVar5 + param_1 * fVar6,in_x0 + 0xc4);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieWindTornado::StaticClassInit() */

void CardGameZombieWindTornado::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameZombieWindTornado");
    (*pcVar2)(plVar1,asStack_10,FUN_04e1a0f0,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombieWindTornado::StaticGetClass() */

long * CardGameZombieWindTornado::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameZombieWindTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombieWindTornado::GetClass() const */

long * CardGameZombieWindTornado::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameZombieWindTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombieWindTornado::CardGameZombieWindTornado() */

void __thiscall
CardGameZombieWindTornado::CardGameZombieWindTornado(CardGameZombieWindTornado *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069d6e70;
  *(undefined ***)(this + 0x10) = &PTR__CardGameZombieWindTornado_069d7060;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* CardGameZombieWindTornado::StaticNew() */

CardGameZombieWindTornado * CardGameZombieWindTornado::StaticNew(void)

{
  CardGameZombieWindTornado *this;
  
  this = ::operator_new(0x1c0);
  CardGameZombieWindTornado(this);
  return this;
}


/* CardGameZombieWindTornado::onInitialized() */

void __thiscall CardGameZombieWindTornado::onInitialized(CardGameZombieWindTornado *this)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1a8));
  return;
}


/* CardGameZombieWindTornado::~CardGameZombieWindTornado() */

void __thiscall
CardGameZombieWindTornado::~CardGameZombieWindTornado(CardGameZombieWindTornado *this)

{
  *(undefined ***)this = &PTR_GetClass_069d6e70;
  *(undefined ***)(this + 0x10) = &PTR__CardGameZombieWindTornado_069d7060;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CardGameZombieWindTornado::~CardGameZombieWindTornado() */

void __thiscall
CardGameZombieWindTornado::~CardGameZombieWindTornado(CardGameZombieWindTornado *this)

{
  ~CardGameZombieWindTornado(this + -0x10);
  return;
}


/* CardGameZombieWindTornado::~CardGameZombieWindTornado() */

void __thiscall
CardGameZombieWindTornado::~CardGameZombieWindTornado(CardGameZombieWindTornado *this)

{
  ~CardGameZombieWindTornado(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameZombieWindTornado::~CardGameZombieWindTornado() */

void __thiscall
CardGameZombieWindTornado::~CardGameZombieWindTornado(CardGameZombieWindTornado *this)

{
  ~CardGameZombieWindTornado(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombieWindTornado::OnCollideEntity(BoardEntity*) */

void __thiscall
CardGameZombieWindTornado::OnCollideEntity(CardGameZombieWindTornado *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  Zombie *this_01;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
  if ((bool)uVar1) {
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    iVar3 = FUN_04e18478(*(undefined4 *)(this_01 + 0x24));
    if (iVar3 == 2) {
      uVar1 = 0;
    }
    else {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1a8);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar4,uVar5,aRStack_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (bVar2) {
        TryFlickZombie(this,this_01);
        iVar3 = Zombie::GetSizeType(this_01);
        if (iVar3 != 0) {
          (**(code **)(*(long *)this + 0x48))(this);
        }
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   this_00,(RtWeakPtr *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

