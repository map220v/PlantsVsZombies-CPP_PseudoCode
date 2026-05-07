// Class: EleocurlingPenetrateProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingPenetrateProjectile::StaticClassInit() */

void EleocurlingPenetrateProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"EleocurlingPenetrateProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0423ae3c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EleocurlingPenetrateProjectile::StaticGetClass() */

long * EleocurlingPenetrateProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EleocurlingPenetrateProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingPenetrateProjectile::GetClass() const */

long * EleocurlingPenetrateProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"EleocurlingPenetrateProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingPenetrateProjectile::SetAvatarIndex(int) */

void __thiscall
EleocurlingPenetrateProjectile::SetAvatarIndex(EleocurlingPenetrateProjectile *this,int param_1)

{
  int iVar1;
  string *psVar2;
  ulong uVar3;
  PopAnimRig *pPVar4;
  char *__s;
  ulong uVar5;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x1a8) = param_1;
  local_8 = ___stack_chk_guard;
  for (uVar5 = 0; uVar3 = FUN_04234b44(DAT_06af4400,DAT_06af4408), uVar5 < uVar3; uVar5 = uVar5 + 1)
  {
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    psVar2 = (string *)FUN_04234b50(DAT_06af4400,uVar5);
    PopAnimRig::SetLayerVisibility(pPVar4,psVar2,false);
  }
  iVar1 = *(int *)(this + 0x1a8);
  if (iVar1 == 0) {
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string(asStack_10,"custom_01_big");
    PopAnimRig::SetLayerVisibility(pPVar4,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    __s = "custom_01_small";
  }
  else {
    if (iVar1 == 1) {
      pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_10,"custom_02_big");
      PopAnimRig::SetLayerVisibility(pPVar4,asStack_10,true);
      std::string::~string(asStack_10);
      nop();
      pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_10,"custom_02_small");
      PopAnimRig::SetLayerVisibility(pPVar4,asStack_10,true);
      std::string::~string(asStack_10);
      nop();
      goto LAB_0423750c;
    }
    if (iVar1 != 2) goto LAB_0423750c;
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string(asStack_10,"custom_03_big");
    PopAnimRig::SetLayerVisibility(pPVar4,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    __s = "custom_03_small";
  }
  std::string::string(asStack_10,__s);
  PopAnimRig::SetLayerVisibility(pPVar4,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
LAB_0423750c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EleocurlingPenetrateProjectile::EleocurlingPenetrateProjectile() */

void __thiscall
EleocurlingPenetrateProjectile::EleocurlingPenetrateProjectile(EleocurlingPenetrateProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (EleocurlingPenetrateProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_06813870;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingPenetrateProjectile_06813a60;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  Sexy::Point::Point((Point *)(this + 0x1ac));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* EleocurlingPenetrateProjectile::StaticNew() */

EleocurlingPenetrateProjectile * EleocurlingPenetrateProjectile::StaticNew(void)

{
  EleocurlingPenetrateProjectile *this;
  
  this = ::operator_new(0x1d0);
  EleocurlingPenetrateProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingPenetrateProjectile::onUpdate(float) */

void EleocurlingPenetrateProjectile::onUpdate(float param_1)

{
  TPoint<int> *this;
  char cVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar4;
  undefined8 local_10;
  long local_8;
  
  this = (TPoint<int> *)(in_x0 + 0x1ac);
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*pfVar4);
  iVar3 = BoardTransforms::BoardSpaceToGridX(pfVar4[1]);
  Sexy::Point::Point((Point *)&local_10,iVar2,iVar3);
  cVar1 = Sexy::TPoint<int>::operator!=(this,(TPoint *)&local_10);
  if ((cVar1 != '\0') &&
     (*(undefined8 *)this = local_10,
     in_x0[0x1a5] !=
     (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      )0x0)) {
    FUN_04239fa0(0x40000000,this,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EleocurlingPenetrateProjectile::~EleocurlingPenetrateProjectile() */

void __thiscall
EleocurlingPenetrateProjectile::~EleocurlingPenetrateProjectile
          (EleocurlingPenetrateProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06813870;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingPenetrateProjectile_06813a60;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to EleocurlingPenetrateProjectile::~EleocurlingPenetrateProjectile() */

void __thiscall
EleocurlingPenetrateProjectile::~EleocurlingPenetrateProjectile
          (EleocurlingPenetrateProjectile *this)

{
  ~EleocurlingPenetrateProjectile(this + -0x10);
  return;
}


/* EleocurlingPenetrateProjectile::~EleocurlingPenetrateProjectile() */

void __thiscall
EleocurlingPenetrateProjectile::~EleocurlingPenetrateProjectile
          (EleocurlingPenetrateProjectile *this)

{
  ~EleocurlingPenetrateProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EleocurlingPenetrateProjectile::~EleocurlingPenetrateProjectile() */

void __thiscall
EleocurlingPenetrateProjectile::~EleocurlingPenetrateProjectile
          (EleocurlingPenetrateProjectile *this)

{
  ~EleocurlingPenetrateProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingPenetrateProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
EleocurlingPenetrateProjectile::OnCollideEntity
          (EleocurlingPenetrateProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar3,uVar4,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (!bVar1) {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)aRStack_20);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

